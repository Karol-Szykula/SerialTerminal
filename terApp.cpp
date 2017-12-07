/***************************************************************
 * Name:      terApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Karol Szykula (karol.szykula@gmail.com)
 * Created:   2017-11-30
 * Copyright: Karol Szykula ()
 * License:
 **************************************************************/

#include "terApp.h"

#ifdef _WIN32
    #include <winsock2.h> // include for boost::asio in asyncserial
#endif

//(*AppHeaders
#include "terMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(terApp);

bool terApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    terFrame* Frame = new terFrame(0);
    Frame->Show();
    SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
