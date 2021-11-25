#include "winAgregarEquipo.h"
#include "string_conv.h"
#include <string>
#include "Jugador.h"
#include "Estadio.h"
#include "Director_Tecnico.h"
#include <wx/msgdlg.h>
#include <cstdlib>
#include <wx/icon.h>



winAgregarEquipo::winAgregarEquipo(wxWindow *parent,TorneoFutbol *torneo_futbol) : 
	wxfbAgregarEquipo(parent),m_torneo_futbol(torneo_futbol){
	SetIcon(wxIcon("icono.ico"));
	
}

void winAgregarEquipo::OnClickCrearEquipo( wxCommandEvent& event )  {
	if(ValidarInfoGrilla()){
	std::string nombre_equipo= wx_to_std(m_textNombreEquipo->GetValue());
	
	Director_Tecnico dt={wx_to_std(m_textNombreDT->GetValue())};

	Estadio estadio_equipo={wx_to_std(m_textNombreEstadio->GetValue()),atoi(wx_to_std(m_textCapacidadEstadio->GetValue()).c_str()),false,wx_to_std(m_textUbicacionEstadio->GetValue())};
	
	
	
	Equipo equipo_futbol(nombre_equipo,dt,estadio_equipo);
	for(int i=0;i<m_numero_filas_grilla;i++) { 
		string nombre_jugador=wx_to_std(m_gridJugadores->GetCellValue(i,0));
		string posicion_jugador=wx_to_std(m_gridJugadores->GetCellValue(i,1));
		Jugador j(nombre_jugador,posicion_jugador);
		equipo_futbol.AgregarJugador(j);
	}
	vector<Equipo> equipos_torneo=m_torneo_futbol->VerVectorEquipos();
	string errores=equipo_futbol.ValidarDatosEquipoCrear(equipos_torneo);
	if(errores.empty()==false){
		wxMessageBox(errores,"Errores",wxOK|wxICON_ERROR,this);
	}else{
		m_torneo_futbol->Agregar_Equipo(equipo_futbol);
		equipo_futbol.GuardarDatosEquipoEnArchivoDeTexto();
		m_torneo_futbol->Guardar_Nombres_Equipos_En_Archivo(nombre_equipo);
		wxMessageBox("El Equipo ha sido creado con exito","Notificación",wxOK|wxICON_INFORMATION,this);
		EndModal(1);
	}}else{
		wxMessageBox("Hay filas con celdas vacias","Errores",wxOK|wxICON_ERROR,this);
	}
	
}

void winAgregarEquipo::OnClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

void winAgregarEquipo::OnClickAgregarFilaJugadores( wxCommandEvent& event )  {
	m_gridJugadores->AppendRows();
	++m_numero_filas_grilla;
}
bool winAgregarEquipo::ValidarInfoGrilla(){
	bool validar=true;
	for(int i=0;i<m_numero_filas_grilla;i++) { 
		string nombre_jugador=wx_to_std(m_gridJugadores->GetCellValue(m_gridJugadores->GetGridCursorRow(),0));
		string pos_jugador=wx_to_std(m_gridJugadores->GetCellValue(m_gridJugadores->GetGridCursorRow(),1));
		if(nombre_jugador.size()==0 or pos_jugador.size()==0){
			validar=false;
			break;
		}
	}
	return validar;
}

