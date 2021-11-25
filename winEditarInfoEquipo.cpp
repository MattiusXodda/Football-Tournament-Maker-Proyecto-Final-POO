#include "winEditarInfoEquipo.h"
#include "Equipo.h"
#include "string_conv.h"
#include "Director_Tecnico.h"
#include "Estadio.h"
#include <string>
#include <wx/msgdlg.h>
#include <wx/icon.h>
using namespace std;

winEditarInfoEquipo::winEditarInfoEquipo(wxWindow *parent,TorneoFutbol *torneo_futbol, int fila) : wxfbEditarInfoEquipo(parent),m_torneo_futbol(torneo_futbol),m_fila(fila) {
	SetIcon(wxIcon("icono.ico"));
	if(m_torneo_futbol->VerCantidadDeEquipos()!=0){
	Equipo e=m_torneo_futbol->Ver_Datos_Equipo(m_fila);
	m_textNombreEquipo->SetValue(std_to_wx(e.VerNombre()));
	Director_Tecnico dt=e.VerDatosDirectorTecnico();
	m_textNombreDT->SetValue(std_to_wx(dt.nombre));
	Estadio estad=e.VerEstadio();
	m_textNombreEstadio->SetValue(std_to_wx(estad.nombre));
	m_textCapacidadEstadio->SetValue(std_to_wx(to_string(estad.capacidad)));
	m_textUbicacionEstadio->SetValue(std_to_wx(estad.ubicacion));
	m_gridJugadores->SetSelectionMode(wxGrid::wxGridSelectRows);
	for(int i=0;i<e.VerCantidadJugadores();i++) { 
		m_gridJugadores->AppendRows();
		m_gridJugadores->SetCellValue(i,0,std_to_wx((e.VerDatosJugador(i)).VerNombre()));
		m_gridJugadores->SetCellValue(i,1,std_to_wx((e.VerDatosJugador(i)).VerPosicion()));
		m_cantidad_filas_grilla=m_cantidad_filas_grilla+1;
	}
	}
	
	
	
	
	
}


void winEditarInfoEquipo::OnClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

winEditarInfoEquipo::~winEditarInfoEquipo() {
	
}

void winEditarInfoEquipo::OnClickAceptarCambios( wxCommandEvent& event )  {
	std::string nombre_equipo= wx_to_std(m_textNombreEquipo->GetValue());
	
	Director_Tecnico dt={wx_to_std(m_textNombreDT->GetValue())};
	
	Estadio estadio_equipo={wx_to_std(m_textNombreEstadio->GetValue()),atoi(wx_to_std(m_textCapacidadEstadio->GetValue()).c_str()),false,wx_to_std(m_textUbicacionEstadio->GetValue())};
	
	Equipo equipo_futbol(nombre_equipo,dt,estadio_equipo);
	for(int i=0;i<m_cantidad_filas_grilla;i++) { 
		string nombre_jugador=wx_to_std(m_gridJugadores->GetCellValue(i,0));
		string pos_jugador=wx_to_std(m_gridJugadores->GetCellValue(i,1));
		Jugador j(nombre_jugador,pos_jugador);
		equipo_futbol.AgregarJugador(j);
	}
	equipo_futbol.sumar_puntaje((m_torneo_futbol->Ver_Datos_Equipo(m_fila)).Ver_Puntaje());
	
	string errores=equipo_futbol.ValidarDatosEquipoEditar(m_torneo_futbol->VerVectorEquipos(),m_fila);
	if(errores.empty()==false){
		wxMessageBox(errores,"Errores",wxOK|wxICON_ERROR,this);
	}else{
		m_torneo_futbol->EditarEquipo(equipo_futbol,m_fila);
		equipo_futbol.GuardarDatosEquipoEnArchivoDeTexto();
		wxMessageBox("El Equipo ha sido editado con exito","Notificación",wxOK|wxICON_INFORMATION,this);
		EndModal(1);
	}
}

void winEditarInfoEquipo::OnClickAgregarFilaJugadores( wxCommandEvent& event )  {
	m_gridJugadores->AppendRows();
	m_cantidad_filas_grilla=m_cantidad_filas_grilla+1;
}

void winEditarInfoEquipo::OnClickEliminarFilaJugadores( wxCommandEvent& event )  {
	if(m_cantidad_filas_grilla!=0){
	if(ValidarInfoGrilla()){
		string nombre_jugador=wx_to_std(m_gridJugadores->GetCellValue(m_gridJugadores->GetGridCursorRow(),0));
		string pos_jugador=wx_to_std(m_gridJugadores->GetCellValue(m_gridJugadores->GetGridCursorRow(),1));
		Equipo e=m_torneo_futbol->Ver_Datos_Equipo(m_fila);
		if(e.VerCantidadJugadores()!=0){
		Jugador j(nombre_jugador,pos_jugador);
		e.EliminarJugador(j);
		e.GuardarDatosEquipoEnArchivoDeTexto();
		m_torneo_futbol->EditarEquipo(e,m_fila);
		m_gridJugadores->DeleteRows(m_gridJugadores->GetGridCursorRow());
		--m_cantidad_filas_grilla;}else{
			m_gridJugadores->DeleteRows(m_gridJugadores->GetGridCursorRow());
			--m_cantidad_filas_grilla;
		}
	
	}else{
		m_gridJugadores->DeleteRows(m_gridJugadores->GetGridCursorRow());
		--m_cantidad_filas_grilla;
	}}else{
		wxMessageBox("La grilla se encuentra vacia","Error",wxOK|wxICON_ERROR,this);
	}
}
bool winEditarInfoEquipo::ValidarInfoGrilla(){
	bool validar=true;
	for(int i=0;i<m_cantidad_filas_grilla;i++) { 
		string nombre_jugador=wx_to_std(m_gridJugadores->GetCellValue(m_gridJugadores->GetGridCursorRow(),0));
		string pos_jugador=wx_to_std(m_gridJugadores->GetCellValue(m_gridJugadores->GetGridCursorRow(),1));
		if(nombre_jugador.size()==0 or pos_jugador.size()==0){
			validar=false;
			break;
		}
	}
	return validar;
}

