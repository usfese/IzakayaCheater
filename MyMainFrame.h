#pragma once
#include "ui/ui.h"

class MyMainFrame : public MainFrame
{
    public:
    virtual void OnDetect( wxCommandEvent& event );
	virtual void OnChange( wxCommandEvent& event );
	virtual void OnAbout( wxCommandEvent& event );
    MyMainFrame();
};