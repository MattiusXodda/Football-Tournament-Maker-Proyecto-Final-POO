#ifndef WINCONFIGURACIONEQUIPOS_H
#define WINCONFIGURACIONEQUIPOS_H
#include "wxfb_project.h"
#include "Torneo.h"
#include "Equipo.h"

class WinConfiguracionEquipos : public wxfbConfiguracionEquipos {
	
private:
	TorneoFutbol *m_torneo_futbol=nullptr;
protected:
	void OnClickEliminarEquipo( wxCommandEvent& event )  override;
	void OnClickAgregarEquipo( wxCommandEvent& event )  override;
	
public:
	WinConfiguracionEquipos(wxWindow *parent=nullptr,TorneoFutbol *torneo_futbol=nullptr);
};

#endif

