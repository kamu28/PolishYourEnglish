#include "Wybor.h"
#include "Sprawdz.h"
#include "Translate.h"
#include <wx/msgdlg.h>

using namespace std;

wxDialog *oknowybor;

//(*InternalHeaders(Wybor)
#include <wx/intl.h>
#include <wx/string.h>
//*)

#undef _
#define _(s) wxString::FromUTF8 (s)

//(*IdInit(Wybor)
const long Wybor::ID_STATICTEXT1 = wxNewId();
const long Wybor::ID_BUTTON1 = wxNewId();
const long Wybor::ID_BUTTON2 = wxNewId();
const long Wybor::ID_STATICLINE1 = wxNewId();
const long Wybor::ID_STATICTEXT2 = wxNewId();
const long Wybor::ID_CHOICE1 = wxNewId();
const long Wybor::ID_STATICLINE2 = wxNewId();
const long Wybor::ID_STATICTEXT3 = wxNewId();
const long Wybor::ID_SPINCTRL1 = wxNewId();
const long Wybor::ID_STATICLINE3 = wxNewId();
const long Wybor::ID_BUTTON3 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Wybor,wxDialog)
	//(*EventTable(Wybor)
	//*)
END_EVENT_TABLE()

extern wxDialog* oknosprawdz;
extern int Tematslowek;
int wybranyKierunek = 1;
int Tematslowek = 1;
long Liczbaslowek;



Wybor::Wybor(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Wybor)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxFlexGridSizer* FlexGridSizer1;

	Create(parent, id, _("PolishYourEnglish"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxCLOSE_BOX, _T("id"));
	SetClientSize(wxSize(280,630));
	Move(wxDefaultPosition);
	FlexGridSizer1 = new wxFlexGridSizer(1, 1, 0, 0);
	FlexGridSizer1->AddGrowableCol(0);
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("   Kierunek \ntłumaczenia"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
	BoxSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(this, ID_BUTTON1, _("ANG - POL"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer2->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(this, ID_BUTTON2, _("POL - ANG"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer2->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxDefaultPosition, wxSize(130,8), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
	BoxSizer1->Add(StaticLine1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxSHAPED, 5);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Tematyka"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	BoxSizer1->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Choice1 = new wxChoice(this, ID_CHOICE1, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
	Choice1->Append(_("Owoce i warzywa"));
	Choice1->Append(_("Kolory"));
	Choice1->Append(_("Przedmioty"));
	Choice1->Append(_("Zawody"));
	BoxSizer1->Add(Choice1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine2 = new wxStaticLine(this, ID_STATICLINE2, wxDefaultPosition, wxSize(130,8), wxLI_VERTICAL, _T("ID_STATICLINE2"));
	BoxSizer1->Add(StaticLine2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxSHAPED, 5);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Liczba słów"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	BoxSizer1->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrl1 = new wxSpinCtrl(this, ID_SPINCTRL1, _T("5"), wxDefaultPosition, wxDefaultSize, 0, 0, 50, 5, _T("ID_SPINCTRL1"));
	SpinCtrl1->SetValue(_T("5"));
	BoxSizer1->Add(SpinCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine3 = new wxStaticLine(this, ID_STATICLINE3, wxDefaultPosition, wxSize(130,8), wxLI_HORIZONTAL, _T("ID_STATICLINE3"));
	BoxSizer1->Add(StaticLine3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxSHAPED, 5);
	Button3 = new wxButton(this, ID_BUTTON3, _("OK"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	BoxSizer1->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(BoxSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	SetSizer(FlexGridSizer1);
	Layout();
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Wybor::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Wybor::OnButton2Click);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Wybor::OnButton3Click);
	//*)
	SetIcon(wxICON(aaaa));

}


Wybor::~Wybor()
{
	//(*Destroy(Wybor)
	//*)
}

void Wybor::OnButton3Click(wxCommandEvent& event)
{

    //Pobranie tematu slowek
    wxString wybranyTemat = Choice1->GetStringSelection();

   //Pobranie ilosci slowek do translacji
      int value = SpinCtrl1->GetValue();
      Liczbaslowek = value;


            if (wybranyTemat == "Owoce i warzywa") {
                Tematslowek = 1;

                    // Zamknij bieżące okno dialogowe
                    this->EndModal(wxID_CANCEL);
                    // Otwórz nowe okno
                    Sprawdz dlg(0);
                    dlg.ShowModal();

            } else if (wybranyTemat == "Kolory") {
                Tematslowek = 2;

                // Zamknij bieżące okno dialogowe
                    this->EndModal(wxID_CANCEL);
                    // Otwórz nowe okno
                    Sprawdz dlg(0);
                    dlg.ShowModal();

            } else if (wybranyTemat == "Przedmioty") {
                Tematslowek = 3;

                // Zamknij bieżące okno dialogowe
                    this->EndModal(wxID_CANCEL);
                    // Otwórz nowe okno
                    Sprawdz dlg(0);
                    dlg.ShowModal();
            }else if (wybranyTemat == "Zawody") {
                Tematslowek = 4;

                // Zamknij bieżące okno dialogowe
                    this->EndModal(wxID_CANCEL);
                    // Otwórz nowe okno
                    Sprawdz dlg(0);
                    dlg.ShowModal();
            }else{
                wxMessageBox("Wybierz temat!", "");
        }


}

void Wybor::OnButton1Click(wxCommandEvent& event)
{
    // ustawia kierunek tlumaczenia Ang-Pol
    wybranyKierunek = 1;
}

void Wybor::OnButton2Click(wxCommandEvent& event)
{
    // ustawia kierunek tlumaczenia Pol-Ang
    wybranyKierunek = 2;
}




