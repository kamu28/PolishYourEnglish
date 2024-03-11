#include "Sprawdz.h"
#include "Rezultat.h"
#include "Wybor.h"
#include <string>
#include <algorithm>
#include <wx/msgdlg.h>


wxDialog *oknosprawdz;

//(*InternalHeaders(Sprawdz)
#include <wx/intl.h>
#include <wx/string.h>
//*)

#undef _
#define _(s) wxString::FromUTF8 (s)

//(*IdInit(Sprawdz)
const long Sprawdz::ID_STATICTEXT1 = wxNewId();
const long Sprawdz::ID_TEXTCTRL1 = wxNewId();
const long Sprawdz::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Sprawdz,wxDialog)
	//(*EventTable(Sprawdz)
	//*)
END_EVENT_TABLE()

extern wxDialog* oknorezultat;
extern int wybranyKierunek;
extern int Tematslowek;
extern long Liczbaslowek;
extern wxStaticText* StaticText1;

int randomIndex;

//ile razy losujemy slowka
int Licznik;

//liczba punktów
int Punkty=0;

Sprawdz::Sprawdz(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Sprawdz)
	wxBoxSizer* BoxSizer1;
	wxFlexGridSizer* FlexGridSizer1;

	Create(parent, wxID_ANY, _("PolishYourEnglish"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxCLOSE_BOX, _T("wxID_ANY"));
	SetClientSize(wxSize(400,150));
	FlexGridSizer1 = new wxFlexGridSizer(3, 1, 0, 0);
	FlexGridSizer1->AddGrowableCol(0);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Słowo"), wxDefaultPosition, wxDefaultSize, wxST_NO_AUTORESIZE|wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
	StaticText1->SetMaxSize(wxSize(500,-1));
	BoxSizer1->Add(StaticText1, 1, wxALL|wxEXPAND, 5);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	BoxSizer1->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(BoxSizer1, 1, wxALL|wxEXPAND, 5);
	Button1 = new wxButton(this, ID_BUTTON1, _("OK"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	FlexGridSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	SetSizer(FlexGridSizer1);
	Layout();
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Sprawdz::OnButton1Click);
	//*)
	srand(static_cast<unsigned int>(time(nullptr)));


    std::string polish1[] = {
    "marchewka", "ziemniak", "cebula", "pomidor", "kapusta",
    "brokuł", "fasola", "pietruszka", "chrzan", "seler",
    "por", "kukurydza", "kalafior", "bakłażan", "ogórek",
    "szparagi", "dynia", "cukinia", "czosnek", "kurkuma",
    "szpinak", "papryka", "kalarepa", "burak", "rzodkiewka",
    "słonecznik", "róża", "banan", "jagoda", "truskawka",
    "malina", "aronia", "śliwka", "morela", "gruszka",
    "jabłko", "wiśnia", "ananas", "awokado", "sałata",
    "koperek", "melon", "bób", "szczypiorek","czereśnia",
    "karczoch", "jarmuż","arbuz","granat","grejpfrut"};

    std::string english1[] = {
    "carrot", "potato", "onion", "tomato", "cabbage",
    "broccoli", "bean", "parsnip", "horseradish", "celery",
    "leek", "corn", "cauliflower", "eggplant", "cucumber",
    "asparagus", "pumpkin", "zucchini", "garlic", "turmeric",
    "spinach", "pepper", "kohlrabi", "beetroot", "radish",
    "sunflower", "rose", "banana", "blueberry", "strawberry",
    "raspberry", "chokeberry", "plum", "apricot", "pear",
    "apple", "cherry", "pineapple", "avocado", "lettuce",
    "dill", "melon", "broad bean", "chive","cherry",
    "artichoke", "kale","watermelon","pomegranate","grapefruit"};

    std::string polish2[] = {
    "czerwony", "zielony", "niebieski", "żółty", "fioletowy",
    "różowy", "pomarańczowy", "brązowy", "szary", "biały",
    "czarny", "srebrny", "złoty", "fioletowy", "indygo",
    "turkusowy", "magenta", "turkusowy", "oliwkowy", "kasztanowy",
    "malinowy", "bursztynowy", "lawendowy", "antracytowy", "karmazynowy",
    "jagodowy", "miętowy", "musztardowy", "lazurowy", "cytrynowy",
    "granatowy", "fuksjowy", "orzechowy", "szmaragdowy", "chabrowy",
    "błękitny", "truskawkowy", "perłowy", "morski", "ciemnoniebieski",
    "fuksjowy", "wiśniowy", "kobaltowy", "amarantowy", "tytanowy",
    "hebanowy", "szafirowy", "kasztanowy", "siwobłękitny", "ochrowy"
    };

    std::string english2[] = {
    "red", "green", "blue", "yellow", "purple",
    "pink", "orange", "brown", "grey", "white",
    "black", "silver", "gold", "violet", "indigo",
    "turquoise", "magenta", "turquoise", "olive", "chestnut",
    "raspberry", "amber", "lavender", "anthracite", "crimson",
    "berry", "mint", "mustard", "azure", "lemon",
    "navy", "fuchsia", "walnut", "emerald", "cerulean",
    "cyan", "strawberry", "pearl", "marine", "dark-blue",
    "fuchsia", "cherry", "cobalt", "amaranth", "titanium",
    "ebony", "sapphire", "brownish", "grayish-blue", "ochre"};


    std::string polish3[] = {
    "komputer", "telefon", "książka", "zeszyt", "długopis",
    "laptop", "telewizor", "aparat", "klawiatura", "mysz",
    "okulary", "torba", "kalendarz", "biurko", "zeszytówka",
    "flamastry", "obraz", "krzesło", "poduszka", "szafa",
    "światło", "butelka", "okno", "drzwi", "kubek",
    "słuchawki", "portfel", "mapa", "globus", "dywan",
    "lampa", "łóżko", "księga", "lupa", "dźwięk",
    "klucz", "zegar", "telewizor", "aparat fotograficzny", "obrazek",
    "tablet", "stolik", "świeczka", "ręcznik", "łazienka",
    "sztućce", "widelec", "łyżka", "nożyczki", "kuchenka"
};

    std::string english3[] = {
    "computer", "phone", "book", "notebook", "pen",
    "laptop", "television", "camera", "keyboard", "mouse",
    "glasses", "bag", "calendar", "desk", "notebook",
    "markers", "picture", "chair", "pillow", "wardrobe",
    "light", "bottle", "window", "door", "cup",
    "headphones", "wallet", "map", "globe", "carpet",
    "lamp", "bed", "book", "magnifying glass", "sound",
    "key", "clock", "television", "camera", "picture",
    "tablet", "table", "candle", "towel", "bathroom",
    "cutlery", "fork", "spoon", "scissors", "stove"
};

    std::string polish4[] = {
    "lekarz", "nauczyciel", "inżynier", "kelner", "programista",
    "psycholog", "dziennikarz", "mechanik", "architekt", "artysta",
    "fotograf", "piłkarz", "aktor", "muzyk", "kucharz",
    "prawnik", "strażak", "piekarz", "policjant", "ogrodnik",
    "księgowy", "listonosz", "florysta", "dostawca", "kierowca",
    "elektryk", "dyrektor", "barman", "tłumacz", "konsultant",
    "fryzjer", "sprzątacz", "dyplomata", "geodeta", "rybak",
    "sportowiec", "reżyser", "operator", "ratownik", "pielegniarz",
    "tancerz", "spawacz", "eksplorator", "rolnik", "astronauta",
    "stewardesa", "listonosz", "projektant", "socjolog","chemik"
};


    std::string english4[] = {
    "doctor", "teacher", "engineer", "waiter", "programmer",
    "psychologist", "journalist", "mechanic", "architect", "artist",
    "photographer", "footballer", "actor", "musician", "chef",
    "lawyer", "firefighter", "baker", "police-officer", "gardener",
    "accountant", "postman", "florist", "delivery-person", "driver",
    "electrician", "director", "bartender", "translator", "consultant",
    "hairdresser", "cleaner", "diplomat", "surveyor", "fisherman",
    "athlete", "director", "operator", "lifeguard", "nurse",
    "dancer", "welder", "explorer", "farmer", "astronaut",
    "flight attendant", "postman", "designer", "sociologist","chemist"
    };

 //Stworznie konstruktora
        if(Tematslowek==1){
            translator = new Translator(polish1, english1, 50);
        } else if(Tematslowek==2){
            translator = new Translator(polish2, english2, 50);
        } else if(Tematslowek==3){
            translator = new Translator(polish3, english3, 50);
        } else if(Tematslowek==4){
            translator = new Translator(polish4, english4, 50);
        }

        //ustawianie pierwszego słówka do translacji
    randomIndex = rand() % 50;


    switch (wybranyKierunek) {
        case 1:
            StaticText1->SetLabel(wxString::FromUTF8(translator->GetSlowoAng(randomIndex).c_str()));
            break;
        case 2:
            StaticText1->SetLabel(wxString::FromUTF8(translator->GetSlowoPol(randomIndex).c_str()));
            break;
    }
    Licznik=1;
    SetIcon(wxICON(aaaa));


}



Sprawdz::~Sprawdz()
{
	//(*Destroy(Sprawdz)
	//*)
	if (translator != nullptr)
        delete translator;
}


void Sprawdz::OnButton1Click(wxCommandEvent& event)
{
    wxString tekst = TextCtrl1->GetValue();

switch (wybranyKierunek) {
    case 1: {
        // Kod dla case 1

        wxMBConvUTF8 converter;
        wxWCharBuffer wbuf = converter.cMB2WC(tekst.ToUTF8());
        wxString tekstZPolskimiZnakami(wbuf);

        // Dzięki temu możemy porównać polskie znaki
        wxString slowoDoPorownania = wxString::FromUTF8(translator->GetSlowoPol(randomIndex).c_str());

        // Usuwanie spacji ze słowa podanego przez użytkownika
        tekstZPolskimiZnakami.Replace(" ", "", true);
        tekstZPolskimiZnakami.MakeLower();

        // Sprawdzenie czy uzytkownik dobrze przetlumaczyl
        if (tekstZPolskimiZnakami == slowoDoPorownania) {
            wxMessageBox(wxString::FromUTF8("Poprawna odpowiedź! Zdobywasz punkt!"), wxT(""), wxOK | wxICON_INFORMATION, this);
            Punkty++;
        } else {
            wxMessageBox(wxString::Format(wxT("Niepoprawna odpowiedź! Prawidłowa odpowiedź to: %s"), wxString::FromUTF8(translator->GetSlowoPol(randomIndex).c_str())), wxT("Błąd"), wxOK | wxICON_ERROR, this);
        }

        // Inkrementacja Licznik i sprawdzenie warunku
        Licznik++;

        break;
    }
    case 2: {
        // Kod dla case 2

        std::string tekstStd = std::string(tekst.ToStdString());

        // Usuwanie spacji ze slowa podanego przez uzytkownika
        tekstStd.erase(std::remove_if(tekstStd.begin(), tekstStd.end(), ::isspace), tekstStd.end());

        // Zamień tekstStd na małe litery
        std::transform(tekstStd.begin(), tekstStd.end(), tekstStd.begin(),
            [](unsigned char c) { return std::tolower(c); });

        if (tekstStd == translator->GetSlowoAng(randomIndex)) {
            wxMessageBox(wxString::FromUTF8("Poprawna odpowiedź! Zdobywasz punkt!"), wxT(""), wxOK | wxICON_INFORMATION, this);
            Punkty++;
        } else {
            wxMessageBox(wxString::Format(wxT("Niepoprawna odpowiedź! Prawidłowa odpowiedź to: %s"), wxString::FromUTF8(translator->GetSlowoAng(randomIndex).c_str())), wxT("Błąd"), wxOK | wxICON_ERROR, this);
        }

        // Inkrementacja Licznik i sprawdzenie warunku
        Licznik++;

        break;
    }
}

// Warunek poza instrukcją switch
if (Licznik <= Liczbaslowek) {
    // Wspólny kod dla obu przypadków
    randomIndex = rand() % 50;

    switch(wybranyKierunek){
case 1:
        StaticText1->SetWindowStyle(wxALIGN_CENTRE | wxST_NO_AUTORESIZE);
    StaticText1->SetLabel(wxString::FromUTF8(translator->GetSlowoAng(randomIndex).c_str()));
    StaticText1->SetWindowStyle(wxALIGN_CENTRE | wxST_NO_AUTORESIZE);

    // Czyszczenie miejsca do wpisania
    TextCtrl1->SetValue("");

    break;
case 2:
        StaticText1->SetWindowStyle(wxALIGN_CENTRE | wxST_NO_AUTORESIZE);
    StaticText1->SetLabel(wxString::FromUTF8(translator->GetSlowoPol(randomIndex).c_str()));
    StaticText1->SetWindowStyle(wxALIGN_CENTRE | wxST_NO_AUTORESIZE);

    // Czyszczenie miejsca do wpisania
    TextCtrl1->SetValue("");
    }

} else {
    // Zamknij bieżące okno dialogowe
    this->EndModal(wxID_CANCEL);

    // Otwórz nowe okno
    Rezultat dlg(0);
    dlg.Center();
    dlg.ShowModal();
}
}
