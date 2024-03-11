#ifndef SPRAWDZ_H
#define SPRAWDZ_H

#include "Translate.h"

//(*Headers(Sprawdz)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class Sprawdz: public wxDialog
{
	public:

		Sprawdz(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Sprawdz();

		int GetUniqueRandomIndex(int category);

		//(*Declarations(Sprawdz)
		wxButton* Button1;
		wxStaticText* StaticText1;
		wxTextCtrl* TextCtrl1;
		//*)

	protected:

		//(*Identifiers(Sprawdz)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_BUTTON1;
		//*)

	private:

		//(*Handlers(Sprawdz)
		void OnButton1Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
		Translator * translator;

};

#endif
