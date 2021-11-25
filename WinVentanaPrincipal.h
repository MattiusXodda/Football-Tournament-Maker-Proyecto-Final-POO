#ifndef WINVENTANAPRINCIPAL_H
#define WINVENTANAPRINCIPAL_H
#include "wxfb_project.h"
#include "WinConfiguracionEquipos.h"
#include "Torneo.h"
class WinVentanaPrincipal : public WxfbVentanaPrincipal {
	
private:
	TorneoFutbol *m_torneo_futbol=nullptr;
protected:
	void OnClickEstadisticasDelTorneo( wxCommandEvent& event )  override;
	void OnClickArmarFixture( wxCommandEvent& event )  override;
	void OnClickConfiguracionEquipos( wxCommandEvent& event )  override;
	
public:
	WinVentanaPrincipal(TorneoFutbol *torneo_futbol=nullptr);
};

#endif

