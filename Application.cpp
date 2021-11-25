#include <wx/image.h>
#include "Application.h"
#include "WinVentanaPrincipal.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	
	m_torneo_futbol.Cargar_Nombres_Equipos_De_Archivo();
	if(m_torneo_futbol.VerCantidadDeEquipos()!=0){
		for(int i=0;i<m_torneo_futbol.VerCantidadDeEquipos();i++){
			string nombre_equipo=m_torneo_futbol.Ver_Nombre_Equipo(i);
			Equipo e;
			e.CargarDatosEquipoDesdeArchivo(nombre_equipo);
			m_torneo_futbol.Agregar_Equipo(e);
		}
			m_torneo_futbol.Cargar_Fixture_Desde_Archivo();}
	wxInitAllImageHandlers();
	WinVentanaPrincipal *win = new WinVentanaPrincipal(&m_torneo_futbol);
	win->Show();
	return true;
}

