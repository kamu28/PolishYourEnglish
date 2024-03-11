/***************************************************************
 * Name:      PolishYourEnglishMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Kamil i Bartek ()
 * Created:   2023-12-13
 * Copyright: Kamil i Bartek ()
 * License:
 **************************************************************/

#include "PolishYourEnglishMain.h"
#include "Wybor.h"
#include "Instrukcja.h"

#include <wx/msgdlg.h>

wxDialog *oknostart;

//(*InternalHeaders(PolishYourEnglishDialog)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

#undef _
#define _(s) wxString::FromUTF8 (s)
//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(PolishYourEnglishDialog)
const long PolishYourEnglishDialog::ID_STATICTEXT1 = wxNewId();
const long PolishYourEnglishDialog::ID_BUTTON1 = wxNewId();
const long PolishYourEnglishDialog::ID_STATICLINE1 = wxNewId();
const long PolishYourEnglishDialog::ID_BUTTON2 = wxNewId();
const long PolishYourEnglishDialog::ID_STATICLINE2 = wxNewId();
const long PolishYourEnglishDialog::ID_BUTTON3 = wxNewId();
//*)

BEGIN_EVENT_TABLE(PolishYourEnglishDialog,wxDialog)
    //(*EventTable(PolishYourEnglishDialog)
    //*)
END_EVENT_TABLE()

extern wxDialog* oknowybor;
extern wxDialog* oknoinstrukcja;

PolishYourEnglishDialog::PolishYourEnglishDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(PolishYourEnglishDialog)
    wxBoxSizer* BoxSizer1;
    wxFlexGridSizer* FlexGridSizer1;

    Create(parent, wxID_ANY, _("PolishYourEnglish"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxCLOSE_BOX|wxBORDER_SIMPLE|wxBORDER_STATIC, _T("wxID_ANY"));
    SetClientSize(wxSize(370,315));
    FlexGridSizer1 = new wxFlexGridSizer(2, 1, 0, 0);
    FlexGridSizer1->AddGrowableCol(0);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("PolishYourEnglish"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(20,wxFONTFAMILY_DECORATIVE,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Broadway"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    FlexGridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1 = new wxBoxSizer(wxVERTICAL);
    Button1 = new wxButton(this, ID_BUTTON1, _("START"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    BoxSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxDefaultPosition, wxSize(129,12), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
    BoxSizer1->Add(StaticLine1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxSHAPED, 5);
    Button2 = new wxButton(this, ID_BUTTON2, _("INSTRUKCJA"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    BoxSizer1->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticLine2 = new wxStaticLine(this, ID_STATICLINE2, wxDefaultPosition, wxSize(129,12), wxLI_HORIZONTAL, _T("ID_STATICLINE2"));
    BoxSizer1->Add(StaticLine2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxSHAPED, 5);
    Button3 = new wxButton(this, ID_BUTTON3, _("WYJŚCIE"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    BoxSizer1->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(BoxSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(FlexGridSizer1);
    SetSizer(FlexGridSizer1);
    Layout();
    Center();

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&PolishYourEnglishDialog::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&PolishYourEnglishDialog::OnButton2Click);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&PolishYourEnglishDialog::OnButton3Click);
    //*)
    SetIcon(wxICON(aaaa));
}

PolishYourEnglishDialog::~PolishYourEnglishDialog()
{
    //(*Destroy(PolishYourEnglishDialog)
    //*)
}

void PolishYourEnglishDialog::OnButton1Click(wxCommandEvent& event)
{
  // Zamknij bieżące okno dialogowe
    this->EndModal(wxID_CANCEL);
    // Otwórz nowe okno
    Wybor dlg(0);
    dlg.ShowModal();

}

void PolishYourEnglishDialog::OnButton2Click(wxCommandEvent& event)
{
 // Zamknij bieżące okno dialogowe
    this->EndModal(wxID_CANCEL);
    // Otwórz nowe okno
    Instrukcja dlg(0);
    dlg.ShowModal();
}

void PolishYourEnglishDialog::OnButton3Click(wxCommandEvent& event)
{
    Close();
}





