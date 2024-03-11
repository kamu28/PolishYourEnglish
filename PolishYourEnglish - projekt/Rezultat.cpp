#include "Rezultat.h"
#include "PolishYourEnglishMain.h"
#include <wx/app.h>

wxDialog *oknorezultat;
extern int Punkty;
//(*InternalHeaders(Rezultat)
#include <wx/intl.h>
#include <wx/string.h>
//*)

#undef _
#define _(s) wxString::FromUTF8 (s)

//(*IdInit(Rezultat)
const long Rezultat::ID_STATICTEXT1 = wxNewId();
const long Rezultat::ID_BUTTON1 = wxNewId();
const long Rezultat::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Rezultat,wxDialog)
	//(*EventTable(Rezultat)
	//*)
END_EVENT_TABLE()

extern wxDialog* oknostart;
extern int Punkty;
extern long Liczbaslowek;

Rezultat::Rezultat(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Rezultat)
	wxBoxSizer* BoxSizer1;
	wxFlexGridSizer* FlexGridSizer1;

	Create(parent, id, _("PolishYourEnglish"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxCLOSE_BOX, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	FlexGridSizer1 = new wxFlexGridSizer(2, 1, 0, 0);
	FlexGridSizer1->AddGrowableCol(0);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Wynik"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(this, ID_BUTTON1, _("JESZCZE RAZ"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(this, ID_BUTTON2, _("WYJDŹ"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer1->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(BoxSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Rezultat::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Rezultat::OnButton2Click);
	//*)
    wxString etykieta = wxString::Format("Punkty: %d/%ld", Punkty, Liczbaslowek);
            StaticText1->SetLabel(etykieta);
            SetIcon(wxICON(aaaa));
}

Rezultat::~Rezultat()
{
	//(*Destroy(Rezultat)
	//*)
}


void Rezultat::OnButton1Click(wxCommandEvent& event)
{
            Punkty=0;
            // Zamknij bieżące okno dialogowe
                    this->EndModal(wxID_CANCEL);
                    // Otwórz nowe okno
                    PolishYourEnglishDialog dlg(0);
                    dlg.ShowModal();
}

void Rezultat::OnButton2Click(wxCommandEvent& event)
{
 Close();
}
