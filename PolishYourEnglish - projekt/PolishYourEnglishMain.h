/***************************************************************
 * Name:      PolishYourEnglishMain.h
 * Purpose:   Defines Application Frame
 * Author:    Kamil i Bartek ()
 * Created:   2023-12-13
 * Copyright: Kamil i Bartek ()
 * License:
 **************************************************************/

#ifndef POLISHYOURENGLISHMAIN_H
#define POLISHYOURENGLISHMAIN_H

//(*Headers(PolishYourEnglishDialog)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/stattext.h>
//*)

class PolishYourEnglishDialog: public wxDialog
{
    public:

        PolishYourEnglishDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~PolishYourEnglishDialog();

    private:

        //(*Handlers(PolishYourEnglishDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton3Click(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(PolishYourEnglishDialog)
        static const long ID_STATICTEXT1;
        static const long ID_BUTTON1;
        static const long ID_STATICLINE1;
        static const long ID_BUTTON2;
        static const long ID_STATICLINE2;
        static const long ID_BUTTON3;
        //*)

        //(*Declarations(PolishYourEnglishDialog)
        wxButton* Button1;
        wxButton* Button2;
        wxButton* Button3;
        wxStaticLine* StaticLine1;
        wxStaticLine* StaticLine2;
        wxStaticText* StaticText1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // POLISHYOURENGLISHMAIN_H
