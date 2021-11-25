#ifndef DIRECTOR_TECNICO_H
#define DIRECTOR_TECNICO_H
#include <string>
using namespace std;
struct Director_Tecnico{
	string nombre="";
	operator==(Director_Tecnico dt){
		if(this->nombre==dt.nombre){
			return true;
		}
		return false;
	}
};
#endif
