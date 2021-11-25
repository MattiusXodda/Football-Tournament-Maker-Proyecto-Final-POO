#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
using namespace std;

class Jugador {
public:
	Jugador(string nombre_jugador, string posicion):m_posicion(posicion),m_nombre(nombre_jugador){}
	string VerNombre();
	string VerPosicion();
	bool operator==(Jugador j){
		
		if(j.m_nombre==this->m_nombre){
			return true;
		}
		return false;
	}
private:
	string m_posicion="";
	string m_nombre="";

};

#endif

