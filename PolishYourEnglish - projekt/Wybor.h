#ifndef WYBOR_H
#define WYBOR_H

//(*Headers(Wybor)
#include <wx/button.h>
#include <wx/choice.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/spinctrl.h>
#include <wx/statline.h>
#include <wx/stattext.h>
//*)

class Wybor: public wxDialog
{
	public:

		Wybor(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Wybor();

		//(*Declarations(Wybor)
		wxButton* Button1;
		wxButton* Button2;
		wxButton* Button3;
		wxChoice* Choice1;
		wxSpinCtrl* SpinCtrl1;
		wxStaticLine* StaticLine1;
		wxStaticLine* StaticLine2;
		wxStaticLine* StaticLine3;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		//*)

	protected:

		//(*Identifiers(Wybor)
		static const long ID_STATICTEXT1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_STATICLINE1;
		static const long ID_STATICTEXT2;
		static const long ID_CHOICE1;
		static const long ID_STATICLINE2;
		static const long ID_STATICTEXT3;
		static const long ID_SPINCTRL1;
		static const long ID_STATICLINE3;
		static const long ID_BUTTON3;
		//*)

	private:

		//(*Handlers(Wybor)
		void OnButton3Click(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnChoice2Select(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
