#ifndef NOISERMAIN_H
#define NOISERMAIN_H

//(*Headers(NoiserFrame)
#include <wx/treectrl.h>
#include <wx/sizer.h>
#include <wx/radiobox.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/listbox.h>
#include <wx/bitmap.h>
#include <wx/statline.h>
#include <wx/panel.h>
#include <wx/statbmp.h>
#include <wx/button.h>
#include <wx/image.h>
#include <wx/frame.h>
#include <wx/gauge.h>
#include <wx/statusbr.h>
//*)

#include <wx/choicdlg.h>
#include <wx/image.h>
#include <wx/treectrl.h>
#include <wx/colour.h>
#include <wx/listimpl.cpp>
#include <wx/filedlg.h>
#include <wx/msgdlg.h>
#include <wx/timer.h>
#include <wx/colordlg.h>
#include <wx/xml/xml.h>

#include "noise/noise.h"
#include "noise/basictypes.h"
#include "noise/exception.h"
#include "noise/noisegen.h"
#include "noise/module/module.h"
#include "noise/module/modulebase.h"
#include "noiseutils.h"

#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <list>
#include <string>
#include <limits>

#define ID_UPDATETIMER 1500
#define AddModuleProperty(X) (NoiseTree->InsertItem(newChild, NoiseTree->GetChildrenCount(newChild), (X)) )

using namespace noise;
using namespace module;

class NoiserFrame: public wxFrame
{
    public:
        NoiserFrame(wxWindow* parent, wxWindowID id = -1);

        wxString projectName;
        unsigned int projectWidth;
        unsigned int projectHeight;
        float scope;
        bool isRendering;
        wxString renderAbort;
        wxTreeItemId rememberItem;
        wxTimer* updateTimer;
        bool requestUpdate;
        bool runOnce;
        wxArrayString logTreeStrings;
        wxString TerExportPath;
        wxString RawExportPath;
        wxString rememberImageSaveFilename;
        wxBitmapType imageType;
        wxString rememberSettingsSaveFilename;
        bool sizeReminder;

        void AddNoiseDialog(void);
        void RenderTexture(wxString requestType);
        void SaveSettingsToFile(wxString fileName);
        void SaveState(wxTreeItemId id, wxXmlNode* node);
        void LoadSettingsFromFile(wxString fileName);
        void LoadState(wxTreeItemId id, wxXmlNode* node);
        virtual ~NoiserFrame();
        void DeleteSelectedModule(void);
        void OnTimer(wxTimerEvent& event);
        void ZoomUpdate(void);

        double parseDouble(wxString setting);
        int parseInt(wxString setting, int minimum, int maximum);
        int parseQuality(wxString setting);
        int parseSourceModule(wxString setting);
        bool parseBool(wxString setting);
        std::vector<int> parseRGBA(wxString setting);
        bool parseProjectSet(wxString tag);
        std::vector<double> parseControlPoints(wxString setting, int minimum);

    private:

        //(*Handlers(NoiserFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnNoiseTreeItemRightClick(wxTreeEvent& event);
        void OnLeftUp(wxMouseEvent& event);
        void OnMenuItemSaveAsSelected(wxCommandEvent& event);
        void OnMenuItemOpenSelected(wxCommandEvent& event);
        void OnButtonRenderClick(wxCommandEvent& event);
        void OnNoiseTreeBeginLabelEdit(wxTreeEvent& event);
        void OnNoiseTreeKeyDown(wxTreeEvent& event);
        void OnMenuItemEditItemSelected(wxCommandEvent& event);
        void OnMenuItemAddNoiseModuleSelected(wxCommandEvent& event);
        void OnMenuItemDeleteModuleSelected(wxCommandEvent& event);
        void OnRadioBoxSurfaceSelect(wxCommandEvent& event);
        void OnNoiseTreeItemActivated(wxTreeEvent& event);
        void OnButtonColorRemoveClick(wxCommandEvent& event);
        void OnMenuItemEditAddModuleSelected(wxCommandEvent& event);
        void OnMenuItemEditDeleteModuleSelected(wxCommandEvent& event);
        void OnMenuItemRenderToNodeSelected(wxCommandEvent& event);
        void OnMouseEnter(wxMouseEvent& event);
        void OnMenuItemRenderNodeSelected(wxCommandEvent& event);
        void OnNoiseTreeKeyDownType(wxTreeEvent& event);
        void OnNoiseTreeEndLabelEdit(wxTreeEvent& event);
        void OnNoiseTreeSelectionChanged(wxTreeEvent& event);
        void OnButtonColorAddClick(wxCommandEvent& event);
        void OnListBoxColorsDoubleClick(wxCommandEvent& event);
        void OnCheckBoxSeamlessClick(wxCommandEvent& event);
        void OnMenuItemGrayscaleSelected(wxCommandEvent& event);
        void OnMenuItemNormalsSelected(wxCommandEvent& event);
        void OnMenuItemExportTerSelected(wxCommandEvent& event);
        void OnMenuItemExportRawSelected(wxCommandEvent& event);
        void OnMenuItemImageSaveAsSelected(wxCommandEvent& event);
        void OnMenuItemImageSaveSelected(wxCommandEvent& event);
        void OnMenuItemSaveSelected(wxCommandEvent& event);
        void OnMenuItemZoom14Selected(wxCommandEvent& event);
        void OnMenuItemZoom12Selected(wxCommandEvent& event);
        void OnMenuItemZoom11Selected(wxCommandEvent& event);
        void OnMenuItemZoom21Selected(wxCommandEvent& event);
        void OnMenuItemAutoRenderSelected(wxCommandEvent& event);
        void OnMenuItemSaveAsQuickSelected(wxCommandEvent& event);
        //*)

        //(*Identifiers(NoiserFrame)
        static const long ID_TREECTRL;
        static const long ID_STATICLINEDIV;
        static const long ID_LISTBOXCOLORS;
        static const long ID_TEXTCTRLCOLOR;
        static const long ID_BUTTONCOLORADD;
        static const long ID_BUTTONCOLORREMOVE;
        static const long ID_RADIOBOXSURFACE;
        static const long ID_CHECKBOXSEAM;
        static const long ID_PANEL2;
        static const long ID_STATICBITMAP;
        static const long ID_BUTTONRENDER;
        static const long ID_GAUGE;
        static const long ID_PANELSRC;
        static const long idMenuOpen;
        static const long idMenuSave;
        static const long idMenuSaveAs;
        static const long idMenuSaveImage;
        static const long idMenuSaveImageAs;
        static const long idMenuRenderToNode;
        static const long idMenuGrayscaleMap;
        static const long idMenuNormalMap;
        static const long idMenuWriteTer;
        static const long idMenuWriteRaw;
        static const long idMenuQuit;
        static const long idMenuAdd;
        static const long idMenuDelete;
        static const long idMenuAutoUpdate;
        static const long idMenuZoom4;
        static const long idMenuZoom3;
        static const long idMenuZoom2;
        static const long idMenuZoom1;
        static const long idMenuAbout;
        static const long ID_STATUSBAR;
        static const long idMenuAddModule;
        static const long idMenuDeleteModule;
        static const long idMenuEdit;
        static const long idMenuOpenQuick;
        static const long idMenuSaveQuick;
        static const long idMenuRender;
        static const long idMenuSaveAsQuick;
        //*)

        //(*Declarations(NoiserFrame)
        wxStaticBitmap* BitmapView;
        wxMenuItem* MenuItemEditItem;
        wxMenuItem* MenuItemAutoRender;
        wxCheckBox* CheckBoxSeamless;
        wxButton* ButtonColorRemove;
        wxMenuItem* MenuItemSave;
        wxTextCtrl* TextCtrlColorInput;
        wxMenuItem* MenuItemExportTer;
        wxMenuItem* MenuItemSaveAs;
        wxMenuItem* MenuItemExportRaw;
        wxRadioBox* RadioBoxSurface;
        wxMenuItem* MenuItemZoom11;
        wxStaticLine* StaticLineDivider;
        wxMenuItem* MenuItemZoom21;
        wxMenu* Menu3;
        wxButton* ButtonColorAdd;
        wxMenuItem* MenuItem11;
        wxMenuItem* MenuItem22;
        wxMenu* Menu1;
        wxGauge* RenderGauge;
        wxMenuItem* MenuItemOpen;
        wxBoxSizer* BoxSizerMain;
        wxMenuItem* MenuItemDeleteModule;
        wxMenuItem* MenuItemImageSave;
        wxButton* ButtonRender;
        wxMenuItem* MenuItemRenderNode;
        wxMenuItem* MenuItemAddNoiseModule;
        wxBoxSizer* BoxSizerHorizontal;
        wxMenuItem* MenuItem23;
        wxPanel* PanelRender;
        wxBoxSizer* BoxSizerMainHorizontal;
        wxMenuItem* MenuItemNormals;
        wxMenuItem* MenuItemZoom14;
        wxMenu MenuList;
        wxMenuItem* MenuItemZoom12;
        wxMenuItem* MenuItemRenderToNode;
        wxTreeCtrl* NoiseTree;
        wxBoxSizer* BoxSizerAll;
        wxListBox* ListBoxColors;
        wxPanel* PanelSrc;
        wxMenuItem* MenuItemGrayscale;
        wxMenuItem* MenuItem18;
        wxStatusBar* StatusBar;
        wxImage               *NoiseImage;
        wxBitmap              *NoiseImage_BMP;
        wxMenuItem* MenuItemSaveAsQuick;
        wxMenuBar* MenuBar;
        wxMenuItem* MenuItemImageSaveAs;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // NOISERMAIN_H
