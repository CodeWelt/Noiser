#ifndef NOISERAPP_H
#define NOISERAPP_H
#define WX_CPU_AMD64
#include <wx/app.h>

class NoiserApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // NOISERAPP_H
