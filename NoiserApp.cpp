#include "NoiserApp.h"

//(*AppHeaders
#include "NoiserMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(NoiserApp);

bool NoiserApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	NoiserFrame* Frame = new NoiserFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;
}
