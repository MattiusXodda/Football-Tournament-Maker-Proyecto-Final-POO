#ifndef EQUIPO_H
#define EQUIPO_H
#include <vector>
#include <string>
#include "Jugador.h"
#include "Director_Tecnico.h"
#include "Estadio.h"
#include <algorithm>
#include <fstream>
#include <iostream>
using namespace std;

class Equipo {
public:
	Equipo(string nombre_equipo,Director_Tecnico dt,Estadio e):m_nombre_equipo(nombre_equipo),m_dt(dt),m_estadio(e){}
	Equipo(){}
	void AgregarJugador(Jugador j);
	void EliminarJugador(Jugador j);
	Jugador VerDatosJugador(int i);
	void ReemplazarDT(Director_Tecnico dt);
	Director_Tecnico VerDatosDirectorTecnico();
	void CambiarDeEstadio(Estadio estadio);
	string VerNombre();
	Estadio VerEstadio(){return m_estadio;}
	int CargarDatosEquipoDesdeArchivo(string nombre_archivo);
	int GuardarDatosEquipoEnArchivoDeTexto();
	operator==(Equipo e);
	operator==(string nombre_equipo);
	void CambiarNombreEquipo(string nuevo_nombre){m_nombre_equipo=nuevo_nombre;}
	string ValidarDatosEquipoCrear(vector<Equipo> equipos_torneo);
	vector<Jugador> VerVectorJugadores(){return m_jugadores;}
	string ValidarDatosEquipoEditar(vector<Equipo> equipos_torneo,int i);
	void sumar_puntaje(int puntos){m_puntaje=puntos+m_puntaje;}
	void restar_puntaje(int puntos){m_puntaje=m_puntaje-puntos;}
	int Ver_Puntaje(){return m_puntaje;}
	int VerCantidadJugadores(){return m_jugadores.size();}
	
private:
	string m_nombre_equipo;
	int m_puntaje=0;
	Director_Tecnico m_dt;
	Estadio m_estadio;
	vector<Jugador> m_jugadores;
	
};

#endif

