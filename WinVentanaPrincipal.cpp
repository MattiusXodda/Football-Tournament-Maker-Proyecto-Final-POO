#include "WinVentanaPrincipal.h"
#include "WinConfiguracionEquipos.h"
#include "WinArmarFixture.h"
#include <fstream>
#include <cstdlib>
#include "winEstadisticasTorneo.h"
#include <wx/icon.h>
using namespace std;

WinVentanaPrincipal::WinVentanaPrincipal( TorneoFutbol *torneo_futbol) : WxfbVentanaPrincipal(nullptr),m_torneo_futbol(torneo_futbol) {
	SetIcon(wxIcon("icono.ico"));
}

void WinVentanaPrincipal::OnClickConfiguracionEquipos( wxCommandEvent& event )  {
	WinConfiguracionEquipos win(this,m_torneo_futbol);
	win.ShowModal();
}
	
	

void WinVentanaPrincipal::OnClickArmarFixture( wxCommandEvent& event )  {
	WinArmarFixture win(this,m_torneo_futbol);
	win.ShowModal();
}

void WinVentanaPrincipal::OnClickEstadisticasDelTorneo( wxCommandEvent& event )  {
	winEstadisticasTorneo win(this,m_torneo_futbol);
	win.ShowModal();
}

