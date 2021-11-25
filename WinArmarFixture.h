#ifndef WINARMARFIXTURE_H
#define WINARMARFIXTURE_H
#include "wxfb_project.h"
#include "WinArmarFixture.h"
#include "Torneo.h"

class WinArmarFixture : public wxfbArmarFixture {
	
private:
	TorneoFutbol *m_torneo_futbol;
protected:
	void OnCambiaTamanio( wxSizeEvent& event )  override;
	void OnClickEditarResultado( wxCommandEvent& event )  override;
	void OnClickCancelarArmarFixture( wxCommandEvent& event )  override;
	void OnClickAgregarPartido( wxCommandEvent& event )  override;
	void OnClickEliminarPartido( wxCommandEvent& event )  override;
	void ActualizarGrilla();
	void ActualizarFila(int i);
	void ActualizarFilaEditar(int i);
	
public:
	WinArmarFixture(wxWindow *parent,TorneoFutbol *torneo_futbol);
};

#endif

