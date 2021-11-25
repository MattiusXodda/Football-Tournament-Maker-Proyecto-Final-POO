#include "Torneo.h"
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <sstream>
using namespace std;
void TorneoFutbol::Agregar_Equipo(Equipo e){
	m_equipos.push_back(e);
}
void TorneoFutbol::Eliminar_Equipo(Equipo e){
	auto it_borrar=find(m_equipos.begin(),m_equipos.end(),e);
	m_equipos.erase(it_borrar);
	remove((e.VerNombre()+".txt").c_str());
}
Equipo TorneoFutbol::Ver_Datos_Equipo(int i){ return m_equipos[i];}



int TorneoFutbol::Cargar_Fixture_Desde_Archivo(){
ifstream archi_in("Fixture.txt");
if(!archi_in.is_open()){
	cerr<<"El archivo no se pudo abrir correctamente"<<endl;
	return -2;
}
string linea;
while(getline(archi_in,linea)){
	int pos_1=linea.find(',');
	int nro_fecha=atoi((linea.substr(pos_1-1,1)).c_str());
	int pos_2=linea.find(',',pos_1+1);
	string nombre_equipo_local=linea.substr(pos_1+1,pos_2-(pos_1+1));
	string gol_local=linea.substr(pos_2+1,1);
	int goles_local;
	if(gol_local=="-"){
		goles_local=-1;
	}else{
		goles_local=atoi(gol_local.c_str());
	}
	string gol_visitante=linea.substr(pos_2+3,1);
	int goles_visitante;
	if(gol_visitante=="-"){
		goles_visitante=-1;
	}else{
		goles_visitante=atoi(gol_visitante.c_str());
	}
	int pos_3=linea.find(',',pos_2+5);
	string nombre_equipo_visitante=linea.substr(pos_2+5,pos_3-(pos_2+5));
	Equipo equipo_local;
	Equipo equipo_visitante;
	for(size_t i=0; i<m_equipos.size();i++){
		if(m_equipos[i]==nombre_equipo_local){
			equipo_local=m_equipos[i];
		}
		if(m_equipos[i]==nombre_equipo_visitante){
			equipo_visitante=m_equipos[i];
		}
	}
	Partido p={equipo_local,equipo_visitante,equipo_local.VerEstadio(),nro_fecha,goles_local,goles_visitante};
	m_partidos.push_back(p);
}
return 2;
}
int TorneoFutbol::Guardar_Fixture_En_Archivo_Texto(){
	ofstream archi_out("Fixture.txt");
	if(!archi_out.is_open()){
		cerr<<"El archivo no se pudo abrir correctamente"<<endl;
		return -2;
	}
	for(size_t i=0;i<m_partidos.size();i++){
		Partido p=m_partidos[i];
		Equipo local=p.equipo_local;
		Equipo visitante=p.equipo_visitante;
		Estadio est=p.estadio;
		string goles_local;
		string goles_visitante;
		if(p.goles_equipo_local==-1){
			goles_local="-";
		}else{
			stringstream ss1;
			ss1<<p.goles_equipo_local;
			goles_local=ss1.str();
		}
		if(p.goles_equipo_visitante==-1){
			goles_visitante="-";
		}else{
			stringstream ss2;
			ss2<<p.goles_equipo_visitante;
			goles_visitante=ss2.str();
		}
		archi_out<<"Fecha "<<p.nro_fecha<<","<<local.VerNombre()<<","<<goles_local<<","<<goles_visitante<<","<<visitante.VerNombre()<<","<<est.nombre<<endl;
	}
	return 2;
}
int TorneoFutbol::Eliminar_Partido(int i){
	Partido p=m_partidos[i];
	int goles_local=p.goles_equipo_local;
	int goles_visitante=p.goles_equipo_visitante;
	if(goles_local!=-1 and goles_visitante!=-1){
	Equipo local=p.equipo_local;
	Equipo visitante=p.equipo_visitante;
	
	int num_local=-1;
	int num_visitante=-1;
	for(size_t i=0;i<m_equipos.size();i++) { 
		Equipo e=m_equipos[i];
		if(e==local and goles_local>goles_visitante){
			e.restar_puntaje(3);
			m_equipos[i]=e;
			e.GuardarDatosEquipoEnArchivoDeTexto();
			break;
		}
		if(e==visitante and goles_visitante>goles_local){
			e.restar_puntaje(3);
			m_equipos[i]=e;
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
		visitante.restar_puntaje(1);
		local.restar_puntaje(1);
		m_equipos[num_visitante]=visitante;;
		m_equipos[num_local]=local;;
		visitante.GuardarDatosEquipoEnArchivoDeTexto();
		local.GuardarDatosEquipoEnArchivoDeTexto();
	}}
	m_partidos.erase(m_partidos.begin()+i);
	ofstream archi_out("Fixture.txt");
	if(!archi_out.is_open()){
		cerr<<"El archivo no se pudo abrir correctamente"<<endl;
		return -2;
	}
	for(size_t i=0;i<m_partidos.size();i++){
		Partido p=m_partidos[i];
		Equipo local=p.equipo_local;
		Equipo visitante=p.equipo_visitante;
		Estadio est=p.estadio;
		string goles_local;
		string goles_visitante;
		if(p.goles_equipo_local==-1){
			goles_local="-";
		}else{
			stringstream ss1;
			ss1<<p.goles_equipo_local;
			goles_local=ss1.str();
		}
		if(p.goles_equipo_visitante==-1){
			goles_visitante="-";
		}else{
			stringstream ss2;
			ss2<<p.goles_equipo_visitante;
			goles_visitante=ss2.str();
		}
		archi_out<<"Fecha "<<p.nro_fecha<<","<<local.VerNombre()<<","<<goles_local<<","<<goles_visitante<<","<<visitante.VerNombre()<<","<<est.nombre<<endl;
	}
	return 2;
	
}
int TorneoFutbol::Guardar_Nombres_Equipos_En_Archivo(string nombre_equipo){
	ofstream archi_out("nombres_equipos.txt",ios::app);
	if(!archi_out.is_open()){
		cerr<<"El archivo no se pudo abrir correctamente"<<endl;
		return -2;
	}
	archi_out<<nombre_equipo<<endl;
	m_nombres_equipos.push_back(nombre_equipo);
	return 2;
}
int TorneoFutbol::Cargar_Nombres_Equipos_De_Archivo(){
	ifstream archi_in("nombres_equipos.txt");
	if(!archi_in.is_open()){
		cerr<<"El archivo no se pudo abrir correctamente"<<endl;
		return -2;
	}
	string nombre_equipo;
	while(getline(archi_in,nombre_equipo)){
		m_nombres_equipos.push_back(nombre_equipo);
	}
	return 2;
}
string TorneoFutbol::Ver_Nombre_Equipo(int i){return m_nombres_equipos[i];}
int TorneoFutbol::Eliminar_Nombre_Equipo(string nombre_equipo){
	auto it=find(m_nombres_equipos.begin(),m_nombres_equipos.end(),nombre_equipo);
	m_nombres_equipos.erase(it);
	ofstream archi_out("nombres_equipos.txt");
	if(!archi_out.is_open()){
		cerr<<"El archivo no se pudo abrir correctamente"<<endl;
		return -2;
	}
	for(size_t i=0;i<m_nombres_equipos.size();i++) { 
		archi_out<<m_nombres_equipos[i]<<endl;
	}
	return 2;
	
}
string TorneoFutbol::Agregar_Partido(int nro_fecha,Equipo equipo_local,Equipo equipo_visitante){
	Partido p={equipo_local,equipo_visitante,equipo_local.VerEstadio(),nro_fecha};
	string errores="";
	if(equipo_local.VerNombre()!=equipo_visitante.VerNombre()){
		if(m_partidos.size()!=0){
			auto it=find(m_partidos.begin(),m_partidos.end(),p);
			if(it==m_partidos.end()){
				for(size_t i=0; i<m_partidos.size();i++){
					Equipo local=m_partidos[i].equipo_local;
					Equipo visitante=m_partidos[i].equipo_visitante;
					int nro_f=m_partidos[i].nro_fecha;
					if(nro_f==nro_fecha){
						if(local==equipo_visitante){
							errores="Uno de los equipos ya juega en esta fecha";
							return errores;
						}
						if(local==equipo_local){
							errores="Uno de los equipos ya juega en esta fecha";
							return errores;
						}
						if(visitante==equipo_local){
							errores="Uno de los equipos ya juega en esta fecha";
							return errores;
						}
						if(visitante==equipo_visitante){
							errores="Uno de los equipos ya juega en esta fecha";
							return errores;
						}
						
					}
				}
				m_partidos.push_back(p);
				return errores;
			}else{
				errores="El partido ya fue ingresado";
				return errores;
			}
		}else{
			m_partidos.push_back(p);
			return errores;
		}
	}
	errores="El nombre ingresado en equipo local coincide con el nombre ingresado en equipo visitante";
	return errores;
	}
void TorneoFutbol::EditarEquipo(Equipo e,int i){
m_equipos[i]=e;
}
