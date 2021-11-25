#include "WinAgregarPartido.h"
#include <wx/arrstr.h>
#include "string_conv.h"
#include <wx/msgdlg.h>
#include "Partido.h"
#include <cstdlib>
#include <wx/icon.h>
using namespace std;

WinAgregarPartido::WinAgregarPartido(wxWindow *parent,TorneoFutbol *torneo_futbol) : wxfbAgregarPartido(parent),
m_torneo_futbol(torneo_futbol){
	SetIcon(wxIcon("icono.ico"));
	for(int i=0;i<m_torneo_futbol->VerCantidadDeEquipos();i++) { 
		m_choiceEquipoLocal->Append(std_to_wx((m_torneo_futbol->Ver_Datos_Equipo(i)).VerNombre()));
	}
	for(int i=0;i<m_torneo_futbol->VerCantidadDeEquipos();i++) { 
		m_choiceEquipoVisitante->Append(std_to_wx((m_torneo_futbol->Ver_Datos_Equipo(i)).VerNombre()));
	}
}

void WinAgregarPartido::OnClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

void WinAgregarPartido::OnClickAgregarPartido( wxCommandEvent& event )  {
	int numero_equipo_local=m_choiceEquipoLocal->GetSelection();
	int numero_equipo_visitante=m_choiceEquipoVisitante->GetSelection();
	Equipo equipo_local=m_torneo_futbol->Ver_Datos_Equipo(numero_equipo_local);
	Equipo equipo_visitante=m_torneo_futbol->Ver_Datos_Equipo(numero_equipo_visitante);	
	bool error=false;
	string numero_fecha=wx_to_std(m_textNroFecha->GetValue());
	if(numero_fecha.size()==0){
		wxMessageBox("La fecha esta vacia","ERROR",wxOK|wxICON_ERROR);
		error=true;
	}
	if(error!=true){
	int nro_fecha=atoi(wx_to_std(m_textNroFecha->GetValue()).c_str());
	
	string errores=m_torneo_futbol->Agregar_Partido(nro_fecha,equipo_local,equipo_visitante);
	if(errores.size()!=0){
		wxMessageBox(errores,"ERROR",wxOK|wxICON_ERROR);
	}else{
		wxMessageBox("El partido fue agregado exitosamente","Notificacion",wxOK|wxICON_INFORMATION);
		EndModal(1);
	}
	}
}
	

