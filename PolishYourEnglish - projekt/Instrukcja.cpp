#include "Instrukcja.h"
#include "PolishYourEnglishMain.h"
#include <wx/app.h>

#undef _
#define _(s) wxString::FromUTF8 (s)

wxDialog *oknoinstrukcja;
extern wxDialog* oknostart;



//(*InternalHeaders(Instrukcja)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Instrukcja)
const long Instrukcja::ID_STATICTEXT1 = wxNewId();
const long Instrukcja::ID_STATICLINE1 = wxNewId();
const long Instrukcja::ID_STATICTEXT2 = wxNewId();
const long Instrukcja::ID_STATICTEXT3 = wxNewId();
const long Instrukcja::ID_STATICTEXT4 = wxNewId();
const long Instrukcja::ID_STATICTEXT5 = wxNewId();
const long Instrukcja::ID_STATICTEXT6 = wxNewId();
const long Instrukcja::ID_STATICTEXT7 = wxNewId();
const long Instrukcja::ID_STATICLINE2 = wxNewId();
const long Instrukcja::ID_STATICTEXT8 = wxNewId();
const long Instrukcja::ID_STATICTEXT9 = wxNewId();
const long Instrukcja::ID_STATICTEXT16 = wxNewId();
const long Instrukcja::ID_STATICTEXT10 = wxNewId();
const long Instrukcja::ID_STATICTEXT11 = wxNewId();
const long Instrukcja::ID_STATICTEXT12 = wxNewId();
const long Instrukcja::ID_STATICLINE3 = wxNewId();
const long Instrukcja::ID_STATICTEXT13 = wxNewId();
const long Instrukcja::ID_STATICTEXT14 = wxNewId();
const long Instrukcja::ID_STATICTEXT15 = wxNewId();
const long Instrukcja::ID_STATICLINE4 = wxNewId();
const long Instrukcja::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Instrukcja,wxDialog)
	//(*EventTable(Instrukcja)
	//*)
END_EVENT_TABLE()

Instrukcja::Instrukcja(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Instrukcja)
	wxFlexGridSizer* FlexGridSizer1;

	Create(parent, id, _("PolishYourEnglish"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxCLOSE_BOX, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	FlexGridSizer1 = new wxFlexGridSizer(21, 1, 0, 0);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Aby rozpocząć naukę/rozgrywkę należy kliknąć przycisk \"START\""), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	FlexGridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
	FlexGridSizer1->Add(StaticLine1, 1, wxALL|wxEXPAND, 5);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Okno \"WYBÓR\""), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	FlexGridSizer1->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Klikając jeden z przycisków - \"ANG-POL\" lub \"POL-ANG\" wybieramy kierunek, w którym chcemy tłumaczyć."), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	FlexGridSizer1->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("UWAGA: Domyślny kierunek translacji ustawiony jest na angielski -> polski"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,true,_T("Arial"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	FlexGridSizer1->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Używając rozwijanej listy wybieramy jeden z czterych dostępnych tematów."), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	FlexGridSizer1->Add(StaticText5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Na dole dostępne jest pole, w którym należy wpisać ilość słów, którą bedziemy chcieli tłumaczyć."), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	FlexGridSizer1->Add(StaticText6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("Ustawienia zatwierdzamy klikając przycisk \"OK\""), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	FlexGridSizer1->Add(StaticText7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine2 = new wxStaticLine(this, ID_STATICLINE2, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE2"));
	FlexGridSizer1->Add(StaticLine2, 1, wxALL|wxEXPAND, 5);
	StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("Okno \"SPRAWDŹ\""), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	wxFont StaticText8Font(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	StaticText8->SetFont(StaticText8Font);
	FlexGridSizer1->Add(StaticText8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText9 = new wxStaticText(this, ID_STATICTEXT9, _("Po lewej stronie okienka wyświetla się słowo, które mamy przetłumaczyć, natomiast po prawej znajduje się pole gdzie wpisujemy translację."), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	FlexGridSizer1->Add(StaticText9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText16 = new wxStaticText(this, ID_STATICTEXT16, _("UWAGA: Słowa powinny być zapisane małymi literami"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT16"));
	wxFont StaticText16Font(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,true,_T("Arial"),wxFONTENCODING_DEFAULT);
	StaticText16->SetFont(StaticText16Font);
	FlexGridSizer1->Add(StaticText16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText10 = new wxStaticText(this, ID_STATICTEXT10, _("UWAGA: W przypadku wpisywania dwuczłonowego słowa angielskiego spację należy zastąpić myślnikiem \"-\". Przykład: police officer- police-officer."), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
	wxFont StaticText10Font(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,true,_T("Arial"),wxFONTENCODING_DEFAULT);
	StaticText10->SetFont(StaticText10Font);
	FlexGridSizer1->Add(StaticText10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText11 = new wxStaticText(this, ID_STATICTEXT11, _("Klikamy \"OK\", aby zatwierdzić. W przypadku dobrej translacji otrzymujemy informację o zdobyciu punktu, jeżeli jednak popełnimy błąd dostaniemy wiadomość z prawidłowym tłumaczeniem."), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
	FlexGridSizer1->Add(StaticText11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText12 = new wxStaticText(this, ID_STATICTEXT12, _("Po osiągnięciu ustalonej liczby w okienku \"WYBÓR\"  automatycznie przechodzimy do okna końcowego - \"REZULTAT\""), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
	FlexGridSizer1->Add(StaticText12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine3 = new wxStaticLine(this, ID_STATICLINE3, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE3"));
	FlexGridSizer1->Add(StaticLine3, 1, wxALL|wxEXPAND, 5);
	StaticText13 = new wxStaticText(this, ID_STATICTEXT13, _("Okno \"REZULTAT\""), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT13"));
	wxFont StaticText13Font(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	StaticText13->SetFont(StaticText13Font);
	FlexGridSizer1->Add(StaticText13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText14 = new wxStaticText(this, ID_STATICTEXT14, _("Otrzymujemy informację o zdobytych punktach."), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT14"));
	FlexGridSizer1->Add(StaticText14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText15 = new wxStaticText(this, ID_STATICTEXT15, _("Klikając przycisk \"JESZCZE RAZ\" wracamy do ekranu początkowego, natomiast klikająć \"WYJDŹ\" wyłączamy program."), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT15"));
	FlexGridSizer1->Add(StaticText15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine4 = new wxStaticLine(this, ID_STATICLINE4, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE4"));
	FlexGridSizer1->Add(StaticLine4, 1, wxALL|wxEXPAND, 5);
	Button1 = new wxButton(this, ID_BUTTON1, _("WRÓĆ"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	FlexGridSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Instrukcja::OnButton1Click);
	//*)
	SetIcon(wxICON(aaaa));
}

Instrukcja::~Instrukcja()
{
	//(*Destroy(Instrukcja)
	//*)
}


void Instrukcja::OnButton1Click(wxCommandEvent& event)
{
            // Zamknij bieżące okno dialogowe
                    this->EndModal(wxID_CANCEL);
                    // Otwórz nowe okno
                    PolishYourEnglishDialog dlg(0);
                    dlg.ShowModal();
}
