#ifndef WINESTADISTICASTORNEO_H
#define WINESTADISTICASTORNEO_H
#include "wxfb_project.h"
#include "Torneo.h"

class winEstadisticasTorneo : public wxfbEstadisticasTorneo {
	
private:
	TorneoFutbol *m_torneo_futbol;
protected:
	void OnCambiaTamanio( wxSizeEvent& event )  override;
	void OnClickCancelar( wxCommandEvent& event )  override;
	void OnClickVerInfoEquipo( wxCommandEvent& event )  override;
	
public:
	winEstadisticasTorneo(wxWindow *parent,TorneoFutbol *torneo_futbol);
	~winEstadisticasTorneo();
};

#endif

