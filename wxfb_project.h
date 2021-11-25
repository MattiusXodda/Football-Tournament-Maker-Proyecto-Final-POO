///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov  6 2017)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __WXFB_PROJECT_H__
#define __WXFB_PROJECT_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/button.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/frame.h>
#include <wx/grid.h>
#include <wx/dialog.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/choice.h>
#include <wx/valtext.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class WxfbVentanaPrincipal
///////////////////////////////////////////////////////////////////////////////
class WxfbVentanaPrincipal : public wxFrame 
{
	private:
	
	protected:
		wxButton* m_button2ConfiguracionDeLosEquipos;
		wxButton* m_buttonArmarFixture;
		wxButton* m_buttonEstadisticasTorneo;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickConfiguracionEquipos( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickArmarFixture( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickEstadisticasDelTorneo( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		WxfbVentanaPrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Football Tournament Maker"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 928,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~WxfbVentanaPrincipal();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class wxfbEstadisticasTorneo
///////////////////////////////////////////////////////////////////////////////
class wxfbEstadisticasTorneo : public wxDialog 
{
	private:
	
	protected:
		wxGrid* m_gridInformacionEquipos;
		wxButton* m_buttonCancelar;
		wxButton* m_buttonVerInfoEquipo;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnCambiaTamanio( wxSizeEvent& event ) { event.Skip(); }
		virtual void OnClickCancelar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickVerInfoEquipo( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		wxfbEstadisticasTorneo( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Informacion del torneo"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 811,579 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~wxfbEstadisticasTorneo();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class wxfbEditarInfoEquipo
///////////////////////////////////////////////////////////////////////////////
class wxfbEditarInfoEquipo : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText2;
		wxTextCtrl* m_textNombreEquipo;
		wxStaticText* m_staticText3;
		wxTextCtrl* m_textNombreDT;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_textNombreEstadio;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_textCapacidadEstadio;
		wxStaticText* m_staticText8;
		wxTextCtrl* m_textUbicacionEstadio;
		wxGrid* m_gridJugadores;
		wxButton* m_button24;
		wxButton* m_button23;
		wxButton* m_buttonAceptarCambios;
		wxButton* m_buttonCancelar;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickAgregarFilaJugadores( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickEliminarFilaJugadores( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickAceptarCambios( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickCancelar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		wxString validator_alpha_dos; 
		wxString validator_alpha_cuatro; 
		wxString validator_alpha_cinco; 
		
		wxfbEditarInfoEquipo( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Editar Informacion del equipo"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 982,691 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~wxfbEditarInfoEquipo();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class wxfbArmarFixture
///////////////////////////////////////////////////////////////////////////////
class wxfbArmarFixture : public wxDialog 
{
	private:
	
	protected:
		wxGrid* m_gridFixture;
		wxButton* m_buttonCancelar;
		wxButton* m_buttonAgregarPartido;
		wxButton* m_buttonEliminarPartido;
		wxButton* m_buttonEditarResultado;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnCambiaTamanio( wxSizeEvent& event ) { event.Skip(); }
		virtual void OnClickCancelarArmarFixture( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickAgregarPartido( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickEliminarPartido( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickEditarResultado( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		wxfbArmarFixture( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Fixture"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1071,606 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~wxfbArmarFixture();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class wxfbEditarResultado
///////////////////////////////////////////////////////////////////////////////
class wxfbEditarResultado : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText86;
		wxTextCtrl* m_textGolesEquipoLocal;
		wxStaticText* m_staticText87;
		wxTextCtrl* m_textGolesEquipoVisitante;
		wxButton* m_buttonAceptar;
		wxButton* m_buttonCancelar;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickAceptar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickCancelar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		wxfbEditarResultado( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Editar Resultado"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 686,110 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~wxfbEditarResultado();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class wxfbAgregarPartido
///////////////////////////////////////////////////////////////////////////////
class wxfbAgregarPartido : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText46;
		wxStaticText* m_staticText47;
		wxChoice* m_choiceEquipoLocal;
		wxChoice* m_choiceEquipoVisitante;
		wxStaticText* m_staticText45;
		wxTextCtrl* m_textNroFecha;
		wxButton* m_buttonCancelar;
		wxButton* m_buttonAgregarPartido;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickCancelar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickAgregarPartido( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		wxfbAgregarPartido( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Agregar Partido"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 801,201 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~wxfbAgregarPartido();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class wxfbConfiguracionEquipos
///////////////////////////////////////////////////////////////////////////////
class wxfbConfiguracionEquipos : public wxDialog 
{
	private:
	
	protected:
		wxButton* m_buttonAgregarEquipo;
		wxButton* m_buttonEliminarEquipo;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickAgregarEquipo( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickEliminarEquipo( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		wxfbConfiguracionEquipos( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Configuración de los equipos"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 540,296 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~wxfbConfiguracionEquipos();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class wxfbEliminarEquipo
///////////////////////////////////////////////////////////////////////////////
class wxfbEliminarEquipo : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText44;
		wxGrid* m_gridEliminarEquipo;
		wxButton* m_buttonCancelar;
		wxButton* m_buttonEliminar;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnCambiaTamanio( wxSizeEvent& event ) { event.Skip(); }
		virtual void OnClickCancelar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickEliminar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		wxfbEliminarEquipo( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Eliminar equipo"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 946,684 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~wxfbEliminarEquipo();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class wxfbAgregarEquipo
///////////////////////////////////////////////////////////////////////////////
class wxfbAgregarEquipo : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText2;
		wxTextCtrl* m_textNombreEquipo;
		wxStaticText* m_staticText3;
		wxTextCtrl* m_textNombreDT;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_textNombreEstadio;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_textCapacidadEstadio;
		wxStaticText* m_staticText8;
		wxTextCtrl* m_textUbicacionEstadio;
		wxGrid* m_gridJugadores;
		wxButton* m_buttonAgregarFilaDeJugadores;
		wxButton* m_buttonCrearEquipo;
		wxButton* m_buttonCancelar;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickAgregarFilaJugadores( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickCrearEquipo( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickCancelar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		wxString validator_alpha_uno; 
		wxString validator_alpha_dos; 
		wxString validator_alpha_cuatro; 
		wxString validator_numeric_dos; 
		wxString validator_alpha_cinco; 
		
		wxfbAgregarEquipo( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Agregar Equipo"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 717,698 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~wxfbAgregarEquipo();
	
};

#endif //__WXFB_PROJECT_H__
