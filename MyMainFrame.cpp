#include "MyMainFrame.h"
#include "utils.h"
#include <wx/msgdlg.h>
#include "config.h"

MyMainFrame::MyMainFrame() : MainFrame(NULL, -1)
{
    SetTitle(_T("东方夜雀食堂金钱修改器") + wxString::FromUTF8(VERSION));
    this->supportText->SetLabel(_T("支持夜雀食堂") + wxString::FromUTF8(SUPPORTED_VERSION));
}

void MyMainFrame::OnChange( wxCommandEvent& event )
{
    Change();
}


void MyMainFrame::OnAbout( wxCommandEvent& event )
{
    this->myAboutDialog = new MyAboutDialog(this);
    this->myAboutDialog->ShowModal();
}

void MyMainFrame::Detect()
{
    IzakayaResult result = GetIzakayaProcess();
    wxString msg;
    switch(result.code)
    {
        case IzakayaCode::PROCESS_NOT_FOUND :
            msg = _T("未找到进程！");
            break;
        case IzakayaCode::BASE_ADDRESS_NOT_FOUND :
            msg = _T("找不到模块基址！");
            break;
        case IzakayaCode::CANNOT_ATTACH_TO_PROCESS :
            msg = _T("无法附加到进程！");
        case IzakayaCode::SUCCESS :
            msg = _T("成功！");
    }
    wxMessageBox(msg);
    if(result.code != IzakayaCode::SUCCESS)
    {
        this->DetectedText->SetLabel(_T("未找到进程！"));
        return;
    }
    this->SetModBase(result.modBase);
    this->SetHProc(result.hProc);
    this->DetectedText->SetLabel(_T("已附加到进程"));
    DWORD money = ReadMoney(result.modBase, hProc);
    this->moneyCtrl->SetValue((int)money);
}

void MyMainFrame::OnTextEnter(wxCommandEvent& event)
{
    Change();
}

void MyMainFrame::Change(){
    if(!GetModBase() || !GetHProc())
    {
        wxMessageBox(_T("写入失败！"));
        return;
    }
    ChangeMoney(GetModBase(), GetHProc(), moneyCtrl->GetValue());
    wxMessageBox(_T("已写入！"));
}