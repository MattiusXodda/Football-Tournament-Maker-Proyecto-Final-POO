#include "WinEliminarEquipo.h"
#include <wx/grid.h>
#include <wx/msgdlg.h>
#include "Partido.h"
#include <wx/icon.h>
#include "string_conv.h"

WinEliminarEquipo::WinEliminarEquipo(wxWindow *parent,TorneoFutbol *torneo_futbol) : wxfbEliminarEquipo(parent) 
,m_torneo_futbol(torneo_futbol){
	SetIcon(wxIcon("icono.ico"));
	if(m_torneo_futbol->VerCantidadDeEquipos()!=0){

	for(int i=0;i<m_torneo_futbol->VerCantidadDeEquipos();i++){
		Equipo e= m_torneo_futbol->Ver_Datos_Equipo(i);
		m_gridEliminarEquipo->AppendRows();
		m_gridEliminarEquipo->SetCellValue(i,0,std_to_wx(e.VerNombre()));
	}}
}

void WinEliminarEquipo::OnClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

void WinEliminarEquipo::OnClickEliminar( wxCommandEvent& event )  {
	if(m_torneo_futbol->VerCantidadDeEquipos()!=0){
		int yes_no=wxMessageBox("¿Esta seguro que desea eliminar el equipo?","Eliminar Equipo",wxYES_NO|wxCANCEL,this);
		if(yes_no==wxYES){
	
	int f=m_gridEliminarEquipo->GetGridCursorRow();
	Equipo e=m_torneo_futbol->Ver_Datos_Equipo(f);
	bool equipo_juega_partido=false;
	for(int i=0;i<m_torneo_futbol->VerCantidadDePartidos();i++){
		Partido p=m_torneo_futbol->VerPartido(i);
		if(p.equipo_local==e or p.equipo_visitante==e){
			equipo_juega_partido=true;
		}
	}
	if(equipo_juega_partido!=true){
	m_torneo_futbol->Eliminar_Nombre_Equipo(m_torneo_futbol->Ver_Datos_Equipo(f).VerNombre());
	m_torneo_futbol->Eliminar_Equipo(e);
	m_gridEliminarEquipo->DeleteRows(f);
	wxMessageBox("El Equipo ha sido eliminado con exito","Notificación",wxOK|wxICON_INFORMATION,this);}else{
		wxMessageBox("El equipo que esta intentando eliminar tiene partidos ingresados, antes de eliminar el equipo elimine todos los partidos en los que juega el equipo","ERROR",wxOK|wxICON_ERROR,this);
	}}
	}else{
		wxMessageBox("La grilla se encuentra vacia","ERROR",wxOK|wxICON_ERROR,this);
	}
	
}

void WinEliminarEquipo::OnCambiaTamanio( wxSizeEvent& event )  {
	event.Skip();
}

