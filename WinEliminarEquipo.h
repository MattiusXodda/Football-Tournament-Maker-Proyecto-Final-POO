#ifndef WINELIMINAREQUIPO_H
#define WINELIMINAREQUIPO_H
#include "wxfb_project.h"
#include "Torneo.h"

class WinEliminarEquipo : public wxfbEliminarEquipo {
	
private:
	TorneoFutbol *m_torneo_futbol;	
protected:
	void OnCambiaTamanio( wxSizeEvent& event )  override;
	void OnClickCancelar( wxCommandEvent& event )  override;
	void OnClickEliminar( wxCommandEvent& event )  override;
	
public:
	WinEliminarEquipo(wxWindow *parent,TorneoFutbol *torneo_futbol);
};

#endif

