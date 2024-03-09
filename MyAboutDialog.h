#pragma once
#include "ui/ui.h"

class MyAboutDialog : public AboutDialog
{
    public:
    MyAboutDialog(wxWindow* parent);
    ~MyAboutDialog();

    private:
    wxWindow* parent;
};