#ifndef REZULTAT_H
#define REZULTAT_H

//(*Headers(Rezultat)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
//*)

class Rezultat: public wxDialog
{
	public:

		Rezultat(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Rezultat();

		//(*Declarations(Rezultat)
		wxButton* Button1;
		wxButton* Button2;
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(Rezultat)
		static const long ID_STATICTEXT1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		//*)

	private:

		//(*Handlers(Rezultat)
		void OnButton1Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
