#ifndef WINAGREGAREQUIPO_H
#define WINAGREGAREQUIPO_H
#include "wxfb_project.h"
#include "Torneo.h"
#include "Equipo.h"

class winAgregarEquipo : public wxfbAgregarEquipo {
	
private:
	TorneoFutbol *m_torneo_futbol=nullptr;
	int m_numero_filas_grilla=0;
protected:
	void OnClickAgregarFilaJugadores( wxCommandEvent& event )  override;
	void OnClickCrearEquipo( wxCommandEvent& event )  override;
	void OnClickCancelar( wxCommandEvent& event )  override;
	bool ValidarInfoGrilla();
	
public:
	winAgregarEquipo(wxWindow *parent=nullptr,TorneoFutbol *torneo_futbol=nullptr);
};

#endif

