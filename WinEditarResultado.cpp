#include "WinEditarResultado.h"
#include "Partido.h"
#include "string_conv.h"
#include <wx/msgdlg.h>
#include <wx/icon.h>
#include <cstdlib>
using namespace std;

WinEditarResultado::WinEditarResultado(wxWindow *parent,TorneoFutbol *torneo_futbol, int fila) : wxfbEditarResultado(parent),m_torneo_futbol(torneo_futbol),m_fila(fila) {
	SetIcon(wxIcon("icono.ico"));
}

void WinEditarResultado::OnClickAceptar( wxCommandEvent& event )  {
	int goles_local=atoi(wx_to_std(m_textGolesEquipoLocal->GetValue()).c_str());
	int goles_visitante=atoi(wx_to_std(m_textGolesEquipoVisitante->GetValue()).c_str());
	Partido p=m_torneo_futbol->VerPartido(m_fila);
	Equipo local=p.equipo_local;
	Equipo visitante=p.equipo_visitante;
	
	int num_local=-1;
	int num_visitante=-1;
	for(int i=0;i<m_torneo_futbol->VerCantidadDeEquipos();i++) { 
		Equipo e=m_torneo_futbol->Ver_Datos_Equipo(i);
		if(e==local and goles_local>goles_visitante){
			e.sumar_puntaje(3);
			m_torneo_futbol->EditarEquipo(e,i);
			e.GuardarDatosEquipoEnArchivoDeTexto();
			break;
		}
		if(e==visitante and goles_visitante>goles_local){
			e.sumar_puntaje(3);
			m_torneo_futbol->EditarEquipo(e,i);
			e.GuardarDatosEquipoEnArchivoDeTexto();
			break;
		}
		if(e==visitante){
			visitante=e;
			num_visitante=i;
		}
		if(e==local){
			local=e;
			num_local=i;
		}
		
	}
	if(goles_local==goles_visitante){
		visitante.sumar_puntaje(1);
		local.sumar_puntaje(1);
		m_torneo_futbol->EditarEquipo(visitante,num_visitante);
		m_torneo_futbol->EditarEquipo(local,num_local);
		visitante.GuardarDatosEquipoEnArchivoDeTexto();
		local.GuardarDatosEquipoEnArchivoDeTexto();
	}
	p.goles_equipo_local=goles_local;
	p.goles_equipo_visitante=goles_visitante;
	m_torneo_futbol->EditarPartido(p,m_fila);
	wxMessageBox("El Resultado del partido ha sido editado con exito","Notificación",wxOK|wxICON_INFORMATION,this);
	EndModal(1);
}

void WinEditarResultado::OnClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

WinEditarResultado::~WinEditarResultado() {
	
}

