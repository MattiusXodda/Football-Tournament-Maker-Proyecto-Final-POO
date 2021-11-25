#include "WinConfiguracionEquipos.h"
#include "winAgregarEquipo.h"
#include "WinEliminarEquipo.h"
#include <wx/icon.h>

WinConfiguracionEquipos::WinConfiguracionEquipos(wxWindow *parent,TorneoFutbol *torneo_futbol) : wxfbConfiguracionEquipos(parent),m_torneo_futbol(torneo_futbol) {
	SetIcon(wxIcon("icono.ico"));
}

void WinConfiguracionEquipos::OnClickAgregarEquipo( wxCommandEvent& event )  {
	winAgregarEquipo win(this,m_torneo_futbol);
	win.ShowModal();
}


void WinConfiguracionEquipos::OnClickEliminarEquipo( wxCommandEvent& event )  {
	WinEliminarEquipo win(this,m_torneo_futbol);
	win.ShowModal();
}

