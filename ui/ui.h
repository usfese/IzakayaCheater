///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/spinctrl.h>
#include <wx/sizer.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame
{
	private:

	protected:
		wxStaticText* SupportText;
		wxStaticText* DetectedText;
		wxButton* DetectingButton;
		wxSpinCtrl* m_spinCtrl2;
		wxButton* ChangeButton;
		wxButton* AboutButton;

		// Virtual event handlers, override them in your derived class
		virtual void OnDetect( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnChange( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAbout( wxCommandEvent& event ) { event.Skip(); }


	public:

		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("东方夜雀食堂金钱修改器"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL, const wxString& name = wxT("夜雀食堂金钱修改器") );

		~MainFrame();

};

