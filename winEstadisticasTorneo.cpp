#include "winEstadisticasTorneo.h"
#include "winEditarInfoEquipo.h"
#include <wx/icon.h>
#include <wx/msgdlg.h>
#include <sstream>
#include "string_conv.h"
using namespace std;

winEstadisticasTorneo::winEstadisticasTorneo(wxWindow *parent,TorneoFutbol *torneo_futbol) : wxfbEstadisticasTorneo(parent),m_torneo_futbol(torneo_futbol) {
	SetIcon(wxIcon("icono.ico"));
	if(m_torneo_futbol->VerCantidadDeEquipos()!=0){
		
		for(int i=0;i<m_torneo_futbol->VerCantidadDeEquipos();i++){
			Equipo e= m_torneo_futbol->Ver_Datos_Equipo(i);
			m_gridInformacionEquipos->AppendRows();
			m_gridInformacionEquipos->SetCellValue(i,0,std_to_wx(e.VerNombre()));
			stringstream ss;
			ss<<e.Ver_Puntaje();
			string puntos=ss.str();
			m_gridInformacionEquipos->SetCellValue(i,1,std_to_wx(puntos));
		}}
}

void winEstadisticasTorneo::OnClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

void winEstadisticasTorneo::OnClickVerInfoEquipo( wxCommandEvent& event )  {
	if(m_torneo_futbol->VerCantidadDeEquipos()!=0){
	
	int fila=m_gridInformacionEquipos->GetGridCursorRow();
	winEditarInfoEquipo win(this,m_torneo_futbol,fila);
	win.ShowModal();}else{
		wxMessageBox("La grilla se encuentra vacia","ERROR",wxOK|wxICON_ERROR);
	}
}

winEstadisticasTorneo::~winEstadisticasTorneo() {
	
}

void winEstadisticasTorneo::OnCambiaTamanio( wxSizeEvent& event )  {

}

