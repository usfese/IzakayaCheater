#include "MyAboutFrame.h"
#include "config.h"

MyAboutFrame::MyAboutFrame(wxWindow* parent) : AboutFrame(parent, -1)
{
    this->versionText->SetLabel(VERSION);
    this->supportedGameVersionText->SetLabel(SUPPORTED_VERSION);
    this->parent = parent;
}

MyAboutFrame::~MyAboutFrame() = default;