#ifndef WINEDITARRESULTADO_H
#define WINEDITARRESULTADO_H
#include "wxfb_project.h"
#include "Torneo.h"

class WinEditarResultado : public wxfbEditarResultado {
	
private:
	TorneoFutbol *m_torneo_futbol;
	int m_fila;
protected:
	void OnClickAceptar( wxCommandEvent& event )  override;
	void OnClickCancelar( wxCommandEvent& event )  override;
	
public:
	WinEditarResultado(wxWindow *parent,TorneoFutbol *torneo_futbol,int fila);
	~WinEditarResultado();
};

#endif

