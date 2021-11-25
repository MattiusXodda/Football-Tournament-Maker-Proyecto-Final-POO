#include "WinArmarFixture.h"
#include "WinAgregarPartido.h"
#include "Torneo.h"
#include "Partido.h"
#include "Equipo.h"
#include <string>
#include <sstream>
#include <wx/msgdlg.h>
#include "string_conv.h"
#include "WinEditarResultado.h"
#include <wx/icon.h>
using namespace std;


WinArmarFixture::WinArmarFixture(wxWindow *parent, TorneoFutbol *torneo_futbol) : wxfbArmarFixture(parent) 
,m_torneo_futbol(torneo_futbol){
	SetIcon(wxIcon("icono.ico"));
	ActualizarGrilla();
	m_gridFixture->SetSelectionMode(wxGrid::wxGridSelectRows);
}

void WinArmarFixture::OnClickCancelarArmarFixture( wxCommandEvent& event )  {
	EndModal(0);
}

void WinArmarFixture::OnClickAgregarPartido( wxCommandEvent& event )  {
	if(m_torneo_futbol->VerCantidadDeEquipos()>=2){
	WinAgregarPartido win(this,m_torneo_futbol);
	if(win.ShowModal()==1){
		m_torneo_futbol->Guardar_Fixture_En_Archivo_Texto();
		ActualizarFila(m_torneo_futbol->VerCantidadDePartidos()-1);
	}}else{
		wxMessageBox("No hay la cantidad de equipos suficientes para crear un partido, regrese y agregue al menos 2 equipos para crear un partido","ERROR",wxOK|wxICON_ERROR,this);
	}
}

void WinArmarFixture::OnClickEliminarPartido( wxCommandEvent& event )  {
	if(m_torneo_futbol->VerCantidadDePartidos()!=0){
		int yes_no=wxMessageBox("¿Esta seguro que desea eliminar el partido?","Eliminar Partido",wxYES_NO|wxCANCEL,this);
		if(yes_no==wxYES){
			
			int f=m_gridFixture->GetGridCursorRow();
			m_torneo_futbol->Eliminar_Partido(f);
			m_gridFixture->DeleteRows(f);
			wxMessageBox("El Partido ha sido eliminado con exito","Notificación",wxOK|wxICON_INFORMATION,this);}
	}else{
		wxMessageBox("La grilla se encuentra vacia","ERROR",wxOK|wxICON_ERROR,this);
	}
}
void WinArmarFixture::ActualizarFila(int i){

		Partido p=m_torneo_futbol->VerPartido(i);
		Equipo local=p.equipo_local;
		Equipo visitante=p.equipo_visitante;
		string nombre_visitante=visitante.VerNombre();
		int nro_fecha=p.nro_fecha;
		stringstream ss;
		ss<<nro_fecha;
		string nro_fe=ss.str();
		Estadio e=p.estadio;
		string goles_local;
		string goles_visitante;
		m_gridFixture->AppendRows();
		m_gridFixture->SetCellValue(i,0,std_to_wx(nro_fe));
		m_gridFixture->SetCellValue(i,1,std_to_wx(local.VerNombre()));
		if(p.goles_equipo_local==-1){
			goles_local="-";
		}else{
			stringstream ss1;
			ss1<<p.goles_equipo_local;
			goles_local=ss1.str();
		}
		m_gridFixture->SetCellValue(i,2,std_to_wx(goles_local));
		if(p.goles_equipo_visitante==-1){
			goles_visitante="-";
		}else{
			stringstream ss2;
			ss2<<p.goles_equipo_visitante;
			goles_visitante=ss2.str();
		}
		m_gridFixture->SetCellValue(i,3,std_to_wx(goles_visitante));
		m_gridFixture->SetCellValue(i,4,std_to_wx(visitante.VerNombre()));
		m_gridFixture->SetCellValue(i,5,std_to_wx(e.nombre));
}
void WinArmarFixture::ActualizarGrilla(){
	for(int i=0;i<m_torneo_futbol->VerCantidadDePartidos();i++){
	Partido p=m_torneo_futbol->VerPartido(i);
	Equipo local=p.equipo_local;
	Equipo visitante=p.equipo_visitante;
	int nro_fecha=p.nro_fecha;
	stringstream ss;
	ss<<nro_fecha;
	string nro_fe=ss.str();
	Estadio e=p.estadio;
	string goles_local;
	string goles_visitante;
	m_gridFixture->AppendRows();
	m_gridFixture->SetCellValue(i,0,std_to_wx(nro_fe));
	m_gridFixture->SetCellValue(i,1,std_to_wx(local.VerNombre()));
	if(p.goles_equipo_local==-1){
		goles_local="-";
	}else{
		stringstream ss1;
		ss1<<p.goles_equipo_local;
		goles_local=ss1.str();
	}
	m_gridFixture->SetCellValue(i,2,std_to_wx(goles_local));
	if(p.goles_equipo_visitante==-1){
		goles_visitante="-";
	}else{
		stringstream ss2;
		ss2<<p.goles_equipo_visitante;
		goles_visitante=ss2.str();
	}
	m_gridFixture->SetCellValue(i,3,std_to_wx(goles_visitante));
	m_gridFixture->SetCellValue(i,4,std_to_wx(visitante.VerNombre()));
	m_gridFixture->SetCellValue(i,5,std_to_wx(e.nombre));}
}

void WinArmarFixture::OnClickEditarResultado( wxCommandEvent& event )  {
	if(m_torneo_futbol->VerCantidadDePartidos()!=0){
	int fila=m_gridFixture->GetGridCursorRow();
	string goles_local=wx_to_std(m_gridFixture->GetCellValue(fila,2));
	string goles_visitante=wx_to_std(m_gridFixture->GetCellValue(fila,3));
	if(goles_local=="-" and goles_visitante=="-"){
	WinEditarResultado win(this,m_torneo_futbol,fila);
	if(win.ShowModal()==1){
		m_torneo_futbol->Guardar_Fixture_En_Archivo_Texto();
		ActualizarFilaEditar(fila);
	}}else{
		wxMessageBox("El resultado de este partido ya fue editado anteriormente","ERROR",wxOK|wxICON_ERROR,this);
	}
	}else{
		wxMessageBox("La grilla se encuentra vacia","ERROR",wxOK|wxICON_ERROR,this);
	}
}
void WinArmarFixture::ActualizarFilaEditar(int i){
	
	Partido p=m_torneo_futbol->VerPartido(i);
	Equipo local=p.equipo_local;
	Equipo visitante=p.equipo_visitante;
	int nro_fecha=p.nro_fecha;
	stringstream ss;
	ss<<nro_fecha;
	string nro_fe=ss.str();
	Estadio e=p.estadio;
	string goles_local;
	string goles_visitante;
	m_gridFixture->SetCellValue(i,0,std_to_wx(nro_fe));
	m_gridFixture->SetCellValue(i,1,std_to_wx(local.VerNombre()));
	if(p.goles_equipo_local==-1){
		goles_local="-";
	}else{
		stringstream ss1;
		ss1<<p.goles_equipo_local;
		goles_local=ss1.str();
	}
	m_gridFixture->SetCellValue(i,2,std_to_wx(goles_local));
	if(p.goles_equipo_visitante==-1){
		goles_visitante="-";
	}else{
		stringstream ss2;
		ss2<<p.goles_equipo_visitante;
		goles_visitante=ss2.str();
	}
	m_gridFixture->SetCellValue(i,3,std_to_wx(goles_visitante));
	m_gridFixture->SetCellValue(i,4,std_to_wx(visitante.VerNombre()));
	m_gridFixture->SetCellValue(i,5,std_to_wx(e.nombre));
}

void WinArmarFixture::OnCambiaTamanio( wxSizeEvent& event )  {
	event.Skip();
}

