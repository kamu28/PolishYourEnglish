#ifndef INSTRUKCJA_H
#define INSTRUKCJA_H

//(*Headers(Instrukcja)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/stattext.h>
//*)

class Instrukcja: public wxDialog
{
	public:

		Instrukcja(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Instrukcja();

		//(*Declarations(Instrukcja)
		wxButton* Button1;
		wxStaticLine* StaticLine1;
		wxStaticLine* StaticLine2;
		wxStaticLine* StaticLine3;
		wxStaticLine* StaticLine4;
		wxStaticText* StaticText10;
		wxStaticText* StaticText11;
		wxStaticText* StaticText12;
		wxStaticText* StaticText13;
		wxStaticText* StaticText14;
		wxStaticText* StaticText15;
		wxStaticText* StaticText16;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		wxStaticText* StaticText7;
		wxStaticText* StaticText8;
		wxStaticText* StaticText9;
		//*)

	protected:

		//(*Identifiers(Instrukcja)
		static const long ID_STATICTEXT1;
		static const long ID_STATICLINE1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT6;
		static const long ID_STATICTEXT7;
		static const long ID_STATICLINE2;
		static const long ID_STATICTEXT8;
		static const long ID_STATICTEXT9;
		static const long ID_STATICTEXT16;
		static const long ID_STATICTEXT10;
		static const long ID_STATICTEXT11;
		static const long ID_STATICTEXT12;
		static const long ID_STATICLINE3;
		static const long ID_STATICTEXT13;
		static const long ID_STATICTEXT14;
		static const long ID_STATICTEXT15;
		static const long ID_STATICLINE4;
		static const long ID_BUTTON1;
		//*)

	private:

		//(*Handlers(Instrukcja)
		void OnButton1Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
