#pragma once
#include "ui/ui.h"
#include "utils.h"
#include "MyAboutFrame.h"
#include <memory>

class MyMainFrame : public MainFrame
{   
    private:
    uintptr_t modBase;
    HANDLE hProc;
    MyAboutFrame* myAboutFrame;
    public:
    void SetModBase(uintptr_t modBase){this->modBase = modBase;}
    uintptr_t GetModBase(){return this->modBase;}
    void SetHProc(HANDLE hProc){this->hProc = hProc;}
    HANDLE GetHProc(){return this->hProc;}
    virtual inline void OnDetect( wxCommandEvent& event ){Detect();}
	virtual void OnChange( wxCommandEvent& event );
	virtual void OnAbout( wxCommandEvent& event );
    virtual void OnTextEnter( wxCommandEvent& event );
    MyMainFrame();
    void Detect();
    void Change();
};