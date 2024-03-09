#pragma once
#include "ui/ui.h"
#include "utils.h"
#include "MyAboutDialog.h"
#include <memory>

class MyMainFrame : public MainFrame
{   
    private:
    uintptr_t modBase;
    HANDLE hProc;
    MyAboutDialog* myAboutDialog;

    
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

    // 检测游戏进程
    void Detect();

    // 改变金钱值
    void Change();
};