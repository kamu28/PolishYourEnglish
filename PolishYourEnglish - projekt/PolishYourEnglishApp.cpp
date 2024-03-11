/***************************************************************
 * Name:      PolishYourEnglishApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Kamil i Bartek ()
 * Created:   2023-12-13
 * Copyright: Kamil i Bartek ()
 * License:
 **************************************************************/

#include "PolishYourEnglishApp.h"

//(*AppHeaders
#include "PolishYourEnglishMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(PolishYourEnglishApp);

bool PolishYourEnglishApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	PolishYourEnglishDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
