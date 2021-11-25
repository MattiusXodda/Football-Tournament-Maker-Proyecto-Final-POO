#ifndef TORNEO_H
#define TORNEO_H
#include <vector>
#include "Equipo.h"
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include "Partido.h"
using namespace std;

class TorneoFutbol {
public:
	TorneoFutbol(){}
	void Agregar_Equipo(Equipo e);
	void Eliminar_Equipo(Equipo e);
	void Eliminar_Equipo(int i);
	Equipo Ver_Datos_Equipo(int i);
	vector<Equipo> VerVectorEquipos(){return m_equipos;}
	int Guardar_Fixture_En_Archivo_Texto();
	int VerCantidadDeEquipos(){return m_nombres_equipos.size();}
	int Guardar_Nombres_Equipos_En_Archivo(string nombre_equipo);
	int Cargar_Nombres_Equipos_De_Archivo();
	string Ver_Nombre_Equipo(int i);
	int Eliminar_Nombre_Equipo(string nombre_equipo);
	string Agregar_Partido(int nro_fecha,Equipo equipo_local,Equipo equipo_visitante);
	int Eliminar_Partido(int i);
	Partido VerPartido(int i){return m_partidos[i];}
	int VerCantidadDePartidos(){return m_partidos.size();}
	Cargar_Fixture_Desde_Archivo();
	void EditarEquipo(Equipo e,int i);
	void EditarPartido(Partido p,int i){m_partidos[i]=p;}
	
private:
	int Cantidad_Partidos;
	vector<string> m_nombres_equipos;
	vector<Equipo> m_equipos;
	vector<Partido> m_partidos;
};

#endif

