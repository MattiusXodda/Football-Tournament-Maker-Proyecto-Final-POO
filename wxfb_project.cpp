///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov  6 2017)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

WxfbVentanaPrincipal::WxfbVentanaPrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	m_button2ConfiguracionDeLosEquipos = new wxButton( this, wxID_ANY, wxT("Configuracion de los Equipos"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button2ConfiguracionDeLosEquipos->SetFont( wxFont( 15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer2->Add( m_button2ConfiguracionDeLosEquipos, 1, wxALL|wxEXPAND, 5 );
	
	m_buttonArmarFixture = new wxButton( this, wxID_ANY, wxT("Ver/Editar Fixture"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonArmarFixture->SetFont( wxFont( 15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer2->Add( m_buttonArmarFixture, 1, wxALL|wxEXPAND, 5 );
	
	m_buttonEstadisticasTorneo = new wxButton( this, wxID_ANY, wxT("Ver/Editar datos equipos del torneo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonEstadisticasTorneo->SetFont( wxFont( 15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer2->Add( m_buttonEstadisticasTorneo, 1, wxALL|wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer2 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_button2ConfiguracionDeLosEquipos->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( WxfbVentanaPrincipal::OnClickConfiguracionEquipos ), NULL, this );
	m_buttonArmarFixture->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( WxfbVentanaPrincipal::OnClickArmarFixture ), NULL, this );
	m_buttonEstadisticasTorneo->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( WxfbVentanaPrincipal::OnClickEstadisticasDelTorneo ), NULL, this );
}

WxfbVentanaPrincipal::~WxfbVentanaPrincipal()
{
	// Disconnect Events
	m_button2ConfiguracionDeLosEquipos->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( WxfbVentanaPrincipal::OnClickConfiguracionEquipos ), NULL, this );
	m_buttonArmarFixture->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( WxfbVentanaPrincipal::OnClickArmarFixture ), NULL, this );
	m_buttonEstadisticasTorneo->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( WxfbVentanaPrincipal::OnClickEstadisticasDelTorneo ), NULL, this );
	
}

wxfbEstadisticasTorneo::wxfbEstadisticasTorneo( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxVERTICAL );
	
	m_gridInformacionEquipos = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	m_gridInformacionEquipos->CreateGrid( 0, 2 );
	m_gridInformacionEquipos->EnableEditing( false );
	m_gridInformacionEquipos->EnableGridLines( true );
	m_gridInformacionEquipos->EnableDragGridSize( false );
	m_gridInformacionEquipos->SetMargins( 0, 0 );
	
	// Columns
	m_gridInformacionEquipos->SetColSize( 0, 607 );
	m_gridInformacionEquipos->SetColSize( 1, 98 );
	m_gridInformacionEquipos->EnableDragColMove( false );
	m_gridInformacionEquipos->EnableDragColSize( true );
	m_gridInformacionEquipos->SetColLabelSize( 30 );
	m_gridInformacionEquipos->SetColLabelValue( 0, wxT("Nombre equipo") );
	m_gridInformacionEquipos->SetColLabelValue( 1, wxT("Puntos") );
	m_gridInformacionEquipos->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_gridInformacionEquipos->EnableDragRowSize( true );
	m_gridInformacionEquipos->SetRowLabelSize( 80 );
	m_gridInformacionEquipos->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_gridInformacionEquipos->SetDefaultCellFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	m_gridInformacionEquipos->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer34->Add( m_gridInformacionEquipos, 1, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonCancelar = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonCancelar->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer35->Add( m_buttonCancelar, 0, wxALL, 5 );
	
	m_buttonVerInfoEquipo = new wxButton( this, wxID_ANY, wxT("Ver info/editar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonVerInfoEquipo->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer35->Add( m_buttonVerInfoEquipo, 0, wxALL, 5 );
	
	
	bSizer34->Add( bSizer35, 0, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer34 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( wxfbEstadisticasTorneo::OnCambiaTamanio ) );
	m_buttonCancelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbEstadisticasTorneo::OnClickCancelar ), NULL, this );
	m_buttonVerInfoEquipo->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbEstadisticasTorneo::OnClickVerInfoEquipo ), NULL, this );
}

wxfbEstadisticasTorneo::~wxfbEstadisticasTorneo()
{
	// Disconnect Events
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( wxfbEstadisticasTorneo::OnCambiaTamanio ) );
	m_buttonCancelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbEstadisticasTorneo::OnClickCancelar ), NULL, this );
	m_buttonVerInfoEquipo->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbEstadisticasTorneo::OnClickVerInfoEquipo ), NULL, this );
	
}

wxfbEditarInfoEquipo::wxfbEditarInfoEquipo( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Nombre Equipo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	m_staticText2->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer5->Add( m_staticText2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textNombreEquipo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_textNombreEquipo, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer4->Add( bSizer5, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Nombre Director Técnico:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	m_staticText3->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer6->Add( m_staticText3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textNombreDT = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_textNombreDT, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer4->Add( bSizer6, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("Nombre del estadio:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	m_staticText6->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer9->Add( m_staticText6, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textNombreEstadio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_textNombreEstadio, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer4->Add( bSizer9, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Capacidad del estadio:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	m_staticText7->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer10->Add( m_staticText7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCapacidadEstadio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_textCapacidadEstadio, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer4->Add( bSizer10, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("Ubicación del estadio:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	m_staticText8->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer11->Add( m_staticText8, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textUbicacionEstadio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_textUbicacionEstadio, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer4->Add( bSizer11, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer61;
	bSizer61 = new wxBoxSizer( wxVERTICAL );
	
	m_gridJugadores = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	m_gridJugadores->CreateGrid( 0, 2 );
	m_gridJugadores->EnableEditing( true );
	m_gridJugadores->EnableGridLines( true );
	m_gridJugadores->EnableDragGridSize( false );
	m_gridJugadores->SetMargins( 0, 0 );
	
	// Columns
	m_gridJugadores->SetColSize( 0, 401 );
	m_gridJugadores->SetColSize( 1, 474 );
	m_gridJugadores->EnableDragColMove( false );
	m_gridJugadores->EnableDragColSize( true );
	m_gridJugadores->SetColLabelSize( 30 );
	m_gridJugadores->SetColLabelValue( 0, wxT("Nombre Jugador") );
	m_gridJugadores->SetColLabelValue( 1, wxT("Posición del Jugador") );
	m_gridJugadores->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_gridJugadores->EnableDragRowSize( true );
	m_gridJugadores->SetRowLabelSize( 80 );
	m_gridJugadores->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_gridJugadores->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer61->Add( m_gridJugadores, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer4->Add( bSizer61, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button24 = new wxButton( this, wxID_ANY, wxT("AGREGAR FILA JUGADORES"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button24->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer15->Add( m_button24, 0, wxALL, 5 );
	
	m_button23 = new wxButton( this, wxID_ANY, wxT("Eliminar Fila Jugadores"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button23->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer15->Add( m_button23, 0, wxALL, 5 );
	
	m_buttonAceptarCambios = new wxButton( this, wxID_ANY, wxT("Aceptar cambios"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonAceptarCambios->SetFont( wxFont( 10, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer15->Add( m_buttonAceptarCambios, 0, wxALL, 5 );
	
	m_buttonCancelar = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonCancelar->SetFont( wxFont( 10, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer15->Add( m_buttonCancelar, 0, wxALL, 5 );
	
	
	bSizer4->Add( bSizer15, 0, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer4 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_button24->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbEditarInfoEquipo::OnClickAgregarFilaJugadores ), NULL, this );
	m_button23->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbEditarInfoEquipo::OnClickEliminarFilaJugadores ), NULL, this );
	m_buttonAceptarCambios->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbEditarInfoEquipo::OnClickAceptarCambios ), NULL, this );
	m_buttonCancelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbEditarInfoEquipo::OnClickCancelar ), NULL, this );
}

wxfbEditarInfoEquipo::~wxfbEditarInfoEquipo()
{
	// Disconnect Events
	m_button24->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbEditarInfoEquipo::OnClickAgregarFilaJugadores ), NULL, this );
	m_button23->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbEditarInfoEquipo::OnClickEliminarFilaJugadores ), NULL, this );
	m_buttonAceptarCambios->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbEditarInfoEquipo::OnClickAceptarCambios ), NULL, this );
	m_buttonCancelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbEditarInfoEquipo::OnClickCancelar ), NULL, this );
	
}

wxfbArmarFixture::wxfbArmarFixture( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer27;
	bSizer27 = new wxBoxSizer( wxVERTICAL );
	
	m_gridFixture = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	m_gridFixture->CreateGrid( 0, 6 );
	m_gridFixture->EnableEditing( false );
	m_gridFixture->EnableGridLines( true );
	m_gridFixture->EnableDragGridSize( false );
	m_gridFixture->SetMargins( 0, 0 );
	
	// Columns
	m_gridFixture->SetColSize( 0, 123 );
	m_gridFixture->SetColSize( 1, 255 );
	m_gridFixture->SetColSize( 2, 29 );
	m_gridFixture->SetColSize( 3, 30 );
	m_gridFixture->SetColSize( 4, 241 );
	m_gridFixture->SetColSize( 5, 293 );
	m_gridFixture->EnableDragColMove( false );
	m_gridFixture->EnableDragColSize( true );
	m_gridFixture->SetColLabelSize( 30 );
	m_gridFixture->SetColLabelValue( 0, wxT("N° de fecha") );
	m_gridFixture->SetColLabelValue( 1, wxT("Equipo local") );
	m_gridFixture->SetColLabelValue( 2, wxEmptyString );
	m_gridFixture->SetColLabelValue( 3, wxEmptyString );
	m_gridFixture->SetColLabelValue( 4, wxT("Equipo Visitante") );
	m_gridFixture->SetColLabelValue( 5, wxT("Estadio") );
	m_gridFixture->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_gridFixture->EnableDragRowSize( true );
	m_gridFixture->SetRowLabelSize( 80 );
	m_gridFixture->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_gridFixture->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer27->Add( m_gridFixture, 1, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonCancelar = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonCancelar->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer28->Add( m_buttonCancelar, 0, wxALL, 5 );
	
	m_buttonAgregarPartido = new wxButton( this, wxID_ANY, wxT("Agregar Partido"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonAgregarPartido->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer28->Add( m_buttonAgregarPartido, 0, wxALL, 5 );
	
	m_buttonEliminarPartido = new wxButton( this, wxID_ANY, wxT("Eliminar Partido"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonEliminarPartido->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer28->Add( m_buttonEliminarPartido, 0, wxALL, 5 );
	
	m_buttonEditarResultado = new wxButton( this, wxID_ANY, wxT("Editar Resultado Partido"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonEditarResultado->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer28->Add( m_buttonEditarResultado, 0, wxALL, 5 );
	
	
	bSizer27->Add( bSizer28, 0, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer27 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( wxfbArmarFixture::OnCambiaTamanio ) );
	m_buttonCancelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbArmarFixture::OnClickCancelarArmarFixture ), NULL, this );
	m_buttonAgregarPartido->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbArmarFixture::OnClickAgregarPartido ), NULL, this );
	m_buttonEliminarPartido->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbArmarFixture::OnClickEliminarPartido ), NULL, this );
	m_buttonEditarResultado->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbArmarFixture::OnClickEditarResultado ), NULL, this );
}

wxfbArmarFixture::~wxfbArmarFixture()
{
	// Disconnect Events
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( wxfbArmarFixture::OnCambiaTamanio ) );
	m_buttonCancelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbArmarFixture::OnClickCancelarArmarFixture ), NULL, this );
	m_buttonAgregarPartido->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbArmarFixture::OnClickAgregarPartido ), NULL, this );
	m_buttonEliminarPartido->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbArmarFixture::OnClickEliminarPartido ), NULL, this );
	m_buttonEditarResultado->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbArmarFixture::OnClickEditarResultado ), NULL, this );
	
}

wxfbEditarResultado::wxfbEditarResultado( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer56;
	bSizer56 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer57;
	bSizer57 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText86 = new wxStaticText( this, wxID_ANY, wxT("Goles equipo local:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText86->Wrap( -1 );
	m_staticText86->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer57->Add( m_staticText86, 0, wxALL, 5 );
	
	m_textGolesEquipoLocal = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer57->Add( m_textGolesEquipoLocal, 1, wxALL, 5 );
	
	m_staticText87 = new wxStaticText( this, wxID_ANY, wxT("Goles equipo visitante"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText87->Wrap( -1 );
	m_staticText87->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer57->Add( m_staticText87, 0, wxALL, 5 );
	
	m_textGolesEquipoVisitante = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer57->Add( m_textGolesEquipoVisitante, 1, wxALL, 5 );
	
	
	bSizer56->Add( bSizer57, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer58;
	bSizer58 = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonAceptar = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonAceptar->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer58->Add( m_buttonAceptar, 0, wxALL, 5 );
	
	m_buttonCancelar = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonCancelar->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer58->Add( m_buttonCancelar, 0, wxALL, 5 );
	
	
	bSizer56->Add( bSizer58, 0, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer56 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_buttonAceptar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbEditarResultado::OnClickAceptar ), NULL, this );
	m_buttonCancelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbEditarResultado::OnClickCancelar ), NULL, this );
}

wxfbEditarResultado::~wxfbEditarResultado()
{
	// Disconnect Events
	m_buttonAceptar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbEditarResultado::OnClickAceptar ), NULL, this );
	m_buttonCancelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbEditarResultado::OnClickCancelar ), NULL, this );
	
}

wxfbAgregarPartido::wxfbAgregarPartido( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer29;
	bSizer29 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer30;
	bSizer30 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText46 = new wxStaticText( this, wxID_ANY, wxT("Equipo Local:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText46->Wrap( -1 );
	m_staticText46->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer30->Add( m_staticText46, 1, wxALL, 5 );
	
	m_staticText47 = new wxStaticText( this, wxID_ANY, wxT("Equipo Visitante:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText47->Wrap( -1 );
	m_staticText47->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer30->Add( m_staticText47, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer29->Add( bSizer30, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxHORIZONTAL );
	
	wxArrayString m_choiceEquipoLocalChoices;
	m_choiceEquipoLocal = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceEquipoLocalChoices, 0 );
	m_choiceEquipoLocal->SetSelection( 0 );
	bSizer31->Add( m_choiceEquipoLocal, 1, wxALL, 5 );
	
	wxArrayString m_choiceEquipoVisitanteChoices;
	m_choiceEquipoVisitante = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceEquipoVisitanteChoices, 0 );
	m_choiceEquipoVisitante->SetSelection( 0 );
	bSizer31->Add( m_choiceEquipoVisitante, 1, wxALL, 5 );
	
	
	bSizer29->Add( bSizer31, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer33;
	bSizer33 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText45 = new wxStaticText( this, wxID_ANY, wxT("Numero de fecha:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText45->Wrap( -1 );
	m_staticText45->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer33->Add( m_staticText45, 0, wxALL, 5 );
	
	m_textNroFecha = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer33->Add( m_textNroFecha, 0, wxALL, 5 );
	
	
	bSizer29->Add( bSizer33, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonCancelar = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonCancelar->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer32->Add( m_buttonCancelar, 0, wxALL, 5 );
	
	m_buttonAgregarPartido = new wxButton( this, wxID_ANY, wxT("Agregar Partido"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonAgregarPartido->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer32->Add( m_buttonAgregarPartido, 0, wxALL, 5 );
	
	
	bSizer29->Add( bSizer32, 0, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer29 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_buttonCancelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbAgregarPartido::OnClickCancelar ), NULL, this );
	m_buttonAgregarPartido->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbAgregarPartido::OnClickAgregarPartido ), NULL, this );
}

wxfbAgregarPartido::~wxfbAgregarPartido()
{
	// Disconnect Events
	m_buttonCancelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbAgregarPartido::OnClickCancelar ), NULL, this );
	m_buttonAgregarPartido->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbAgregarPartido::OnClickAgregarPartido ), NULL, this );
	
}

wxfbConfiguracionEquipos::wxfbConfiguracionEquipos( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	m_buttonAgregarEquipo = new wxButton( this, wxID_ANY, wxT("Agregar Equipo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonAgregarEquipo->SetFont( wxFont( 14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer3->Add( m_buttonAgregarEquipo, 1, wxALL|wxEXPAND, 5 );
	
	m_buttonEliminarEquipo = new wxButton( this, wxID_ANY, wxT("Eliminar Equipo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonEliminarEquipo->SetFont( wxFont( 14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer3->Add( m_buttonEliminarEquipo, 1, wxALL|wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer3 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_buttonAgregarEquipo->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbConfiguracionEquipos::OnClickAgregarEquipo ), NULL, this );
	m_buttonEliminarEquipo->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbConfiguracionEquipos::OnClickEliminarEquipo ), NULL, this );
}

wxfbConfiguracionEquipos::~wxfbConfiguracionEquipos()
{
	// Disconnect Events
	m_buttonAgregarEquipo->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbConfiguracionEquipos::OnClickAgregarEquipo ), NULL, this );
	m_buttonEliminarEquipo->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbConfiguracionEquipos::OnClickEliminarEquipo ), NULL, this );
	
}

wxfbEliminarEquipo::wxfbEliminarEquipo( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText44 = new wxStaticText( this, wxID_ANY, wxT("Ayuda: Haga click sobre el equipo que quiera eliminar y luego presione el botón \"Eliminar\""), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText44->Wrap( -1 );
	m_staticText44->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	
	bSizer24->Add( m_staticText44, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	
	bSizer23->Add( bSizer24, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer25;
	bSizer25 = new wxBoxSizer( wxVERTICAL );
	
	m_gridEliminarEquipo = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	m_gridEliminarEquipo->CreateGrid( 0, 1 );
	m_gridEliminarEquipo->EnableEditing( false );
	m_gridEliminarEquipo->EnableGridLines( true );
	m_gridEliminarEquipo->EnableDragGridSize( false );
	m_gridEliminarEquipo->SetMargins( 0, 0 );
	
	// Columns
	m_gridEliminarEquipo->SetColSize( 0, 831 );
	m_gridEliminarEquipo->EnableDragColMove( false );
	m_gridEliminarEquipo->EnableDragColSize( true );
	m_gridEliminarEquipo->SetColLabelSize( 30 );
	m_gridEliminarEquipo->SetColLabelValue( 0, wxT("Nombre Equipo") );
	m_gridEliminarEquipo->SetColLabelValue( 1, wxEmptyString );
	m_gridEliminarEquipo->SetColLabelValue( 2, wxEmptyString );
	m_gridEliminarEquipo->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_gridEliminarEquipo->EnableDragRowSize( true );
	m_gridEliminarEquipo->SetRowLabelSize( 80 );
	m_gridEliminarEquipo->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_gridEliminarEquipo->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer25->Add( m_gridEliminarEquipo, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer23->Add( bSizer25, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer26;
	bSizer26 = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonCancelar = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonCancelar->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer26->Add( m_buttonCancelar, 0, wxALL, 5 );
	
	m_buttonEliminar = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonEliminar->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer26->Add( m_buttonEliminar, 0, wxALL, 5 );
	
	
	bSizer23->Add( bSizer26, 0, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer23 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( wxfbEliminarEquipo::OnCambiaTamanio ) );
	m_buttonCancelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbEliminarEquipo::OnClickCancelar ), NULL, this );
	m_buttonEliminar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbEliminarEquipo::OnClickEliminar ), NULL, this );
}

wxfbEliminarEquipo::~wxfbEliminarEquipo()
{
	// Disconnect Events
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( wxfbEliminarEquipo::OnCambiaTamanio ) );
	m_buttonCancelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbEliminarEquipo::OnClickCancelar ), NULL, this );
	m_buttonEliminar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbEliminarEquipo::OnClickEliminar ), NULL, this );
	
}

wxfbAgregarEquipo::wxfbAgregarEquipo( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Nombre Equipo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	m_staticText2->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer5->Add( m_staticText2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textNombreEquipo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_textNombreEquipo, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer4->Add( bSizer5, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Nombre Director Tecnico:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	m_staticText3->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer6->Add( m_staticText3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textNombreDT = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_textNombreDT, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer4->Add( bSizer6, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("Nombre del estadio:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	m_staticText6->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer9->Add( m_staticText6, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textNombreEstadio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_textNombreEstadio, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer4->Add( bSizer9, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Capacidad del estadio:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	m_staticText7->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer10->Add( m_staticText7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCapacidadEstadio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCapacidadEstadio->SetValidator( wxTextValidator( wxFILTER_NUMERIC, &validator_numeric_dos ) );
	
	bSizer10->Add( m_textCapacidadEstadio, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer4->Add( bSizer10, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("Ubicacion del estadio:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	m_staticText8->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer11->Add( m_staticText8, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textUbicacionEstadio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_textUbicacionEstadio, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer4->Add( bSizer11, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer59;
	bSizer59 = new wxBoxSizer( wxVERTICAL );
	
	m_gridJugadores = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	m_gridJugadores->CreateGrid( 0, 2 );
	m_gridJugadores->EnableEditing( true );
	m_gridJugadores->EnableGridLines( true );
	m_gridJugadores->EnableDragGridSize( false );
	m_gridJugadores->SetMargins( 0, 0 );
	
	// Columns
	m_gridJugadores->SetColSize( 0, 319 );
	m_gridJugadores->SetColSize( 1, 294 );
	m_gridJugadores->EnableDragColMove( false );
	m_gridJugadores->EnableDragColSize( true );
	m_gridJugadores->SetColLabelSize( 30 );
	m_gridJugadores->SetColLabelValue( 0, wxT("Nombre Jugador") );
	m_gridJugadores->SetColLabelValue( 1, wxT("Posición del Jugador") );
	m_gridJugadores->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_gridJugadores->EnableDragRowSize( true );
	m_gridJugadores->SetRowLabelSize( 80 );
	m_gridJugadores->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_gridJugadores->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer59->Add( m_gridJugadores, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer4->Add( bSizer59, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonAgregarFilaDeJugadores = new wxButton( this, wxID_ANY, wxT("Agregar Fila de Jugadores"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonAgregarFilaDeJugadores->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer15->Add( m_buttonAgregarFilaDeJugadores, 0, wxALL, 5 );
	
	m_buttonCrearEquipo = new wxButton( this, wxID_ANY, wxT("Crear Equipo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonCrearEquipo->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer15->Add( m_buttonCrearEquipo, 0, wxALL, 5 );
	
	m_buttonCancelar = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonCancelar->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bowlby One SC") ) );
	
	bSizer15->Add( m_buttonCancelar, 0, wxALL, 5 );
	
	
	bSizer4->Add( bSizer15, 0, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer4 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_buttonAgregarFilaDeJugadores->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbAgregarEquipo::OnClickAgregarFilaJugadores ), NULL, this );
	m_buttonCrearEquipo->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbAgregarEquipo::OnClickCrearEquipo ), NULL, this );
	m_buttonCancelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbAgregarEquipo::OnClickCancelar ), NULL, this );
}

wxfbAgregarEquipo::~wxfbAgregarEquipo()
{
	// Disconnect Events
	m_buttonAgregarFilaDeJugadores->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbAgregarEquipo::OnClickAgregarFilaJugadores ), NULL, this );
	m_buttonCrearEquipo->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbAgregarEquipo::OnClickCrearEquipo ), NULL, this );
	m_buttonCancelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbAgregarEquipo::OnClickCancelar ), NULL, this );
	
}
