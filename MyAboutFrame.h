#pragma once
#include "ui/ui.h"

class MyAboutFrame : public AboutFrame
{
    public:
    MyAboutFrame(wxWindow* parent);
    ~MyAboutFrame();

    private:
    wxWindow* parent;
};