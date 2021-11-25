#include "Equipo.h"
using namespace std;

void Equipo::AgregarJugador(Jugador j){
	m_jugadores.push_back(j);
}
void Equipo::EliminarJugador(Jugador j){
	auto it=find(m_jugadores.begin(),m_jugadores.end(),j);
	m_jugadores.erase(it);
}
Jugador Equipo::VerDatosJugador(int i){
	return m_jugadores[i];
}
void Equipo::ReemplazarDT(Director_Tecnico dt){
	m_dt=dt;
}
Director_Tecnico Equipo::VerDatosDirectorTecnico(){
	return m_dt;
}
void Equipo::CambiarDeEstadio(Estadio estadio){
	m_estadio=estadio;
}
string Equipo::VerNombre(){return m_nombre_equipo;}
Equipo::operator==(Equipo e){
	if(this->m_nombre_equipo==e.m_nombre_equipo){
		return true;
	}
	return false;
}
int Equipo::CargarDatosEquipoDesdeArchivo(string nombre_archivo){
	ifstream archi_in(nombre_archivo+".txt");
	if(!archi_in.is_open()){
		cerr<<"El archivo no se abrio correctamente"<<endl;
		return 2;
	}
	getline(archi_in,m_nombre_equipo);
	Estadio est;
	getline(archi_in,est.nombre);
	archi_in>>est.capacidad;
	archi_in.ignore();
	getline(archi_in,est.ubicacion);
	m_estadio=est;
	Director_Tecnico dt;
	getline(archi_in,dt.nombre);
	m_dt=dt;
	int puntaje;
	archi_in>>puntaje;
	m_puntaje=puntaje;
	string linea;
	archi_in.ignore();
	while(getline(archi_in,linea)){
		int pos=linea.find(',');
		string nombre_jugador=linea.substr(0,pos);
		string posicion_jugador=linea.substr(pos+1);
		Jugador jug(nombre_jugador,posicion_jugador);
		m_jugadores.push_back(jug);
		
	}
	
	
	return 3;
}
int Equipo::GuardarDatosEquipoEnArchivoDeTexto(){
	ofstream archi_out(m_nombre_equipo+".txt");
	if(!archi_out.is_open()){
		cerr<<"El archivo no se abrio correctamente"<<endl;
		return 2;
	}
	archi_out<<m_nombre_equipo<<endl;
	archi_out<<m_estadio.nombre<<endl;
	archi_out<<m_estadio.capacidad<<endl;
	archi_out<<m_estadio.ubicacion<<endl;
	archi_out<<m_dt.nombre<<endl;
	archi_out<<m_puntaje<<endl;
	for(size_t i=0;i<m_jugadores.size();i++) { 
		archi_out<<m_jugadores[i].VerNombre()<<","<<m_jugadores[i].VerPosicion()<<endl;
	}
	return 5;
	
}
string Equipo::ValidarDatosEquipoCrear(vector<Equipo> equipo_torneo){
	string errores;
	for(size_t i=0;i<equipo_torneo.size();i++){
		Equipo e=equipo_torneo[i];
		if(e.VerNombre()==m_nombre_equipo){
			errores+="El nombre del equipo coincide con el de otro equipo\n";
		}
		if(e.VerDatosDirectorTecnico()==m_dt){
			errores+="El director tecnico ya dirige otro equipo\n";
		}
	
		vector<Jugador> jugadores=e.VerVectorJugadores();
		for(size_t i=0;i<m_jugadores.size();i++){
			Jugador j=m_jugadores[i];
			auto it=find(jugadores.begin(),jugadores.end(),j);
			if(it!=jugadores.end()){
				errores+="El jugador "+to_string(i+1)+" ya se encuentra jugando en otro equipo\n";
			}
		}
		
	}
	if(m_nombre_equipo.size()==0) errores+="El nombre del equipo no puede estar vacio\n";
	if (m_nombre_equipo.size()>256) errores+="El nombre del equipo es demasiado largo\n";
	if(m_estadio.nombre.size()==0) errores+="El nombre del estadio no puede estar vacio\n";
	if (m_estadio.nombre.size()>256) errores+="El nombre del estadio es demasiado largo\n";
	if(m_estadio.capacidad>300000) errores+="La capacidad del estadio es demasiado grande\n";
	if(m_estadio.capacidad==0) errores+="La capacidad del estadio no puede estar vacia, ser 0 o letras\n";
	if(m_estadio.ubicacion.size()>256) errores+="La ubicacion del estadio es demasiado larga\n";
	if(m_estadio.ubicacion.size()==0) errores+="La ubicacion del estadio no puede estar vacia\n";
	if(m_dt.nombre.size()>256) errores+="El nombre del director tecnico es demasiado largo\n";
	if(m_dt.nombre.size()==0) errores+="El nombre del director tecnico no puede estar vacio\n";
	for(size_t i=0; i<m_jugadores.size();i++){
		if(m_jugadores[i].VerNombre().size()>256) errores+="El nombre del jugador "+to_string((i+1))+" es demasiado largo\n";
		if(m_jugadores[i].VerNombre().size()==0) errores+="El nombre del jugador "+to_string((i+1))+" no puede estar vacio\n";
		if(m_jugadores[i].VerPosicion().size()>256) errores+="La posicion del jugador "+to_string((i+1))+" es demasiado largo\n";
		if(m_jugadores[i].VerPosicion().size()==0) errores+="La posicion del jugador "+to_string((i+1))+" no puede estar vacia\n";
	}
	return errores;
}
Equipo::operator==(string nombre_equipo){
	if(this->VerNombre()==nombre_equipo){
		return true;
	}
	return false;
}
string Equipo::ValidarDatosEquipoEditar(vector<Equipo> equipo_torneo,int fila){
	string errores;
	Equipo equi=equipo_torneo[fila];
	if(equi.VerNombre()!=m_nombre_equipo){
		errores+="El Nombre del equipo no se puede editar\n";
	}
	equipo_torneo.erase(equipo_torneo.begin()+fila);
	for(size_t i=0;i<equipo_torneo.size();i++){
		Equipo e=equipo_torneo[i];
		if(e.VerNombre()==m_nombre_equipo){
			errores+="El nombre del equipo coincide con el de otro equipo\n";
		}
		if(e.VerDatosDirectorTecnico()==m_dt){
			errores+="El director tecnico ya dirige otro equipo\n";
		}
		vector<Jugador> jugadores=e.VerVectorJugadores();
		for(size_t i=0;i<m_jugadores.size();i++){
			Jugador j=m_jugadores[i];
			auto it=find(jugadores.begin(),jugadores.end(),j);
			if(it!=jugadores.end()){
				errores+="El jugador "+to_string(i+1)+" ya se encuentra jugando en otro equipo\n";
			}
		}
		
	}
	if(m_nombre_equipo.size()==0) errores+="El nombre del equipo no puede estar vacio\n";
	if (m_nombre_equipo.size()>256) errores+="El nombre del equipo es demasiado largo\n";
	if(m_estadio.nombre.size()==0) errores+="El nombre del estadio no puede estar vacio\n";
	if (m_estadio.nombre.size()>256) errores+="El nombre del estadio es demasiado largo\n";
	if(m_estadio.capacidad>300000) errores+="La capacidad del estadio es demasiado grande\n";
	if(m_estadio.capacidad==0) errores+="La capacidad del estadio no puede estar vacia, ser 0 o letras\n";
	if(m_estadio.ubicacion.size()>256) errores+="La ubicacion del estadio es demasiado larga\n";
	if(m_estadio.ubicacion.size()==0) errores+="La ubicacion del estadio no puede estar vacia\n";
	if(m_dt.nombre.size()>256) errores+="El nombre del director tecnico es demasiado largo\n";
	if(m_dt.nombre.size()==0) errores+="El nombre del director tecnico no puede estar vacio\n";
	for(size_t i=0; i<m_jugadores.size();i++){
		if(m_jugadores[i].VerNombre().size()>256) errores+="El nombre del jugador "+to_string((i+1))+" es demasiado largo\n";
		if(m_jugadores[i].VerNombre().size()==0) errores+="El nombre del jugador "+to_string((i+1))+" no puede estar vacio\n";
		if(m_jugadores[i].VerPosicion().size()>256) errores+="La posicion del jugador "+to_string((i+1))+" es demasiado largo\n";
		if(m_jugadores[i].VerPosicion().size()==0) errores+="La posicion del jugador "+to_string((i+1))+" no puede estar vacia\n";
	}
	return errores;
}
