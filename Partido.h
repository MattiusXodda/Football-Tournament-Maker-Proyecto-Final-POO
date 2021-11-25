#ifndef PARTIDO_H
#define PARTIDO_H
#include "Equipo.h"
struct Partido{
	Equipo equipo_local;
	Equipo equipo_visitante;
	Estadio estadio;
	int nro_fecha;
	int goles_equipo_local=-1;
	int goles_equipo_visitante=-1;
	bool operator==(Partido p){
		if(this->equipo_local==p.equipo_local and this->equipo_visitante==p.equipo_visitante){
			return true;
		}
		return false;
	}
};
#endif
