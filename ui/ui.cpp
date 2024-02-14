///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ui.h"

///////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxFrame( parent, id, title, pos, size, style, name )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	SupportText = new wxStaticText( this, wxID_ANY, wxT("支持"), wxDefaultPosition, wxDefaultSize, 0 );
	SupportText->Wrap( -1 );
	SupportText->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("微软雅黑") ) );
	SupportText->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );

	bSizer1->Add( SupportText, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	DetectedText = new wxStaticText( this, wxID_ANY, wxT("检测进程中..."), wxDefaultPosition, wxDefaultSize, 0 );
	DetectedText->Wrap( -1 );
	bSizer1->Add( DetectedText, 0, wxALL, 5 );

	DetectingButton = new wxButton( this, wxID_ANY, wxT("检测进程"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( DetectingButton, 0, wxALL, 5 );

	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer( 0, 3, 0, 0 );

	m_spinCtrl2 = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 250,-1 ), wxSP_ARROW_KEYS, 0, 10, 0 );
	gSizer1->Add( m_spinCtrl2, 0, wxALL, 5 );


	gSizer1->Add( 0, 0, 1, wxEXPAND, 5 );

	ChangeButton = new wxButton( this, wxID_ANY, wxT("修改"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( ChangeButton, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer1->Add( gSizer1, 1, wxEXPAND, 5 );


	bSizer1->Add( 0, 0, 1, wxEXPAND, 5 );

	AboutButton = new wxButton( this, wxID_ANY, wxT("关于"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( AboutButton, 0, wxALL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	DetectingButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnDetect ), NULL, this );
	ChangeButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnChange ), NULL, this );
	AboutButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnAbout ), NULL, this );
}

MainFrame::~MainFrame()
{
	// Disconnect Events
	DetectingButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnDetect ), NULL, this );
	ChangeButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnChange ), NULL, this );
	AboutButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnAbout ), NULL, this );

}
