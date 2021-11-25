#ifndef WINEDITARINFOEQUIPO_H
#define WINEDITARINFOEQUIPO_H
#include "wxfb_project.h"
#include "winEditarInfoEquipo.h"
#include "Torneo.h"

class winEditarInfoEquipo : public wxfbEditarInfoEquipo {
	
private:
	TorneoFutbol *m_torneo_futbol;
	int m_fila;
	int m_cantidad_filas_grilla=0;
protected:
	void OnClickAgregarFilaJugadores( wxCommandEvent& event )  override;
	void OnClickEliminarFilaJugadores( wxCommandEvent& event )  override;
	void OnClickAceptarCambios( wxCommandEvent& event )  override;
	void OnClickCancelar( wxCommandEvent& event )  override;
	bool ValidarInfoGrilla();
	
public:
	winEditarInfoEquipo(wxWindow *parent,TorneoFutbol *torneo_futbol, int fila);
	~winEditarInfoEquipo();
};

#endif

