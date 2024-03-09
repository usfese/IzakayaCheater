#include "MyAboutDialog.h"
#include "config.h"

MyAboutDialog::MyAboutDialog(wxWindow* parent) : AboutDialog(parent, -1)
{
    this->versionText->SetLabel(VERSION);
    this->supportedGameVersionText->SetLabel(SUPPORTED_VERSION);
    this->parent = parent;
}

MyAboutDialog::~MyAboutDialog() = default;