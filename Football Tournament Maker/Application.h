#ifndef APPLICATION_H
#define APPLICATION_H

#include <wx/app.h>
#include "Torneo.h"

class Application : public wxApp {
public:
	virtual bool OnInit();
private:
	TorneoFutbol m_torneo_futbol;
};

#endif
