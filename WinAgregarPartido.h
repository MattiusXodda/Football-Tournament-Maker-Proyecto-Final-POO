#ifndef WINAGREGARPARTIDO_H
#define WINAGREGARPARTIDO_H
#include "wxfb_project.h"
#include "WinAgregarPartido.h"
#include "Torneo.h"

class WinAgregarPartido : public wxfbAgregarPartido {
	
private:
	TorneoFutbol *m_torneo_futbol;
protected:
	void OnClickCancelar( wxCommandEvent& event )  override;
	void OnClickAgregarPartido( wxCommandEvent& event )  override;
	
public:
	WinAgregarPartido(wxWindow *parent,TorneoFutbol *torneo_futbol);
};

#endif

