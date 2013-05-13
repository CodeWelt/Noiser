#include "NoiserMain.h"

//(*InternalHeaders(NoiserFrame)
#include <wx/artprov.h>
#include <wx/icon.h>
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(NoiserFrame)
const long NoiserFrame::ID_TREECTRL = wxNewId();
const long NoiserFrame::ID_STATICLINEDIV = wxNewId();
const long NoiserFrame::ID_LISTBOXCOLORS = wxNewId();
const long NoiserFrame::ID_TEXTCTRLCOLOR = wxNewId();
const long NoiserFrame::ID_BUTTONCOLORADD = wxNewId();
const long NoiserFrame::ID_BUTTONCOLORREMOVE = wxNewId();
const long NoiserFrame::ID_RADIOBOXSURFACE = wxNewId();
const long NoiserFrame::ID_CHECKBOXSEAM = wxNewId();
const long NoiserFrame::ID_PANEL2 = wxNewId();
const long NoiserFrame::ID_STATICBITMAP = wxNewId();
const long NoiserFrame::ID_BUTTONRENDER = wxNewId();
const long NoiserFrame::ID_GAUGE = wxNewId();
const long NoiserFrame::ID_PANELSRC = wxNewId();
const long NoiserFrame::idMenuOpen = wxNewId();
const long NoiserFrame::idMenuSave = wxNewId();
const long NoiserFrame::idMenuSaveAs = wxNewId();
const long NoiserFrame::idMenuSaveImage = wxNewId();
const long NoiserFrame::idMenuSaveImageAs = wxNewId();
const long NoiserFrame::idMenuRenderToNode = wxNewId();
const long NoiserFrame::idMenuGrayscaleMap = wxNewId();
const long NoiserFrame::idMenuNormalMap = wxNewId();
const long NoiserFrame::idMenuWriteTer = wxNewId();
const long NoiserFrame::idMenuWriteRaw = wxNewId();
const long NoiserFrame::idMenuQuit = wxNewId();
const long NoiserFrame::idMenuAdd = wxNewId();
const long NoiserFrame::idMenuDelete = wxNewId();
const long NoiserFrame::idMenuAutoUpdate = wxNewId();
const long NoiserFrame::idMenuZoom4 = wxNewId();
const long NoiserFrame::idMenuZoom3 = wxNewId();
const long NoiserFrame::idMenuZoom2 = wxNewId();
const long NoiserFrame::idMenuZoom1 = wxNewId();
const long NoiserFrame::idMenuAbout = wxNewId();
const long NoiserFrame::ID_STATUSBAR = wxNewId();
const long NoiserFrame::idMenuAddModule = wxNewId();
const long NoiserFrame::idMenuDeleteModule = wxNewId();
const long NoiserFrame::idMenuEdit = wxNewId();
const long NoiserFrame::idMenuOpenQuick = wxNewId();
const long NoiserFrame::idMenuSaveQuick = wxNewId();
const long NoiserFrame::idMenuRender = wxNewId();
const long NoiserFrame::idMenuSaveAsQuick = wxNewId();
//*)

BEGIN_EVENT_TABLE(NoiserFrame,wxFrame)
    //(*EventTable(NoiserFrame)
    //*)
END_EVENT_TABLE()

NoiserFrame::NoiserFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(NoiserFrame)
    wxMenuItem* MenuItem2;
    wxStaticBoxSizer* StaticBoxSizerRender;
    wxMenuItem* MenuItem1;
    wxBoxSizer* BoxSizerVertical;
    wxBoxSizer* BoxSizerGauge;
    wxMenu* Menu;
    wxBoxSizer* BoxSizer1;
    wxMenu* Menu2;
    wxBoxSizer* BoxSizerColorControl;

    Create(parent, wxID_ANY, _("Noiser"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE|wxFULL_REPAINT_ON_RESIZE, _T("wxID_ANY"));
    {
    	wxIcon FrameIcon;
    	FrameIcon.CopyFromBitmap(wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_MISSING_IMAGE")),wxART_FRAME_ICON));
    	SetIcon(FrameIcon);
    }
    BoxSizerVertical = new wxBoxSizer(wxVERTICAL);
    PanelSrc = new wxPanel(this, ID_PANELSRC, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANELSRC"));
    BoxSizerHorizontal = new wxBoxSizer(wxHORIZONTAL);
    BoxSizerAll = new wxBoxSizer(wxVERTICAL);
    BoxSizerMainHorizontal = new wxBoxSizer(wxHORIZONTAL);
    BoxSizerMain = new wxBoxSizer(wxVERTICAL);
    NoiseTree = new wxTreeCtrl(PanelSrc, ID_TREECTRL, wxDefaultPosition, wxDefaultSize, wxTR_EDIT_LABELS|wxTR_DEFAULT_STYLE, wxDefaultValidator, _T("ID_TREECTRL"));
    wxTreeItemId NoiseTree_Item1 = NoiseTree->AddRoot(_T("Project Default 512x512"));
    NoiseTree->SetItemTextColour(NoiseTree_Item1, wxColour(0,0,255));
    NoiseTree->SetItemBold(NoiseTree_Item1, true);
    wxTreeItemId NoiseTree_Item2 = NoiseTree->AppendItem(NoiseTree_Item1, _T("Modules"));
    NoiseTree->SetItemBold(NoiseTree_Item2, true);
    wxTreeItemId NoiseTree_Item3 = NoiseTree->AppendItem(NoiseTree_Item2, _T("Perlin"));
    NoiseTree->SetItemBold(NoiseTree_Item3, true);
    wxTreeItemId NoiseTree_Item4 = NoiseTree->AppendItem(NoiseTree_Item3, _T("Frequency=1.0"));
    wxTreeItemId NoiseTree_Item5 = NoiseTree->AppendItem(NoiseTree_Item3, _T("Lacunarity=2.0"));
    wxTreeItemId NoiseTree_Item6 = NoiseTree->AppendItem(NoiseTree_Item3, _T("OctaveCount=6"));
    wxTreeItemId NoiseTree_Item7 = NoiseTree->AppendItem(NoiseTree_Item3, _T("Persistence=0.5"));
    wxTreeItemId NoiseTree_Item8 = NoiseTree->AppendItem(NoiseTree_Item3, _T("Quality=QUALITY_BEST"));
    wxTreeItemId NoiseTree_Item9 = NoiseTree->AppendItem(NoiseTree_Item3, _T("Seed=0"));
    wxTreeItemId NoiseTree_Item10 = NoiseTree->AppendItem(NoiseTree_Item1, _T("Renderer"));
    NoiseTree->SetItemBold(NoiseTree_Item10, true);
    wxTreeItemId NoiseTree_Item11 = NoiseTree->AppendItem(NoiseTree_Item10, _T("LightAzimuth=45.0"));
    wxTreeItemId NoiseTree_Item12 = NoiseTree->AppendItem(NoiseTree_Item10, _T("LightBrightness=1.0"));
    wxTreeItemId NoiseTree_Item13 = NoiseTree->AppendItem(NoiseTree_Item10, _T("LightColor=rgba(255,255,255,0)"));
    wxTreeItemId NoiseTree_Item14 = NoiseTree->AppendItem(NoiseTree_Item10, _T("LightContrast=1.0"));
    wxTreeItemId NoiseTree_Item15 = NoiseTree->AppendItem(NoiseTree_Item10, _T("LightElev=45.0"));
    wxTreeItemId NoiseTree_Item16 = NoiseTree->AppendItem(NoiseTree_Item10, _T("LightIntensity=1.0"));
    wxTreeItemId NoiseTree_Item17 = NoiseTree->AppendItem(NoiseTree_Item10, _T("PlanarTexture"));
    NoiseTree->SetItemBold(NoiseTree_Item17, true);
    wxTreeItemId NoiseTree_Item18 = NoiseTree->AppendItem(NoiseTree_Item17, _T("EnableSeamless=false"));
    wxTreeItemId NoiseTree_Item19 = NoiseTree->AppendItem(NoiseTree_Item17, _T("LowerXBound=-1.0"));
    wxTreeItemId NoiseTree_Item20 = NoiseTree->AppendItem(NoiseTree_Item17, _T("UpperXBound=1.0"));
    wxTreeItemId NoiseTree_Item21 = NoiseTree->AppendItem(NoiseTree_Item17, _T("LowerZBound=-1.0"));
    wxTreeItemId NoiseTree_Item22 = NoiseTree->AppendItem(NoiseTree_Item17, _T("UpperZBound=1.0"));
    wxTreeItemId NoiseTree_Item23 = NoiseTree->AppendItem(NoiseTree_Item10, _T("SphericalTexture"));
    NoiseTree->SetItemBold(NoiseTree_Item23, true);
    wxTreeItemId NoiseTree_Item24 = NoiseTree->AppendItem(NoiseTree_Item23, _T("SouthLatBound=-90.0"));
    wxTreeItemId NoiseTree_Item25 = NoiseTree->AppendItem(NoiseTree_Item23, _T("NorthLatBound=90.0"));
    wxTreeItemId NoiseTree_Item26 = NoiseTree->AppendItem(NoiseTree_Item23, _T("WestLonBound=-180.0"));
    wxTreeItemId NoiseTree_Item27 = NoiseTree->AppendItem(NoiseTree_Item23, _T("EastLonBound=180.0"));
    wxTreeItemId NoiseTree_Item28 = NoiseTree->AppendItem(NoiseTree_Item10, _T("CylindricalTexture"));
    NoiseTree->SetItemBold(NoiseTree_Item28, true);
    wxTreeItemId NoiseTree_Item29 = NoiseTree->AppendItem(NoiseTree_Item28, _T("LowerAngleBound=-180.0"));
    wxTreeItemId NoiseTree_Item30 = NoiseTree->AppendItem(NoiseTree_Item28, _T("UpperAngleBound=180.0"));
    wxTreeItemId NoiseTree_Item31 = NoiseTree->AppendItem(NoiseTree_Item28, _T("LowerHeightBound=-10.0"));
    wxTreeItemId NoiseTree_Item32 = NoiseTree->AppendItem(NoiseTree_Item28, _T("UpperHeightBound=10.0"));
    NoiseTree->ScrollTo(NoiseTree_Item2);
    NoiseTree->SetMinSize(wxSize(350,-1));
    BoxSizerMain->Add(NoiseTree, 1, wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticLineDivider = new wxStaticLine(PanelSrc, ID_STATICLINEDIV, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINEDIV"));
    BoxSizerMain->Add(StaticLineDivider, 0, wxTOP|wxBOTTOM|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    PanelRender = new wxPanel(PanelSrc, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
    StaticBoxSizerRender = new wxStaticBoxSizer(wxVERTICAL, PanelRender, _("Render Colors && Surface Settings"));
    ListBoxColors = new wxListBox(PanelRender, ID_LISTBOXCOLORS, wxDefaultPosition, wxSize(350,83), 0, 0, 0, wxDefaultValidator, _T("ID_LISTBOXCOLORS"));
    ListBoxColors->Append(_("-1.0=rgba(255,255,255,255)"));
    ListBoxColors->Append(_("1.0=rgba(0,0,0,255)"));
    ListBoxColors->SetToolTip(_("Doubleclick an item to pick RGB values."));
    StaticBoxSizerRender->Add(ListBoxColors, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizerColorControl = new wxBoxSizer(wxHORIZONTAL);
    TextCtrlColorInput = new wxTextCtrl(PanelRender, ID_TEXTCTRLCOLOR, _("0.0=rgba(128,128,128,255)"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRLCOLOR"));
    BoxSizerColorControl->Add(TextCtrlColorInput, 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    ButtonColorAdd = new wxButton(PanelRender, ID_BUTTONCOLORADD, _("Add Point"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTONCOLORADD"));
    BoxSizerColorControl->Add(ButtonColorAdd, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    ButtonColorRemove = new wxButton(PanelRender, ID_BUTTONCOLORREMOVE, _("Remove"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTONCOLORREMOVE"));
    BoxSizerColorControl->Add(ButtonColorRemove, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBoxSizerRender->Add(BoxSizerColorControl, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    wxString __wxRadioBoxChoices_1[3] =
    {
    	_("Plane"),
    	_("Cylinder"),
    	_("Sphere")
    };
    RadioBoxSurface = new wxRadioBox(PanelRender, ID_RADIOBOXSURFACE, _("Select Render Surface"), wxDefaultPosition, wxDefaultSize, 3, __wxRadioBoxChoices_1, 3, 0, wxDefaultValidator, _T("ID_RADIOBOXSURFACE"));
    RadioBoxSurface->SetSelection(0);
    BoxSizer1->Add(RadioBoxSurface, 0, wxALIGN_CENTER_HORIZONTAL, 5);
    CheckBoxSeamless = new wxCheckBox(PanelRender, ID_CHECKBOXSEAM, _("Seamless"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOXSEAM"));
    CheckBoxSeamless->SetValue(false);
    CheckBoxSeamless->SetToolTip(_("Output a tileable planar texture."));
    BoxSizer1->Add(CheckBoxSeamless, 1, wxTOP|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 13);
    StaticBoxSizerRender->Add(BoxSizer1, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5);
    PanelRender->SetSizer(StaticBoxSizerRender);
    StaticBoxSizerRender->Fit(PanelRender);
    StaticBoxSizerRender->SetSizeHints(PanelRender);
    BoxSizerMain->Add(PanelRender, 0, wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5);
    BoxSizerMainHorizontal->Add(BoxSizerMain, 0, wxEXPAND|wxALIGN_LEFT|wxALIGN_TOP, 0);
    BitmapView = new wxStaticBitmap(PanelSrc, ID_STATICBITMAP, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER|wxFULL_REPAINT_ON_RESIZE, _T("ID_STATICBITMAP"));
    BitmapView->SetMinSize(wxSize(512,512));
    BitmapView->SetMaxSize(wxSize(512,512));
    BoxSizerMainHorizontal->Add(BitmapView, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_TOP, 1);
    BoxSizerAll->Add(BoxSizerMainHorizontal, 1, wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_LEFT|wxALIGN_TOP, 5);
    BoxSizerGauge = new wxBoxSizer(wxHORIZONTAL);
    ButtonRender = new wxButton(PanelSrc, ID_BUTTONRENDER, _("Render Selected Node"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTONRENDER"));
    ButtonRender->SetMinSize(wxSize(350,-1));
    wxFont ButtonRenderFont(10,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
    ButtonRender->SetFont(ButtonRenderFont);
    BoxSizerGauge->Add(ButtonRender, 0, wxTOP|wxBOTTOM|wxLEFT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    RenderGauge = new wxGauge(PanelSrc, ID_GAUGE, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_GAUGE"));
    BoxSizerGauge->Add(RenderGauge, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizerAll->Add(BoxSizerGauge, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizerHorizontal->Add(BoxSizerAll, 1, wxEXPAND|wxALIGN_LEFT|wxALIGN_TOP, 5);
    PanelSrc->SetSizer(BoxSizerHorizontal);
    BoxSizerHorizontal->Fit(PanelSrc);
    BoxSizerHorizontal->SetSizeHints(PanelSrc);
    BoxSizerVertical->Add(PanelSrc, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(BoxSizerVertical);
    MenuBar = new wxMenuBar();
    Menu = new wxMenu();
    MenuItemOpen = new wxMenuItem(Menu, idMenuOpen, _("&Open Settings\tCtrl+O"), wxEmptyString, wxITEM_NORMAL);
    Menu->Append(MenuItemOpen);
    MenuItemSave = new wxMenuItem(Menu, idMenuSave, _("&Save Settings\tCtrl+S"), wxEmptyString, wxITEM_NORMAL);
    Menu->Append(MenuItemSave);
    MenuItemSaveAs = new wxMenuItem(Menu, idMenuSaveAs, _("S&ave Settings As...\tCtrl+A"), wxEmptyString, wxITEM_NORMAL);
    Menu->Append(MenuItemSaveAs);
    Menu->AppendSeparator();
    MenuItemImageSave = new wxMenuItem(Menu, idMenuSaveImage, _("Save Rendered &Image\tAlt+S"), wxEmptyString, wxITEM_NORMAL);
    Menu->Append(MenuItemImageSave);
    MenuItemImageSaveAs = new wxMenuItem(Menu, idMenuSaveImageAs, _("Save Rendered I&mage As...\tAlt+A"), wxEmptyString, wxITEM_NORMAL);
    Menu->Append(MenuItemImageSaveAs);
    Menu->AppendSeparator();
    MenuItemRenderNode = new wxMenuItem(Menu, idMenuRenderToNode, _("&Render Selected Node\tF5"), wxEmptyString, wxITEM_NORMAL);
    Menu->Append(MenuItemRenderNode);
    MenuItemGrayscale = new wxMenuItem(Menu, idMenuGrayscaleMap, _("Render &Grayscale Map"), wxEmptyString, wxITEM_NORMAL);
    Menu->Append(MenuItemGrayscale);
    MenuItemNormals = new wxMenuItem(Menu, idMenuNormalMap, _("Render &Normal Map"), wxEmptyString, wxITEM_NORMAL);
    Menu->Append(MenuItemNormals);
    MenuItemExportTer = new wxMenuItem(Menu, idMenuWriteTer, _("Export &TerraGen Terrain File..."), wxEmptyString, wxITEM_NORMAL);
    Menu->Append(MenuItemExportTer);
    MenuItemExportRaw = new wxMenuItem(Menu, idMenuWriteRaw, _("Export Raw &Heightfield File..."), wxEmptyString, wxITEM_NORMAL);
    Menu->Append(MenuItemExportRaw);
    Menu->AppendSeparator();
    MenuItem1 = new wxMenuItem(Menu, idMenuQuit, _("&Quit\tAlt-F4"), wxEmptyString, wxITEM_NORMAL);
    Menu->Append(MenuItem1);
    MenuBar->Append(Menu, _("&File"));
    Menu3 = new wxMenu();
    MenuItem18 = new wxMenuItem(Menu3, idMenuAdd, _("Add Noise &Module\tCtrl+M"), wxEmptyString, wxITEM_NORMAL);
    Menu3->Append(MenuItem18);
    MenuItem11 = new wxMenuItem(Menu3, idMenuDelete, _("&Delete Noise Module\tCtrl+R"), wxEmptyString, wxITEM_NORMAL);
    Menu3->Append(MenuItem11);
    MenuBar->Append(Menu3, _("&Edit"));
    Menu1 = new wxMenu();
    MenuItemAutoRender = new wxMenuItem(Menu1, idMenuAutoUpdate, _("Auto Render\tF6"), wxEmptyString, wxITEM_CHECK);
    Menu1->Append(MenuItemAutoRender);
    MenuItemAutoRender->Check(true);
    Menu1->AppendSeparator();
    MenuItemZoom14 = new wxMenuItem(Menu1, idMenuZoom4, _("Zoom 1:&4\tAlt+4"), wxEmptyString, wxITEM_NORMAL);
    Menu1->Append(MenuItemZoom14);
    MenuItemZoom12 = new wxMenuItem(Menu1, idMenuZoom3, _("Zoom 1:&2\tAlt+3"), wxEmptyString, wxITEM_NORMAL);
    Menu1->Append(MenuItemZoom12);
    MenuItemZoom11 = new wxMenuItem(Menu1, idMenuZoom2, _("Zoom 1:&1\tAlt+2"), wxEmptyString, wxITEM_NORMAL);
    Menu1->Append(MenuItemZoom11);
    MenuItemZoom21 = new wxMenuItem(Menu1, idMenuZoom1, _("&Zoom 2:1\tAlt+1"), wxEmptyString, wxITEM_NORMAL);
    Menu1->Append(MenuItemZoom21);
    MenuBar->Append(Menu1, _("&View"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About Noiser\tF1"), wxEmptyString, wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar->Append(Menu2, _("About"));
    SetMenuBar(MenuBar);
    StatusBar = new wxStatusBar(this, ID_STATUSBAR, 0, _T("ID_STATUSBAR"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar);
    NoiseImage = new wxImage();
    NoiseImage_BMP = new wxBitmap();
    MenuItemAddNoiseModule = new wxMenuItem((&MenuList), idMenuAddModule, _("&Add Noise Module"), wxEmptyString, wxITEM_NORMAL);
    MenuList.Append(MenuItemAddNoiseModule);
    MenuItemDeleteModule = new wxMenuItem((&MenuList), idMenuDeleteModule, _("&Delete Module"), wxEmptyString, wxITEM_NORMAL);
    MenuList.Append(MenuItemDeleteModule);
    MenuItemEditItem = new wxMenuItem((&MenuList), idMenuEdit, _("&Edit Item"), wxEmptyString, wxITEM_NORMAL);
    MenuList.Append(MenuItemEditItem);
    MenuList.AppendSeparator();
    MenuItem22 = new wxMenuItem((&MenuList), idMenuOpenQuick, _("&Open Settings"), wxEmptyString, wxITEM_NORMAL);
    MenuList.Append(MenuItem22);
    MenuItem23 = new wxMenuItem((&MenuList), idMenuSaveQuick, _("&Save Settings"), wxEmptyString, wxITEM_NORMAL);
    MenuList.Append(MenuItem23);
    MenuList.AppendSeparator();
    MenuItemRenderToNode = new wxMenuItem((&MenuList), idMenuRender, _("&Render to Node"), wxEmptyString, wxITEM_NORMAL);
    MenuList.Append(MenuItemRenderToNode);
    MenuItemSaveAsQuick = new wxMenuItem((&MenuList), idMenuSaveAsQuick, _("Save Rendered I&mage As..."), wxEmptyString, wxITEM_NORMAL);
    MenuList.Append(MenuItemSaveAsQuick);
    BoxSizerVertical->Fit(this);
    BoxSizerVertical->SetSizeHints(this);

    Connect(ID_TREECTRL,wxEVT_COMMAND_TREE_BEGIN_LABEL_EDIT,(wxObjectEventFunction)&NoiserFrame::OnNoiseTreeBeginLabelEdit);
    Connect(ID_TREECTRL,wxEVT_COMMAND_TREE_END_LABEL_EDIT,(wxObjectEventFunction)&NoiserFrame::OnNoiseTreeEndLabelEdit);
    Connect(ID_TREECTRL,wxEVT_COMMAND_TREE_SEL_CHANGED,(wxObjectEventFunction)&NoiserFrame::OnNoiseTreeSelectionChanged);
    Connect(ID_TREECTRL,wxEVT_COMMAND_TREE_KEY_DOWN,(wxObjectEventFunction)&NoiserFrame::OnNoiseTreeKeyDownType);
    Connect(ID_TREECTRL,wxEVT_COMMAND_TREE_ITEM_MENU,(wxObjectEventFunction)&NoiserFrame::OnNoiseTreeItemRightClick);
    Connect(ID_LISTBOXCOLORS,wxEVT_COMMAND_LISTBOX_DOUBLECLICKED,(wxObjectEventFunction)&NoiserFrame::OnListBoxColorsDoubleClick);
    Connect(ID_BUTTONCOLORADD,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NoiserFrame::OnButtonColorAddClick);
    Connect(ID_BUTTONCOLORREMOVE,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NoiserFrame::OnButtonColorRemoveClick);
    Connect(ID_RADIOBOXSURFACE,wxEVT_COMMAND_RADIOBOX_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnRadioBoxSurfaceSelect);
    Connect(ID_CHECKBOXSEAM,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&NoiserFrame::OnCheckBoxSeamlessClick);
    Connect(ID_BUTTONRENDER,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NoiserFrame::OnButtonRenderClick);
    Connect(idMenuOpen,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnMenuItemOpenSelected);
    Connect(idMenuSave,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnMenuItemSaveSelected);
    Connect(idMenuSaveAs,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnMenuItemSaveAsSelected);
    Connect(idMenuSaveImage,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnMenuItemImageSaveSelected);
    Connect(idMenuSaveImageAs,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnMenuItemImageSaveAsSelected);
    Connect(idMenuRenderToNode,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnMenuItemRenderNodeSelected);
    Connect(idMenuGrayscaleMap,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnMenuItemGrayscaleSelected);
    Connect(idMenuNormalMap,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnMenuItemNormalsSelected);
    Connect(idMenuWriteTer,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnMenuItemExportTerSelected);
    Connect(idMenuWriteRaw,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnMenuItemExportRawSelected);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnQuit);
    Connect(idMenuAdd,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnMenuItemEditAddModuleSelected);
    Connect(idMenuDelete,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnMenuItemEditDeleteModuleSelected);
    Connect(idMenuAutoUpdate,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnMenuItemAutoRenderSelected);
    Connect(idMenuZoom4,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnMenuItemZoom14Selected);
    Connect(idMenuZoom3,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnMenuItemZoom12Selected);
    Connect(idMenuZoom2,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnMenuItemZoom11Selected);
    Connect(idMenuZoom1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnMenuItemZoom21Selected);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnAbout);
    Connect(idMenuAddModule,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnMenuItemAddNoiseModuleSelected);
    Connect(idMenuDeleteModule,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnMenuItemDeleteModuleSelected);
    Connect(idMenuEdit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnMenuItemEditItemSelected);
    Connect(idMenuOpenQuick,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnMenuItemOpenSelected);
    Connect(idMenuSaveQuick,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnMenuItemSaveAsSelected);
    Connect(idMenuRender,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnMenuItemRenderToNodeSelected);
    Connect(idMenuSaveAsQuick,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&NoiserFrame::OnMenuItemSaveAsQuickSelected);
    //*)

    wxInitAllImageHandlers();

    // Init vars
    projectName = _("Default");
    projectWidth = 512;
    projectHeight = 512;
    scope = 1.0f;
    isRendering = false;
    requestUpdate = false;
    runOnce = true;
    TerExportPath = _("");
    RawExportPath = _("");
    rememberImageSaveFilename = wxEmptyString;
    imageType = wxBITMAP_TYPE_BMP;
    rememberSettingsSaveFilename = wxEmptyString;
    sizeReminder = true;

    updateTimer = new wxTimer(this, ID_UPDATETIMER);
    updateTimer->Start(2000);
    Connect(ID_UPDATETIMER, wxEVT_TIMER, (wxObjectEventFunction)&NoiserFrame::OnTimer, NULL, this);

    wxTreeItemId root = NoiseTree->GetRootItem();
    NoiseTree->CollapseAll();
    wxTreeItemIdValue cookie;
    wxTreeItemId moduleNode = NoiseTree->GetFirstChild(root, cookie);
    wxTreeItemId renderNode = NoiseTree->GetNextChild(root, cookie);
    NoiseTree->Expand(root);
    NoiseTree->Expand(moduleNode);
    NoiseTree->Expand(renderNode);
}

NoiserFrame::~NoiserFrame()
{
    //(*Destroy(NoiserFrame)
    //*)
    updateTimer->Stop();
    Disconnect(ID_UPDATETIMER, wxEVT_TIMER, (wxObjectEventFunction)&NoiserFrame::OnTimer, NULL, this);
}

void NoiserFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void NoiserFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox( wxT("Noiser v1.0 Texture Creator\nCopyright (c) 2013 Linus Suter\n\nReleased under the GNU/GPL License:\nhttp://www.gnu.org/licenses/gpl.html\n\nFor more information visit:\nhttp://codewelt.com/noiser"), wxT("Noiser"), wxICON_INFORMATION);
}

double NoiserFrame::parseDouble(wxString setting)
{
    int index = setting.Find('=');
    if (index == wxNOT_FOUND) index = -1;
    setting = setting.SubString(index + 1, setting.Length());
    double ret;
    if (!setting.ToDouble(&ret)) {
        StatusBar->SetStatusText(_("Error: Bad module parameter. Failed to parse double value from \"") + setting + _("\". Module removed."));
        isRendering = false;
        return NULL;
    } else return ret;
}

int NoiserFrame::parseInt(wxString setting, int minimum, int maximum)
{
    int index = setting.Find('=');
    if (index == wxNOT_FOUND) index = -1;
    setting = setting.SubString(index + 1, setting.Length());
    int ret = wxAtoi(setting);
    if (ret >= minimum && ret <= maximum) return ret;
    StatusBar->SetStatusText(_("Error: Bad module parameter. Value parsed from \"") + setting + _("\" is out of bounds. Module removed."));
    isRendering = false;
    return true;
}

int NoiserFrame::parseQuality(wxString setting)
{
    int index = setting.Find('=');
    if (index == wxNOT_FOUND) index = -1;
    setting = setting.SubString(index + 1, setting.Length());
    if (setting == _("QUALITY_FAST")) {
        return 0;
    } else if (setting == _("QUALITY_STD")) {
        return 1;
    } else if (setting == _("QUALITY_BEST")) {
        return 2;
    } else {
        StatusBar->SetStatusText(_("Error: Bad module parameter. Failed to parse quality from \"") + setting + _("\". Module removed."));
        isRendering = false;
        return NULL;
    }
}

std::vector<int> NoiserFrame::parseRGBA(wxString setting)
{
    int index = setting.Find('(');
    std::vector<int> ret(4, -1);
    if (index == wxNOT_FOUND) index = -1;

    wxString colorArrayString = setting.SubString(index + 1, setting.Length());
    int indexRed = colorArrayString.Find(',');
    wxString colorRed = colorArrayString.SubString(0, indexRed - 1);
    int red = wxAtoi(colorRed);

    colorArrayString = colorArrayString.SubString(indexRed + 1, colorArrayString.Length());
    int indexGreen = colorArrayString.Find(',');
    wxString colorGreen = colorArrayString.SubString(0, indexGreen - 1);
    int green = wxAtoi(colorGreen);

    colorArrayString = colorArrayString.SubString(indexGreen + 1, colorArrayString.Length());
    int indexBlue = colorArrayString.Find(',');
    wxString colorBlue = colorArrayString.SubString(0, indexBlue - 1);
    int blue = wxAtoi(colorBlue);

    colorArrayString = colorArrayString.SubString(indexBlue + 1, colorArrayString.Length());
    int indexAlpha = colorArrayString.Find(')');
    wxString colorAlpha = colorArrayString.SubString(0, indexAlpha - 1);
    int alpha = wxAtoi(colorAlpha);

    if ((red >= 0 && red <= 255) &&
        (green >= 0 && green <= 255) &&
        (blue >= 0 && blue <= 255) &&
        (alpha >= 0 && alpha <= 255)) {
        ret[0] = red;
        ret[1] = green;
        ret[2] = blue;
        ret[3] = alpha;
        return ret;
    } else {
        StatusBar->SetStatusText(_("Error: Bad module parameter. Failed to parse color values from \"") + setting + _("\". Module removed."));
        isRendering = false;
        return ret;
    }
}

bool NoiserFrame::parseBool(wxString setting)
{
    int index = setting.Find('=');
    if (index == wxNOT_FOUND) index = -1;
    setting = setting.SubString(index + 1, setting.Length());
    if (setting == _("true") || setting == _("True")) {
        return true;
    } else if (setting == _("false") || setting == _("False")) {
        return false;
    } else {
        StatusBar->SetStatusText(_("Error: Bad module parameter. Failed to parse boolean value from \"") + setting + _("\". Module removed."));
        isRendering = false;
        return NULL;
    }
}

bool NoiserFrame::parseProjectSet(wxString tag)
{
    int indexPosSpace = tag.Find(' ');
    int indexPosSpace2 = tag.Find(' ', true);
    int indexPosSpace2Times = tag.Find('x', true);
    if (indexPosSpace == wxNOT_FOUND || indexPosSpace2  == wxNOT_FOUND
        || indexPosSpace2Times  == wxNOT_FOUND) {
      return false;
    } else {
        wxString stringProject = tag.SubString(0, indexPosSpace - 1);
        if (stringProject == _("Project")) {
            wxString stringProjectName = tag.SubString(indexPosSpace + 1, indexPosSpace2 - 1);
            this->projectName = stringProjectName;
            int width = parseInt(tag.SubString(indexPosSpace2 + 1, indexPosSpace2Times - 1), 0, INT_MAX);
            int height = parseInt(tag.SubString(indexPosSpace2Times + 1, tag.Length()), 0, INT_MAX);
            if (width >= 0 && height >=0) {
                this->projectHeight = height;
                this->projectWidth = width;
                this->SetTitle(_("Noiser - ") + stringProjectName);
                return true;
            } else return false;
        } else return false;
    }
}

int NoiserFrame::parseSourceModule(wxString setting) {
    int index = setting.Find('=');
    if (index == wxNOT_FOUND) index = -1;
    setting = setting.SubString(index + 1, setting.Length());
    if (setting.Length() > 0) {
        int indexSpace = setting.Find(' ');
        wxString moduleIndexString = setting.SubString(0, indexSpace);
        wxString moduleTitleString = setting.SubString(indexSpace + 1, setting.Length());
        int ret = wxAtoi(moduleIndexString);
        if (ret >= 0 && ret < logTreeStrings.GetCount()) {
            if (logTreeStrings.Item(ret) == moduleTitleString) return ret;
            else {
                StatusBar->SetStatusText(_("Error: Bad source module setting. Could not locate correct source module for \"") + setting + _("\". Module removed."));
                isRendering = false;
                // Cleanup on next update.
                requestUpdate = true;
                return 0;
            }
        } else {
            StatusBar->SetStatusText(_("Error: Bad module parameter. Failed to parse source module from \"") + setting + _("\". Module removed."));
            isRendering = false;
            return 0;
        }
    } else {
        StatusBar->SetStatusText(_("Error: Bad module parameter. Failed to parse source module from \"") + setting + _("\". Module removed."));
        isRendering = false;
        return 0;
    }
}

std::vector<double> NoiserFrame::parseControlPoints(wxString setting, int minimum)
{
    int index = setting.Find('=');
    std::vector<double> ret;
    if (index == wxNOT_FOUND) index = -1;
    setting = setting.SubString(index + 1, setting.Length());
    int indexSep;
    while (!(indexSep == wxNOT_FOUND)) {
        indexSep = setting.Find(',');
        wxString doubleValue = setting.SubString(0, indexSep - 1);
        setting = setting.SubString(indexSep + 1, setting.Length());
        double pushMe = parseDouble(doubleValue);
        if (isRendering) {
            ret.push_back(pushMe);
        }
    }
    if (ret.size() >= minimum) return ret;
    else {
        StatusBar->SetStatusText(_("Error: Bad module parameter. The control point array requires ") + wxString::Format(wxT("%i"),minimum) + _(" values. Module removed."));
        isRendering = false;
        return ret;
    }
}

void NoiserFrame::RenderTexture(wxString requestType)
{
    if (isRendering) return;
    isRendering = true;
    ButtonRender->Enable(false);
    wxString appendDone = _("");
    logTreeStrings.Clear();
    // RootNode
    wxTreeItemId rootNode = NoiseTree->GetRootItem();
    if (!parseProjectSet(NoiseTree->GetItemText(rootNode))) {
        // Failed to parse project settings; Revert to default.
        NoiseTree->SetItemText(rootNode, _("Project Default 512x512"));
    }
    if ((this->projectWidth > 512 || this->projectHeight > 512) && sizeReminder) {
        MenuItemAutoRender->Check(false);
        sizeReminder = false;
        StatusBar->SetStatusText(_("Warning: An image of this size will take some time to render. Auto-update disabled."));
        requestUpdate = false;
        ButtonRender->Enable(true);
        isRendering = false;
        return;
    }
    // ModuleNode
    wxTreeItemIdValue cookie;
    wxTreeItemId moduleNode = NoiseTree->GetFirstChild(rootNode, cookie);
    if (NoiseTree->GetChildrenCount(moduleNode) == 0) {
        isRendering = false;
        ButtonRender->Enable(true);
        return;
    }
    // The most important; The array of module-pointers
    std::vector<noise::module::Module*> moduleHolder;
    // First ModuleNode Child
    wxTreeItemIdValue cookieSub;
    wxTreeItemId child = NoiseTree->GetFirstChild(moduleNode, cookieSub);
    wxString moduleTitleCheck = NoiseTree->GetItemText(child);
    if (moduleTitleCheck != _("Billow") &&
        moduleTitleCheck != _("Const") &&
        moduleTitleCheck != _("Cylinders") &&
        moduleTitleCheck != _("Perlin") &&
        moduleTitleCheck != _("RidgedMulti") &&
        moduleTitleCheck != _("Spheres") &&
        moduleTitleCheck != _("Voronoi") ) {
        StatusBar->SetStatusText(_("Error: Please add a generator module first."));
        NoiseTree->Delete(child);
        ButtonRender->Enable(true);
        isRendering = false;
        requestUpdate = true;
        return;
    }

    // Build the Module-Tree
    while(child.IsOk()) {
        wxString moduleTitle = NoiseTree->GetItemText(child);
        logTreeStrings.Add(moduleTitle);

        wxTreeItemIdValue cookieSubModuleSetting;
        wxTreeItemId childModuleSetting = NoiseTree->GetFirstChild(child, cookieSubModuleSetting);

        // Generators
        if (moduleTitle == _("Billow")) {
            module::Billow* module = new module::Billow();
            module->SetFrequency(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetLacunarity(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetOctaveCount(parseInt(NoiseTree->GetItemText(childModuleSetting), 1, 30));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetPersistence(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetNoiseQuality(parseQuality(NoiseTree->GetItemText(childModuleSetting)));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetSeed(parseInt(NoiseTree->GetItemText(childModuleSetting), 0, INT_MAX));
            moduleHolder.push_back(module);
        } else if (moduleTitle == _("Checkerboard")) {
            module::Checkerboard* module = new module::Checkerboard();
            moduleHolder.push_back(module);
        } else if (moduleTitle == _("Const")) {
            module::Const* module = new module::Const();
            module->SetConstValue(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            moduleHolder.push_back(module);
        } else if (moduleTitle == _("Cylinders")) {
            module::Cylinders* module = new module::Cylinders();
            module->SetFrequency(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            moduleHolder.push_back(module);
        } else if (moduleTitle == _("Perlin")) {
            module::Perlin* module = new module::Perlin();
            module->SetFrequency(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetLacunarity(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetOctaveCount(parseInt(NoiseTree->GetItemText(childModuleSetting), 1, 30));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetPersistence(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetNoiseQuality(parseQuality(NoiseTree->GetItemText(childModuleSetting)));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetSeed(parseInt(NoiseTree->GetItemText(childModuleSetting), 0, INT_MAX));
            moduleHolder.push_back(module);
        } else if (moduleTitle == _("RidgedMulti")) {
            module::RidgedMulti* module = new module::RidgedMulti();
            module->SetFrequency(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetLacunarity(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetOctaveCount(parseInt(NoiseTree->GetItemText(childModuleSetting), 1, 30));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetNoiseQuality(parseQuality(NoiseTree->GetItemText(childModuleSetting)));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetSeed(parseInt(NoiseTree->GetItemText(childModuleSetting), 0, INT_MAX));
            moduleHolder.push_back(module);
        } else if (moduleTitle == _("Spheres")) {
            module::Spheres* module = new module::Spheres();
            module->SetFrequency(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            moduleHolder.push_back(module);
        } else if (moduleTitle == _("Voronoi")) {
            module::Voronoi* module = new module::Voronoi();
            module->EnableDistance(parseBool(NoiseTree->GetItemText(childModuleSetting)));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetDisplacement(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetFrequency(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetSeed(parseInt(NoiseTree->GetItemText(childModuleSetting), 0, INT_MAX));
            moduleHolder.push_back(module);
        // Transformers
        } else if (moduleTitle == _("Displace")) {
            module::Displace* module = new module::Displace();
            module->SetSourceModule(0, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetSourceModule(1, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetSourceModule(2, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetSourceModule(3, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            moduleHolder.push_back(module);
        } else if (moduleTitle == _("RotatePoint")) {
            module::RotatePoint* module = new module::RotatePoint();
            module->SetSourceModule(0, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetXAngle(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetYAngle(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetZAngle(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            moduleHolder.push_back(module);
        } else if (moduleTitle == _("ScalePoint")) {
            module::ScalePoint* module = new module::ScalePoint();
            module->SetSourceModule(0, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetXScale(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetYScale(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetZScale(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            moduleHolder.push_back(module);
        } else if (moduleTitle == _("TranslatePoint")) {
            module::TranslatePoint* module = new module::TranslatePoint();
            module->SetSourceModule(0, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetXTranslation(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetYTranslation(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetZTranslation(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            moduleHolder.push_back(module);
        } else if (moduleTitle == _("Turbulence")) {
            module::Turbulence* module = new module::Turbulence();
            module->SetSourceModule(0, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetFrequency(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetPower(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetRoughness(parseInt(NoiseTree->GetItemText(childModuleSetting), 0, 30));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetSeed(parseInt(NoiseTree->GetItemText(childModuleSetting), 0, INT_MAX));
            moduleHolder.push_back(module);
        // Modifiers
        } else if (moduleTitle == _("Abs")) {
            module::Abs* module = new module::Abs();
            module->SetSourceModule(0, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            moduleHolder.push_back(module);
        } else if (moduleTitle == _("Clamp")) {
            module::Clamp* module = new module::Clamp();
            module->SetSourceModule(0, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            double lowerBound = parseDouble(NoiseTree->GetItemText(childModuleSetting));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetBounds(lowerBound, parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            moduleHolder.push_back(module);
        } else if (moduleTitle == _("Curve")) {
            module::Curve* module = new module::Curve();
            module->SetSourceModule(0, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            std::vector<double> pointPairs = parseControlPoints(NoiseTree->GetItemText(childModuleSetting), 4);
            if (pointPairs.size() >= 4) {
                for (int i = 0; i < pointPairs.size(); i+=2) {
                    module->AddControlPoint(pointPairs[i], pointPairs[i + 1]);
                }
            } else {
                StatusBar->SetStatusText(_("Error: Bad module parameter. The control point array requires 4 values. Module removed."));
                isRendering = false;
            }
            moduleHolder.push_back(module);
        } else if (moduleTitle == _("Exponent")) {
            module::Exponent* module = new module::Exponent();
            module->SetSourceModule(0, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetExponent(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            moduleHolder.push_back(module);
        } else if (moduleTitle == _("Invert")) {
            module::Invert* module = new module::Invert();
            module->SetSourceModule(0, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            moduleHolder.push_back(module);
        } else if (moduleTitle == _("ScaleBias")) {
            module::ScaleBias* module = new module::ScaleBias();
            module->SetSourceModule(0, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetBias(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetScale(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            moduleHolder.push_back(module);
        } else if (moduleTitle == _("Terrace")) {
            module::Terrace* module = new module::Terrace();
            module->SetSourceModule(0, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            std::vector<double> pointPairs = parseControlPoints(NoiseTree->GetItemText(childModuleSetting), 2);
            if (pointPairs.size() >= 2) {
                for (int i = 0; i < pointPairs.size(); i++) {
                    module->AddControlPoint(pointPairs[i]);
                }
            } else {
                StatusBar->SetStatusText(_("Error: Bad module parameter. The control point array requires 2 values. Module removed."));
                isRendering = false;
            }
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->InvertTerraces(parseBool(NoiseTree->GetItemText(childModuleSetting)));
            moduleHolder.push_back(module);
        // Combiners
        } else if (moduleTitle == _("Add")) {
            module::Add* module = new module::Add();
            module->SetSourceModule(0, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetSourceModule(1, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            moduleHolder.push_back(module);
        } else if (moduleTitle == _("Max")) {
            module::Max* module = new module::Max();
            module->SetSourceModule(0, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetSourceModule(1, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            moduleHolder.push_back(module);
        } else if (moduleTitle == _("Min")) {
            module::Min* module = new module::Min();
            module->SetSourceModule(0, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetSourceModule(1, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            moduleHolder.push_back(module);
        } else if (moduleTitle == _("Multiply")) {
            module::Multiply* module = new module::Multiply();
            module->SetSourceModule(0, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetSourceModule(1, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            moduleHolder.push_back(module);
        } else if (moduleTitle == _("Power")) {
            module::Power* module = new module::Power();
            module->SetSourceModule(0, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetSourceModule(1, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            moduleHolder.push_back(module);
        // Selectors
        } else if (moduleTitle == _("Blend")) {
            module::Blend* module = new module::Blend();
            module->SetSourceModule(0, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetSourceModule(1, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetSourceModule(2, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            moduleHolder.push_back(module);
        } else if (moduleTitle == _("Select")) {
            module::Select* module = new module::Select();
            module->SetSourceModule(0, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetSourceModule(1, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetControlModule(*moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetEdgeFalloff(parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            double lowerBound = parseDouble(NoiseTree->GetItemText(childModuleSetting));
            childModuleSetting = NoiseTree->GetNextSibling(childModuleSetting);
            module->SetBounds(lowerBound, parseDouble(NoiseTree->GetItemText(childModuleSetting)));
            moduleHolder.push_back(module);
        // Miscellaneous
        } else if (moduleTitle == _("Cache")) {
            module::Cache* module = new module::Cache();
            module->SetSourceModule(0, *moduleHolder[parseSourceModule(NoiseTree->GetItemText(childModuleSetting))]);
            moduleHolder.push_back(module);
        }
        if (!isRendering) {
            NoiseTree->Delete(child);
            ButtonRender->Enable(true);
            requestUpdate = false;
            return;
        }
        if (child == NoiseTree->GetLastChild(child)) break;
        else if (NoiseTree->IsSelected(child)) break;
        else child = NoiseTree->GetNextSibling(child);
    }
    // Renderer settings
    wxTreeItemId rendererNode = NoiseTree->GetNextChild(rootNode, cookie);
    wxTreeItemIdValue cookieRenderSub;
    wxTreeItemId rendererSetting = NoiseTree->GetFirstChild(rendererNode, cookieRenderSub);
    utils::RendererImage renderer;
    renderer.ClearGradient();
    renderer.EnableLight(true);
    utils::NoiseMap noiseMap;
    utils::Image texture;
    renderer.SetDestImage(texture);
    renderer.SetLightAzimuth(parseDouble(NoiseTree->GetItemText(rendererSetting)));
    rendererSetting = NoiseTree->GetNextChild(rendererNode, cookieRenderSub);
    renderer.SetLightBrightness(parseDouble(NoiseTree->GetItemText(rendererSetting)));
    rendererSetting = NoiseTree->GetNextChild(rendererNode, cookieRenderSub);
    std::vector<int> returnColor = parseRGBA(NoiseTree->GetItemText(rendererSetting));
    renderer.SetLightColor(utils::Color(returnColor[0], returnColor[1], returnColor[2], returnColor[3]));
    rendererSetting = NoiseTree->GetNextChild(rendererNode, cookieRenderSub);
    renderer.SetLightContrast(parseDouble(NoiseTree->GetItemText(rendererSetting)));
    rendererSetting = NoiseTree->GetNextChild(rendererNode, cookieRenderSub);
    renderer.SetLightElev(parseDouble(NoiseTree->GetItemText(rendererSetting)));
    rendererSetting = NoiseTree->GetNextChild(rendererNode, cookieRenderSub);
    renderer.SetLightIntensity(parseDouble(NoiseTree->GetItemText(rendererSetting)));
    if (ListBoxColors->GetCount() < 2) {
        ListBoxColors->Clear();
        ListBoxColors->Append(_("-1.0=rgba(255,255,255,255)"));
        ListBoxColors->Append(_("1.0=rgba(0,0,0,255)"));
        appendDone = _(" Please set at least 2 render colors. Render colors reset to default.");
    }
    double rememberDouble = -2.0;
    for (unsigned int i = 0; i < ListBoxColors->GetCount(); i++) {
        wxString currentSet = ListBoxColors->GetString(i);
        int indexPosition = currentSet.Find('=');
        wxString currentSetDouble = currentSet.SubString(0, indexPosition - 1);
        double currentDouble = parseDouble(currentSetDouble);
        // Skip duplicate positions.
        if (rememberDouble == currentDouble) continue;
        else rememberDouble = currentDouble;
        wxString settingRGBA = currentSet.SubString(indexPosition + 1, currentSet.Length());
        std::vector<int> color = parseRGBA(settingRGBA);
        renderer.AddGradientPoint(currentDouble, utils::Color(color[0], color[1], color[2], color[3]));
    }
    // Surface
    if (RadioBoxSurface->GetSelection() == 0) {
        // Planar
        utils::NoiseMapBuilderPlane plane;
        rendererSetting = NoiseTree->GetNextChild(rendererNode, cookieRenderSub);
        wxTreeItemIdValue cookieBuilder;
        wxTreeItemId builderNode = NoiseTree->GetFirstChild(rendererSetting, cookieBuilder);
        if (CheckBoxSeamless->IsChecked()) {
            plane.EnableSeamless(true);
            NoiseTree->SetItemText(builderNode, _("EnableSeamless=true"));
        } else {
            plane.EnableSeamless(false);
            NoiseTree->SetItemText(builderNode, _("EnableSeamless=false"));
        }
        builderNode = NoiseTree->GetNextSibling(builderNode);
        double lowerXBound = parseDouble(NoiseTree->GetItemText(builderNode));
        builderNode = NoiseTree->GetNextSibling(builderNode);
        double upperXBound = parseDouble(NoiseTree->GetItemText(builderNode));
        builderNode = NoiseTree->GetNextSibling(builderNode);
        double lowerZBound = parseDouble(NoiseTree->GetItemText(builderNode));
        builderNode = NoiseTree->GetNextSibling(builderNode);
        double upperZBound = parseDouble(NoiseTree->GetItemText(builderNode));
        if (lowerXBound >= upperXBound || lowerZBound >= upperZBound) {
            plane.SetBounds(-1.0, 1.0, -1.0, 1.0);
            appendDone = _(" Incoherent planar bounds. Defaults used.");
        } else plane.SetBounds(lowerXBound, upperXBound, lowerZBound, upperZBound);
        plane.SetDestSize(this->projectWidth, this->projectHeight);
        plane.SetSourceModule(*moduleHolder[moduleHolder.size() - 1]);
        plane.SetDestNoiseMap(noiseMap);
        this->StatusBar->SetStatusText(wxT("Building Planar Map ..."));
        plane.Build(this->RenderGauge);
    } else if (RadioBoxSurface->GetSelection() == 1) {
        // Cylindrical
        rendererSetting = NoiseTree->GetNextChild(rendererNode, cookieRenderSub);
        rendererSetting = NoiseTree->GetNextChild(rendererNode, cookieRenderSub);
        rendererSetting = NoiseTree->GetNextChild(rendererNode, cookieRenderSub);
        wxTreeItemIdValue cookieBuilder;
        wxTreeItemId builderNode = NoiseTree->GetFirstChild(rendererSetting, cookieBuilder);
        utils::NoiseMapBuilderCylinder cylinder;
        double lowerAngleBound = parseDouble(NoiseTree->GetItemText(builderNode));
        builderNode = NoiseTree->GetNextSibling(builderNode);
        double upperAngleBound = parseDouble(NoiseTree->GetItemText(builderNode));
        builderNode = NoiseTree->GetNextSibling(builderNode);
        double lowerHeightBound = parseDouble(NoiseTree->GetItemText(builderNode));
        builderNode = NoiseTree->GetNextSibling(builderNode);
        double upperHeightBound = parseDouble(NoiseTree->GetItemText(builderNode));
        if (lowerAngleBound >= upperAngleBound || lowerHeightBound >= upperHeightBound) {
            cylinder.SetBounds(-180.0, 180.0, -10.0, 10.0);
            appendDone = _(" Incoherent cylindrical bounds. Defaults used.");
        } else cylinder.SetBounds(lowerAngleBound, upperAngleBound, lowerHeightBound, upperHeightBound);
        cylinder.SetDestSize(this->projectWidth, this->projectHeight);
        cylinder.SetSourceModule(*moduleHolder[moduleHolder.size() - 1]);
        cylinder.SetDestNoiseMap(noiseMap);
        this->StatusBar->SetStatusText(wxT("Building Cylindrical Map ..."));
        cylinder.Build(this->RenderGauge);
    } else {
        // Spherical
        rendererSetting = NoiseTree->GetNextChild(rendererNode, cookieRenderSub);
        rendererSetting = NoiseTree->GetNextChild(rendererNode, cookieRenderSub);
        wxTreeItemIdValue cookieBuilder;
        this->projectWidth *= 2;
        wxTreeItemId builderNode = NoiseTree->GetFirstChild(rendererSetting, cookieBuilder);
        utils::NoiseMapBuilderSphere sphere;
        double southLatBound = parseDouble(NoiseTree->GetItemText(builderNode));
        builderNode = NoiseTree->GetNextSibling(builderNode);
        double northLatBound = parseDouble(NoiseTree->GetItemText(builderNode));
        builderNode = NoiseTree->GetNextSibling(builderNode);
        double westLonBound = parseDouble(NoiseTree->GetItemText(builderNode));
        builderNode = NoiseTree->GetNextSibling(builderNode);
        double eastLonBound = parseDouble(NoiseTree->GetItemText(builderNode));
        if (southLatBound >= northLatBound || westLonBound >= eastLonBound) {
            sphere.SetBounds(-90.0, 90.0, -180.0, 180.0);
            appendDone = _(" Incoherent spherical bounds. Defaults used.");
        } else sphere.SetBounds(southLatBound, northLatBound, westLonBound, eastLonBound);
        sphere.SetDestSize(this->projectWidth, this->projectHeight);
        sphere.SetSourceModule(*moduleHolder[moduleHolder.size() - 1]);
        sphere.SetDestNoiseMap(noiseMap);
        this->StatusBar->SetStatusText(wxT("Building Spherical Map ..."));
        sphere.Build(this->RenderGauge);
    }
    if (requestType == _("Normals")) {
        utils::RendererNormalMap normalMapRenderer;
        texture.SetSize(this->projectWidth, this->projectHeight);
        normalMapRenderer.SetSourceNoiseMap(noiseMap);
        normalMapRenderer.EnableWrap(CheckBoxSeamless->IsChecked());
        normalMapRenderer.SetDestImage(texture);
        normalMapRenderer.SetBumpHeight(4.0);
        this->StatusBar->SetStatusText(wxT("Rendering Normal Map..."));
        this->NoiseImage->Destroy();
        this->NoiseImage = new wxImage(this->projectWidth, this->projectHeight);
        if (!this->NoiseImage->HasAlpha()) this->NoiseImage->InitAlpha();
        normalMapRenderer.Render(this->RenderGauge, this->NoiseImage);
    } else if (requestType == _("Terr")) {
        utils::WriterTER terrainWriter;
        terrainWriter.SetSourceNoiseMap (noiseMap);
        terrainWriter.SetDestFilename (this->TerExportPath.data());
        terrainWriter.SetMetersPerPoint (240.0);
        this->StatusBar->SetStatusText(wxT("Exporting to Terrain File..."));
        terrainWriter.WriteDestFile();
    } else if (requestType == _("Raw")) {
        this->StatusBar->SetStatusText(wxT("Exporting to Raw Heightfield File..."));
        int x, y;
        uint8* pLineBuffer = new uint8[this->projectWidth * 2];
        std::ofstream os;
        os.open (this->RawExportPath.data(), std::ios::out | std::ios::binary);
        for (y = 0; y < this->projectHeight; y++) {
            float* pSource = noiseMap.GetSlabPtr (y);
            uint8* pDest = pLineBuffer;
            for (x = 0; x < this->projectWidth; x++) {
                int16 elev = (int16)(floor (*pSource));
                *pDest++ = (uint8)(((uint16)elev & 0xff00) >> 8);
                *pDest++ = (uint8)(((uint16)elev & 0x00ff)     );
                ++pSource;
            }
            os.write ((char*)pLineBuffer, this->projectWidth * 2);
        }
        os.close ();
        delete[] pLineBuffer;
    } else {
        renderer.SetSourceNoiseMap(noiseMap);
        this->StatusBar->SetStatusText(wxT("Rendering Texture..."));
        renderer.Render(this->RenderGauge);
        this->NoiseImage->Destroy();
        this->NoiseImage = new wxImage(this->projectWidth, this->projectHeight);
        if (!this->NoiseImage->HasAlpha()) this->NoiseImage->InitAlpha();
    }

    if (requestType == _("Grayscale")) {
        for (int x = 0; x < texture.GetWidth(); x++) {
            for (int y = 0; y < texture.GetHeight(); y++) {
                const utils::Color* source = texture.GetConstSlabPtr(x, y);
                this->NoiseImage->SetRGB(x, y, (source->red + source->green + source->blue) / 3,
                                         (source->red + source->green + source->blue) / 3,
                                         (source->red + source->green + source->blue) / 3);
                this->NoiseImage->SetAlpha(x, y, source->alpha);
            }
        }
    } else if (requestType == _("Normals")) {
        // NULL
    } else if (requestType == _("Default")) {
        for (int x = 0; x < texture.GetWidth(); x++) {
            for (int y = 0; y < texture.GetHeight(); y++) {
                const utils::Color* source = texture.GetConstSlabPtr(x, y);
                this->NoiseImage->SetRGB(x, y, source->red, source->green, source->blue);
                this->NoiseImage->SetAlpha(x, y, source->alpha);
            }
        }
    }
    wxImage noiseImageCopy = this->NoiseImage->Copy();
    noiseImageCopy = noiseImageCopy.Scale(noiseImageCopy.GetWidth() * scope, noiseImageCopy.GetHeight() * scope);
    this->BitmapView->Hide();
    this->BitmapView->SetMaxSize(wxSize(noiseImageCopy.GetWidth(), noiseImageCopy.GetHeight()));
    this->BitmapView->SetMinSize(wxSize(noiseImageCopy.GetWidth(), noiseImageCopy.GetHeight()));
    this->BitmapView->SetBitmap(noiseImageCopy);
    this->BitmapView->Show();
    this->BoxSizerAll->Fit(this);
    this->BoxSizerMain->Fit(this);
    this->BoxSizerHorizontal->Fit(this);

    this->StatusBar->SetStatusText(wxT("Done.") + appendDone);
    ButtonRender->Enable(true);
    isRendering = false;
    requestUpdate = false;
    return;
}

void NoiserFrame::AddNoiseDialog(void)
{
    wxArrayString choices;
    choices.Add(wxT("Generator: Billow"));
    // choices.Add(wxT("Generator: Checkerboard"));
    choices.Add(wxT("Generator: Const"));
    choices.Add(wxT("Generator: Cylinders"));
    choices.Add(wxT("Generator: Perlin"));
    choices.Add(wxT("Generator: RidgedMulti"));
    choices.Add(wxT("Generator: Spheres"));
    choices.Add(wxT("Generator: Voronoi"));
    choices.Add(wxT("Transformer: Displace (4 source modules required)"));
    choices.Add(wxT("Transformer: RotatePoint (1 source module required)"));
    choices.Add(wxT("Transformer: ScalePoint (1 source module required)"));
    choices.Add(wxT("Transformer: TranslatePoint (1 source module required)"));
    choices.Add(wxT("Transformer: Turbulence (1 source module required)"));
    choices.Add(wxT("Modifier: Abs (1 source module required)"));
    choices.Add(wxT("Modifier: Clamp (1 source module required)"));
    choices.Add(wxT("Modifier: Curve (1 source module required)"));
    choices.Add(wxT("Modifier: Exponent (1 source module required)"));
    choices.Add(wxT("Modifier: Invert (1 source module required)"));
    choices.Add(wxT("Modifier: ScaleBias (1 source module required)"));
    choices.Add(wxT("Modifier: Terrace (1 source module required)"));
    choices.Add(wxT("Combiner: Add (2 source modules required)"));
    choices.Add(wxT("Combiner: Max (2 source modules required)"));
    choices.Add(wxT("Combiner: Min (2 source modules required)"));
    choices.Add(wxT("Combiner: Multiply (2 source modules required)"));
    choices.Add(wxT("Combiner: Power (2 source modules required)"));
    choices.Add(wxT("Selector: Blend (3 source modules required)"));
    choices.Add(wxT("Selector: Select (3 source modules required)"));
    choices.Add(wxT("Miscellaneous: Cache (1 source module required)"));
    wxSingleChoiceDialog addNoiseDialog(this,
                        _("Add Module"),
                        _("Please choose a Noise Module"),
                        choices);
    if (addNoiseDialog.ShowModal() == wxID_OK) {
        // RootNode
        wxTreeItemId rootNode = NoiseTree->GetRootItem();
        // ModuleNode
        wxTreeItemIdValue cookie;
        wxTreeItemId moduleNode = NoiseTree->GetFirstChild(rootNode, cookie);
        wxTreeItemId newChild;
        wxString moduleTitle;
        wxArrayString sourceModuleChoices;
        if (NoiseTree->GetChildrenCount(moduleNode, false) == 0) {
            // ModuleNode Empty
            moduleTitle = addNoiseDialog.GetStringSelection();
            moduleTitle = moduleTitle.SubString(moduleTitle.Find(' ') + 1, moduleTitle.Length());
            newChild = NoiseTree->InsertItem(moduleNode, 0, moduleTitle, wxT("NULL"));
        } else {
            // First ModuleNode Child
            wxTreeItemIdValue cookieSub;
            wxTreeItemId child = NoiseTree->GetFirstChild(moduleNode, cookieSub);
            int insertIndex = 0;
            while (child.IsOk()) {
                insertIndex++;
                sourceModuleChoices.Add(NoiseTree->GetItemText(child));
                //this->StatusBar->SetStatusText(NoiseTree->GetItemText(child));
                //wxString moduleTitle = NoiseTree->GetItemText(child);
                if (NoiseTree->IsSelected(child)) break;
                else if (child == NoiseTree->GetLastChild(child)) break;
                else child = NoiseTree->GetNextSibling(child);
            }
            moduleTitle = addNoiseDialog.GetStringSelection();
            moduleTitle = moduleTitle.SubString(moduleTitle.Find(' ') + 1, moduleTitle.Length());
            if (moduleTitle.Contains(_("("))){
                moduleTitle = moduleTitle.SubString(0, moduleTitle.Find('(') - 2);
            }
            newChild = NoiseTree->InsertItem(moduleNode, insertIndex, moduleTitle, wxT("NULL"));
        }
        // Generators
        if (moduleTitle == _("Billow")) {
            AddModuleProperty(wxT("Frequency=1.0"));
            AddModuleProperty(wxT("Lacunarity=2.0"));
            AddModuleProperty(wxT("OctaveCount=6")); // BILLOW_MAX_OCTAVE = 30
            AddModuleProperty(wxT("Persistence=0.5"));
            AddModuleProperty(wxT("Quality=QUALITY_BEST"));
            AddModuleProperty(wxT("Seed=0"));
        } else if (moduleTitle == _("Checkerboard")) {
            // NULL
        } else if (moduleTitle == _("Const")) {
            AddModuleProperty(wxT("ConstValue=0.0"));
        } else if (moduleTitle == _("Cylinders")) {
            AddModuleProperty(wxT("Frequency=1.0"));
        } else if (moduleTitle == _("Perlin")) {
            AddModuleProperty(wxT("Frequency=1.0"));
            AddModuleProperty(wxT("Lacunarity=2.0"));
            AddModuleProperty(wxT("OctaveCount=6")); // PERLIN_MAX_OCTAVE = 30
            AddModuleProperty(wxT("Persistence=0.5"));
            AddModuleProperty(wxT("Quality=QUALITY_BEST"));
            AddModuleProperty(wxT("Seed=0"));
        } else if (moduleTitle == _("RidgedMulti")) {
            AddModuleProperty(wxT("Frequency=1.0"));
            AddModuleProperty(wxT("Lacunarity=2.0"));
            AddModuleProperty(wxT("OctaveCount=6")); // RIDGED_MAX_OCTAVE = 30
            AddModuleProperty(wxT("Quality=QUALITY_BEST"));
            AddModuleProperty(wxT("Seed=0"));
        } else if (moduleTitle == _("Spheres")) {
            AddModuleProperty(wxT("Frequency=1.0"));
        } else if (moduleTitle == _("Voronoi")) {
            AddModuleProperty(wxT("EnableDistance=true"));
            AddModuleProperty(wxT("Displacement=1.0"));
            AddModuleProperty(wxT("Frequency=1.0"));
            AddModuleProperty(wxT("Seed=0"));
        // Transformers
        } else if (moduleTitle == _("Displace")) {
            if (NoiseTree->GetChildrenCount(moduleNode, false) - 1 < 4) {
                NoiseTree->Delete(newChild);
                return;
            }
            wxMultiChoiceDialog addSourceModulesDialog(this, wxT("Please choose four source modules:"),
                wxT("Select source modules"),
                sourceModuleChoices);
            if (addSourceModulesDialog.ShowModal() == wxID_OK) {
                wxArrayInt moduleIndex = addSourceModulesDialog.GetSelections();
                if (moduleIndex.Count() >= 4) {
                    AddModuleProperty(wxT("SourceModule=") + wxString::Format(wxT("%i"), moduleIndex[0]) + wxT(" ")
                                + sourceModuleChoices[moduleIndex[0]]);
                    AddModuleProperty(wxT("SourceModule=") + wxString::Format(wxT("%i"), moduleIndex[1]) + wxT(" ")
                                + sourceModuleChoices[moduleIndex[1]]);
                    AddModuleProperty(wxT("SourceModule=") + wxString::Format(wxT("%i"), moduleIndex[2]) + wxT(" ")
                                + sourceModuleChoices[moduleIndex[2]]);
                    AddModuleProperty(wxT("SourceModule=") + wxString::Format(wxT("%i"), moduleIndex[3]) + wxT(" ")
                                + sourceModuleChoices[moduleIndex[3]]);
                } else {
                    NoiseTree->Delete(newChild);
                    return;
                }
            } else {
                NoiseTree->Delete(newChild);
                return;
            }
        } else if (moduleTitle == _("RotatePoint")) {
            if (NoiseTree->GetChildrenCount(moduleNode, false) - 1 < 1) {
                NoiseTree->Delete(newChild);
                return;
            }
            wxSingleChoiceDialog addSourceModulesDialog(this, wxT("Please choose one source module:"),
                wxT("Select source module"),
                sourceModuleChoices);
            if (addSourceModulesDialog.ShowModal() == wxID_OK) {
                int moduleIndex = addSourceModulesDialog.GetSelection();
                AddModuleProperty(wxT("SourceModule=")
                                + wxString::Format(wxT("%i"), moduleIndex) + wxT(" ")
                                + addSourceModulesDialog.GetStringSelection());
                AddModuleProperty(wxT("RotateX=0.0"));
                AddModuleProperty(wxT("RotateY=0.0"));
                AddModuleProperty(wxT("RotateZ=0.0"));
            } else {
                NoiseTree->Delete(newChild);
                return;
            }
        } else if (moduleTitle == _("ScalePoint")) {
            if (NoiseTree->GetChildrenCount(moduleNode, false) - 1 < 1) {
                NoiseTree->Delete(newChild);
                return;
            }
            wxSingleChoiceDialog addSourceModulesDialog(this, wxT("Please choose one source module:"),
                wxT("Select source module"),
                sourceModuleChoices);
            if (addSourceModulesDialog.ShowModal() == wxID_OK) {
                int moduleIndex = addSourceModulesDialog.GetSelection();
                AddModuleProperty(wxT("SourceModule=")
                                + wxString::Format(wxT("%i"), moduleIndex) + wxT(" ")
                                + addSourceModulesDialog.GetStringSelection());
                AddModuleProperty(wxT("ScaleX=1.0"));
                AddModuleProperty(wxT("ScaleY=1.0"));
                AddModuleProperty(wxT("ScaleZ=1.0"));
            } else {
                NoiseTree->Delete(newChild);
                return;
            }
        } else if (moduleTitle == _("TranslatePoint")) {
            if (NoiseTree->GetChildrenCount(moduleNode, false) - 1 < 1) {
                NoiseTree->Delete(newChild);
                return;
            }
            wxSingleChoiceDialog addSourceModulesDialog(this, wxT("Please choose one source module:"),
                wxT("Select source module"),
                sourceModuleChoices);
            if (addSourceModulesDialog.ShowModal() == wxID_OK) {
                int moduleIndex = addSourceModulesDialog.GetSelection();
                AddModuleProperty(wxT("SourceModule=")
                                + wxString::Format(wxT("%i"), moduleIndex) + wxT(" ")
                                + addSourceModulesDialog.GetStringSelection());
                AddModuleProperty(wxT("TranslateX=0.0"));
                AddModuleProperty(wxT("TranslateY=0.0"));
                AddModuleProperty(wxT("TranslateZ=0.0"));
            } else {
                NoiseTree->Delete(newChild);
                return;
            }
        } else if (moduleTitle == _("Turbulence")) {
            if (NoiseTree->GetChildrenCount(moduleNode, false) - 1 < 1) {
                NoiseTree->Delete(newChild);
                return;
            }
            wxSingleChoiceDialog addSourceModulesDialog(this, wxT("Please choose one source module:"),
                wxT("Select source module"),
                sourceModuleChoices);
            if (addSourceModulesDialog.ShowModal() == wxID_OK) {
                int moduleIndex = addSourceModulesDialog.GetSelection();
                AddModuleProperty(wxT("SourceModule=")
                                + wxString::Format(wxT("%i"), moduleIndex) + wxT(" ")
                                + addSourceModulesDialog.GetStringSelection());
                AddModuleProperty(wxT("Frequency=1.0"));
                AddModuleProperty(wxT("Power=1.0"));
                AddModuleProperty(wxT("Roughness=3")); // RIDGED_MAX_OCTAVE = 30
                AddModuleProperty(wxT("Seed=0"));
            } else {
                NoiseTree->Delete(newChild);
                return;
            }
        // Modifiers
        } else if (moduleTitle == _("Abs")) {
            if (NoiseTree->GetChildrenCount(moduleNode, false) - 1 < 1) {
                NoiseTree->Delete(newChild);
                return;
            }
            wxSingleChoiceDialog addSourceModulesDialog(this, wxT("Please choose one source module:"),
                wxT("Select source module"),
                sourceModuleChoices);
            if (addSourceModulesDialog.ShowModal() == wxID_OK) {
                int moduleIndex = addSourceModulesDialog.GetSelection();
                AddModuleProperty(wxT("SourceModule=")
                                + wxString::Format(wxT("%i"), moduleIndex) + wxT(" ")
                                + addSourceModulesDialog.GetStringSelection());
            } else {
                NoiseTree->Delete(newChild);
                return;
            }
        } else if (moduleTitle == _("Clamp")) {
           if (NoiseTree->GetChildrenCount(moduleNode, false) - 1 < 1) {
                NoiseTree->Delete(newChild);
                return;
            }
            wxSingleChoiceDialog addSourceModulesDialog(this, wxT("Please choose one source module:"),
                wxT("Select source module"),
                sourceModuleChoices);
            if (addSourceModulesDialog.ShowModal() == wxID_OK) {
                int moduleIndex = addSourceModulesDialog.GetSelection();
                AddModuleProperty(wxT("SourceModule=")
                                + wxString::Format(wxT("%i"), moduleIndex) + wxT(" ")
                                + addSourceModulesDialog.GetStringSelection());
                AddModuleProperty(wxT("LowerBound=-1.0"));
                AddModuleProperty(wxT("UpperBound=1.0"));
            } else {
                NoiseTree->Delete(newChild);
                return;
            }
        } else if (moduleTitle == _("Curve")) {
           if (NoiseTree->GetChildrenCount(moduleNode, false) - 1 < 1) {
                NoiseTree->Delete(newChild);
                return;
            }
            wxSingleChoiceDialog addSourceModulesDialog(this, wxT("Please choose one source module:"),
                wxT("Select source module"),
                sourceModuleChoices);
            if (addSourceModulesDialog.ShowModal() == wxID_OK) {
                int moduleIndex = addSourceModulesDialog.GetSelection();
                AddModuleProperty(wxT("SourceModule=")
                                + wxString::Format(wxT("%i"), moduleIndex) + wxT(" ")
                                + addSourceModulesDialog.GetStringSelection());
                AddModuleProperty(wxT("ControlPoints=-1.0,-1.0,-0.5,-0.5,0.5,0.5,1.0,1.0"));
            } else {
                NoiseTree->Delete(newChild);
                return;
            }
        } else if (moduleTitle == _("Exponent")) {

           if (NoiseTree->GetChildrenCount(moduleNode, false) - 1 < 1) {
                NoiseTree->Delete(newChild);
                return;
            }
            wxSingleChoiceDialog addSourceModulesDialog(this, wxT("Please choose one source module:"),
                wxT("Select source module"),
                sourceModuleChoices);
            if (addSourceModulesDialog.ShowModal() == wxID_OK) {
                int moduleIndex = addSourceModulesDialog.GetSelection();
                AddModuleProperty(wxT("SourceModule=")
                                + wxString::Format(wxT("%i"), moduleIndex) + wxT(" ")
                                + addSourceModulesDialog.GetStringSelection());
                AddModuleProperty(wxT("Exponent=1.0"));
            } else {
                NoiseTree->Delete(newChild);
                return;
            }
        } else if (moduleTitle == _("Invert")) {
            if (NoiseTree->GetChildrenCount(moduleNode, false) - 1 < 1) {
                NoiseTree->Delete(newChild);
                return;
            }
            wxSingleChoiceDialog addSourceModulesDialog(this, wxT("Please choose one source module:"),
                wxT("Select source module"),
                sourceModuleChoices);
            if (addSourceModulesDialog.ShowModal() == wxID_OK) {
                int moduleIndex = addSourceModulesDialog.GetSelection();
                AddModuleProperty(wxT("SourceModule=")
                                + wxString::Format(wxT("%i"), moduleIndex) + wxT(" ")
                                + addSourceModulesDialog.GetStringSelection());
                AddModuleProperty(wxT("Exponent=1.0"));
            } else {
                NoiseTree->Delete(newChild);
                return;
            }
        } else if (moduleTitle == _("ScaleBias")) {
            if (NoiseTree->GetChildrenCount(moduleNode, false) - 1 < 1) {
                NoiseTree->Delete(newChild);
                return;
            }
            wxSingleChoiceDialog addSourceModulesDialog(this, wxT("Please choose one source module:"),
                wxT("Select source module"),
                sourceModuleChoices);
            if (addSourceModulesDialog.ShowModal() == wxID_OK) {
                int moduleIndex = addSourceModulesDialog.GetSelection();
                AddModuleProperty(wxT("SourceModule=")
                                + wxString::Format(wxT("%i"), moduleIndex) + wxT(" ")
                                + addSourceModulesDialog.GetStringSelection());
                AddModuleProperty(wxT("Bias=0.0"));
                AddModuleProperty(wxT("Scale=1.0"));
            } else {
                NoiseTree->Delete(newChild);
                return;
            }
        } else if (moduleTitle == _("Terrace")) {
            if (NoiseTree->GetChildrenCount(moduleNode, false) - 1 < 1) {
                NoiseTree->Delete(newChild);
                return;
            }
            wxSingleChoiceDialog addSourceModulesDialog(this, wxT("Please choose one source module:"),
                wxT("Select source module"),
                sourceModuleChoices);
            if (addSourceModulesDialog.ShowModal() == wxID_OK) {
                int moduleIndex = addSourceModulesDialog.GetSelection();
                AddModuleProperty(wxT("SourceModule=")
                                + wxString::Format(wxT("%i"), moduleIndex) + wxT(" ")
                                + addSourceModulesDialog.GetStringSelection());
                AddModuleProperty(wxT("ControlPoints=-1.0,1.0"));
                AddModuleProperty(wxT("InvertTerraces=true"));
            } else {
                NoiseTree->Delete(newChild);
                return;
            }
        // Combiners
        } else if (moduleTitle == _("Add")) {
            if (NoiseTree->GetChildrenCount(moduleNode, false) - 1 < 2) {
                NoiseTree->Delete(newChild);
                return;
            }
            wxMultiChoiceDialog addSourceModulesDialog(this, wxT("Please choose two source modules:"),
                wxT("Select source modules"),
                sourceModuleChoices);
            if (addSourceModulesDialog.ShowModal() == wxID_OK) {
                wxArrayInt moduleIndex = addSourceModulesDialog.GetSelections();
                if (moduleIndex.Count() >= 2) {
                    AddModuleProperty(wxT("SourceModule=") + wxString::Format(wxT("%i"), moduleIndex[0]) + wxT(" ")
                                + sourceModuleChoices[moduleIndex[0]]);
                    AddModuleProperty(wxT("SourceModule=") + wxString::Format(wxT("%i"), moduleIndex[1]) + wxT(" ")
                                + sourceModuleChoices[moduleIndex[1]]);
                } else {
                    NoiseTree->Delete(newChild);
                    return;
                }
            } else {
                NoiseTree->Delete(newChild);
                return;
            }
        } else if (moduleTitle == _("Max")) {
            if (NoiseTree->GetChildrenCount(moduleNode, false) - 1 < 2) {
                NoiseTree->Delete(newChild);
                return;
            }
            wxMultiChoiceDialog addSourceModulesDialog(this, wxT("Please choose two source modules:"),
                wxT("Select source modules"),
                sourceModuleChoices);
            if (addSourceModulesDialog.ShowModal() == wxID_OK) {
                wxArrayInt moduleIndex = addSourceModulesDialog.GetSelections();
                if (moduleIndex.Count() >= 2) {
                    AddModuleProperty(wxT("SourceModule=") + wxString::Format(wxT("%i"), moduleIndex[0]) + wxT(" ")
                                + sourceModuleChoices[moduleIndex[0]]);
                    AddModuleProperty(wxT("SourceModule=") + wxString::Format(wxT("%i"), moduleIndex[1]) + wxT(" ")
                                + sourceModuleChoices[moduleIndex[1]]);
                } else {
                    NoiseTree->Delete(newChild);
                    return;
                }
            } else {
                NoiseTree->Delete(newChild);
                return;
            }
        } else if (moduleTitle == _("Min")) {
            if (NoiseTree->GetChildrenCount(moduleNode, false) - 1 < 2) {
                NoiseTree->Delete(newChild);
                return;
            }
            wxMultiChoiceDialog addSourceModulesDialog(this, wxT("Please choose two source modules:"),
                wxT("Select source modules"),
                sourceModuleChoices);
            if (addSourceModulesDialog.ShowModal() == wxID_OK) {
                wxArrayInt moduleIndex = addSourceModulesDialog.GetSelections();
                if (moduleIndex.Count() >= 2) {
                    AddModuleProperty(wxT("SourceModule=") + wxString::Format(wxT("%i"), moduleIndex[0]) + wxT(" ")
                                + sourceModuleChoices[moduleIndex[0]]);
                    AddModuleProperty(wxT("SourceModule=") + wxString::Format(wxT("%i"), moduleIndex[1]) + wxT(" ")
                                + sourceModuleChoices[moduleIndex[1]]);
                } else {
                    NoiseTree->Delete(newChild);
                    return;
                }
            } else {
                NoiseTree->Delete(newChild);
                return;
            }
        } else if (moduleTitle == _("Multiply")) {
            if (NoiseTree->GetChildrenCount(moduleNode, false) - 1 < 2) {
                NoiseTree->Delete(newChild);
                return;
            }
            wxMultiChoiceDialog addSourceModulesDialog(this, wxT("Please choose two source modules:"),
                wxT("Select source modules"),
                sourceModuleChoices);
            if (addSourceModulesDialog.ShowModal() == wxID_OK) {
                wxArrayInt moduleIndex = addSourceModulesDialog.GetSelections();
                if (moduleIndex.Count() >= 2) {
                    AddModuleProperty(wxT("SourceModule=") + wxString::Format(wxT("%i"), moduleIndex[0]) + wxT(" ")
                                + sourceModuleChoices[moduleIndex[0]]);
                    AddModuleProperty(wxT("SourceModule=") + wxString::Format(wxT("%i"), moduleIndex[1]) + wxT(" ")
                                + sourceModuleChoices[moduleIndex[1]]);
                } else {
                    NoiseTree->Delete(newChild);
                    return;
                }
            } else {
                NoiseTree->Delete(newChild);
                return;
            }
        } else if (moduleTitle == _("Power")) {
            if (NoiseTree->GetChildrenCount(moduleNode, false) - 1 < 2) {
                NoiseTree->Delete(newChild);
                return;
            }
            wxMultiChoiceDialog addSourceModulesDialog(this, wxT("Please choose two source modules:"),
                wxT("Select source modules"),
                sourceModuleChoices);
            if (addSourceModulesDialog.ShowModal() == wxID_OK) {
                wxArrayInt moduleIndex = addSourceModulesDialog.GetSelections();
                if (moduleIndex.Count() >= 2) {
                    AddModuleProperty(wxT("SourceModule=") + wxString::Format(wxT("%i"), moduleIndex[0]) + wxT(" ")
                                + sourceModuleChoices[moduleIndex[0]]);
                    AddModuleProperty(wxT("SourceModule=") + wxString::Format(wxT("%i"), moduleIndex[1]) + wxT(" ")
                                + sourceModuleChoices[moduleIndex[1]]);
                } else {
                    NoiseTree->Delete(newChild);
                    return;
                }
            } else {
                NoiseTree->Delete(newChild);
                return;
            }
        // Selectors
        } else if (moduleTitle == _("Blend")) {
            if (NoiseTree->GetChildrenCount(moduleNode, false) - 1 < 3) {
                NoiseTree->Delete(newChild);
                return;
            }
            wxMultiChoiceDialog addSourceModulesDialog(this, wxT("Please choose three source modules:"),
                wxT("Select source modules"),
                sourceModuleChoices);
            if (addSourceModulesDialog.ShowModal() == wxID_OK) {
                wxArrayInt moduleIndex = addSourceModulesDialog.GetSelections();
                if (moduleIndex.Count() >= 3) {
                    AddModuleProperty(wxT("SourceModule=") + wxString::Format(wxT("%i"), moduleIndex[0]) + wxT(" ")
                                + sourceModuleChoices[moduleIndex[0]]);
                    AddModuleProperty(wxT("SourceModule=") + wxString::Format(wxT("%i"), moduleIndex[1]) + wxT(" ")
                                + sourceModuleChoices[moduleIndex[1]]);
                    AddModuleProperty(wxT("SourceModule=") + wxString::Format(wxT("%i"), moduleIndex[2]) + wxT(" ")
                                + sourceModuleChoices[moduleIndex[2]]);
                } else {
                    NoiseTree->Delete(newChild);
                    return;
                }
            } else {
                NoiseTree->Delete(newChild);
                return;
            }
        } else if (moduleTitle == _("Select")) {
            if (NoiseTree->GetChildrenCount(moduleNode, false) - 1 < 3) {
                NoiseTree->Delete(newChild);
                return;
            }
            wxMultiChoiceDialog addSourceModulesDialog(this, wxT("Please choose three source modules:"),
                wxT("Select source modules"),
                sourceModuleChoices);
            if (addSourceModulesDialog.ShowModal() == wxID_OK) {
                wxArrayInt moduleIndex = addSourceModulesDialog.GetSelections();
                if (moduleIndex.Count() >= 3) {
                    AddModuleProperty(wxT("SourceModule=") + wxString::Format(wxT("%i"), moduleIndex[0]) + wxT(" ")
                                + sourceModuleChoices[moduleIndex[0]]);
                    AddModuleProperty(wxT("SourceModule=") + wxString::Format(wxT("%i"), moduleIndex[1]) + wxT(" ")
                                + sourceModuleChoices[moduleIndex[1]]);
                    AddModuleProperty(wxT("SourceModule=") + wxString::Format(wxT("%i"), moduleIndex[2]) + wxT(" ")
                                + sourceModuleChoices[moduleIndex[2]]);
                    AddModuleProperty(wxT("EdgeFalloff=0.0"));
                    AddModuleProperty(wxT("LowerBound=-1.0"));
                    AddModuleProperty(wxT("UpperBound=1.0"));
                } else {
                    NoiseTree->Delete(newChild);
                    return;
                }
            } else {
                NoiseTree->Delete(newChild);
                return;
            }
        // Miscellaneous
        } else if (moduleTitle == _("Cache")) {
            if (NoiseTree->GetChildrenCount(moduleNode, false) - 1 < 1) {
                NoiseTree->Delete(newChild);
                return;
            }
            wxSingleChoiceDialog addSourceModulesDialog(this, wxT("Please choose one source module:"),
                wxT("Select source module"),
                sourceModuleChoices);
            if (addSourceModulesDialog.ShowModal() == wxID_OK) {
                int moduleIndex = addSourceModulesDialog.GetSelection();
                AddModuleProperty(wxT("SourceModule=")
                                + wxString::Format(wxT("%i"), moduleIndex) + wxT(" ")
                                + addSourceModulesDialog.GetStringSelection());
            } else {
                NoiseTree->Delete(newChild);
                return;
            }
        }
        NoiseTree->SetItemBold(newChild, true);
        NoiseTree->Expand(newChild);
        NoiseTree->ScrollTo(newChild);
        NoiseTree->SelectItem(newChild);
    }
    if (MenuItemAutoRender->IsChecked()) this->RenderTexture(_("Default"));
}

void NoiserFrame::OnNoiseTreeItemRightClick(wxTreeEvent& event)
{
    NoiseTree->SelectItem(NoiseTree->HitTest(event.GetPoint()));
    PopupMenu(&this->MenuList, event.GetPoint());
    if (NoiseTree->GetSelection().IsOk()) rememberItem = NoiseTree->GetSelection();
}

void NoiserFrame::SaveState(wxTreeItemId id, wxXmlNode* node)
{
   if (!node) return;
   if (!id.IsOk()) return;
   node->AddProperty(wxT("Data"), NoiseTree->GetItemText(id));

   wxTreeItemIdValue cookie;
   wxTreeItemId child = NoiseTree->GetFirstChild(id, cookie);
   wxXmlNode* child_node;
   while (child.IsOk()) {
      child_node = new wxXmlNode(wxXML_ELEMENT_NODE, wxT("Item"));
      node->AddChild(child_node);
      SaveState(child, child_node);
      if(child == NoiseTree->GetLastChild(id)) break;
      child = NoiseTree->GetNextChild(id, cookie);
      child_node = child_node->GetNext();
   }
}

void NoiserFrame::LoadState(wxTreeItemId id, wxXmlNode* node)
{
    if (!node) return;
    wxXmlNode* child_node = node->GetChildren();
    while (child_node) {
        wxTreeItemId sub;
        if (child_node->HasProp(wxT("Color"))) {
            ListBoxColors->Append(child_node->GetPropVal(wxT("Color"), wxT("NULL")));
        } else {
            sub = NoiseTree->AppendItem(id, child_node->GetPropVal(wxT("Data"), wxT("NULL")));
            if (NoiseTree->GetItemText(sub) == _("EnableSeamless=false")) this->CheckBoxSeamless->SetValue(false);
            else if (NoiseTree->GetItemText(sub) == _("EnableSeamless=true")) this->CheckBoxSeamless->SetValue(true);
        }
        if (child_node->GetChildren()) NoiseTree->SetItemBold(sub, true);
        LoadState(sub, child_node);
        child_node = child_node->GetNext();
    }
}

void NoiserFrame::SaveSettingsToFile(wxString fileName)
{
    wxXmlDocument document;
    wxTreeItemId root_item = NoiseTree->GetRootItem();
    if (root_item.IsOk()) {
        wxXmlNode* root_node = new wxXmlNode(wxXML_ELEMENT_NODE, wxT("NoiserSettings"));
        document.SetRoot(root_node);
        this->SaveState(root_item, root_node);
        // Colors
        wxArrayString colorPosColors = ListBoxColors->GetStrings();
        for (int i = 0; i < colorPosColors.Count(); i++) {
            wxXmlNode* colorNode = new wxXmlNode(wxXML_ELEMENT_NODE, wxT("ColorItem"));
            colorNode->AddProperty(wxT("Color"), colorPosColors.Item(i));
            root_node->AddChild(colorNode);
        }
        document.Save(fileName);
    }
}

void NoiserFrame::LoadSettingsFromFile(wxString fileName)
{
    wxXmlDocument document(fileName);
    if (document.IsOk()) {
        wxXmlNode* node = document.GetRoot();
        wxString stringProj = node->GetPropVal(wxT("Data"), wxT("NULL"));
        if (parseProjectSet(stringProj)) {
            NoiseTree->DeleteAllItems();
            wxArrayString emptyStringArray;
            ListBoxColors->Set(emptyStringArray);
            wxTreeItemId root = NoiseTree->AddRoot(stringProj);
            NoiseTree->SetItemBold(root, true);
            NoiseTree->SetItemTextColour(root, *wxBLUE);
            this->LoadState(root, node);
            // Show SubNodes
            NoiseTree->CollapseAll();
            wxTreeItemIdValue cookie;
            wxTreeItemId moduleNode = NoiseTree->GetFirstChild(root, cookie);
            wxTreeItemId renderNode = NoiseTree->GetNextChild(root, cookie);
            NoiseTree->Expand(root);
            NoiseTree->Expand(moduleNode);
            NoiseTree->Expand(renderNode);
            requestUpdate = true;
        } else {
            wxMessageBox(wxT("Failed to read Project XML settings."));
        }
    } else {
        wxMessageBox(wxT("Failed to load XML settings."));
    }
}

void NoiserFrame::OnMenuItemSaveAsSelected(wxCommandEvent& event)
{
    wxFileDialog fileDialog(this, wxFileSelectorPromptStr, wxEmptyString, wxEmptyString, _("XML Files (*.xml)|*.xml"), wxSAVE | wxOVERWRITE_PROMPT);
    if (fileDialog.ShowModal() == wxID_OK) {
        rememberSettingsSaveFilename = fileDialog.GetPath();
        this->SaveSettingsToFile(fileDialog.GetPath());
        StatusBar->SetStatusText(_("Settings saved to ") + fileDialog.GetPath());
    }
}

void NoiserFrame::OnMenuItemOpenSelected(wxCommandEvent& event)
{
    wxFileDialog fileOpenDialog(this, wxFileSelectorPromptStr, wxEmptyString, wxEmptyString, _("XML Files (*.xml)|*.xml"), wxFD_OPEN);
    if(fileOpenDialog.ShowModal() == wxID_OK) {
       this->LoadSettingsFromFile(fileOpenDialog.GetPath());
    }
}

void NoiserFrame::OnButtonRenderClick(wxCommandEvent& event)
{
    RenderTexture(_("Default"));
}

void NoiserFrame::OnNoiseTreeBeginLabelEdit(wxTreeEvent& event)
{
    if (NoiseTree->GetRootItem() == event.GetItem()) {
    } else if (NoiseTree->IsBold(event.GetItem())) {
            NoiseTree->EndEditLabel(event.GetItem());
            NoiseTree->SelectItem(event.GetItem());
    }
    if (NoiseTree->GetSelection().IsOk()) rememberItem = NoiseTree->GetSelection();
}

void NoiserFrame::OnMenuItemEditItemSelected(wxCommandEvent& event)
{
    if (NoiseTree->GetSelection().IsOk()) {
        NoiseTree->EditLabel(NoiseTree->GetSelection());
    }
}

void NoiserFrame::OnMenuItemEditAddModuleSelected(wxCommandEvent& event)
{
    AddNoiseDialog();
}

void NoiserFrame::OnMenuItemAddNoiseModuleSelected(wxCommandEvent& event)
{
    AddNoiseDialog();
}

void NoiserFrame::DeleteSelectedModule(void)
{
    wxTreeItemId selectedModule = NoiseTree->GetSelection();
    if (!NoiseTree->IsBold(selectedModule)) return;
    if (NoiseTree->GetItemText(selectedModule) == _("Modules") ||
        NoiseTree->GetItemText(selectedModule) == _("Renderer") ||
        NoiseTree->GetItemText(selectedModule) == _("PlanarTexture") ||
        NoiseTree->GetItemText(selectedModule) == _("SphericalTexture") ||
        NoiseTree->GetItemText(selectedModule) == _("CylindricalTexture") ||
        NoiseTree->GetItemText(selectedModule) == _("Colors") ||
        selectedModule == NoiseTree->GetRootItem())
        return;
    else {
        NoiseTree->Delete(selectedModule);
        requestUpdate = true;
    }
}

void NoiserFrame::OnMenuItemDeleteModuleSelected(wxCommandEvent& event)
{
    DeleteSelectedModule();
}

void NoiserFrame::OnMenuItemEditDeleteModuleSelected(wxCommandEvent& event)
{
    DeleteSelectedModule();
}
void NoiserFrame::OnRadioBoxSurfaceSelect(wxCommandEvent& event)
{
    if (RadioBoxSurface->GetSelection() == 0) CheckBoxSeamless->Show();
    else CheckBoxSeamless->Hide();
    requestUpdate = true;
}

void NoiserFrame::OnButtonColorRemoveClick(wxCommandEvent& event)
{
    ListBoxColors->Delete(ListBoxColors->GetSelection());
    if (ListBoxColors->GetCount() > 2) requestUpdate = true;
}

void NoiserFrame::OnMenuItemRenderToNodeSelected(wxCommandEvent& event)
{
    RenderTexture(_("Default"));
}

void NoiserFrame::OnMenuItemRenderNodeSelected(wxCommandEvent& event)
{
    RenderTexture(_("Default"));
}

void NoiserFrame::OnNoiseTreeKeyDownType(wxTreeEvent& event)
{
    if (NoiseTree->GetSelection().IsOk()) {
        NoiseTree->EditLabel(NoiseTree->GetSelection());
        rememberItem = NoiseTree->GetSelection();
    }
}

void NoiserFrame::OnNoiseTreeEndLabelEdit(wxTreeEvent& event)
{
    if (NoiseTree->GetSelection().IsOk()) {
        rememberItem = NoiseTree->GetSelection();
        requestUpdate = true;
    }
}

void NoiserFrame::OnTimer(wxTimerEvent& event)
{
    if (MenuItemAutoRender->IsChecked() && requestUpdate) {
        requestUpdate = false;
        this->RenderTexture(_("Default"));
    }
}

void NoiserFrame::OnNoiseTreeSelectionChanged(wxTreeEvent& event)
{
    if (runOnce) {
        runOnce = false;
        requestUpdate = true;
    }
}

void NoiserFrame::OnButtonColorAddClick(wxCommandEvent& event)
{
    wxString entry = TextCtrlColorInput->GetValue();
    int index = entry.Find('=');
    if (index == wxNOT_FOUND) {
      StatusBar->SetStatusText(_("Error: Failed to parse color from \"") + entry + _("\". Color ignored."));
      TextCtrlColorInput->SetValue(_("0.0=rgba(128,128,128,255)"));
    } else {
        wxString settingDouble = entry.SubString(0, index-1);
        wxString settingRGBA = entry.SubString(index + 1, entry.Length());
        double parseSettingDouble;
        if (!settingDouble.ToDouble(&parseSettingDouble)) {
            StatusBar->SetStatusText(_("Error: Failed to parse color position from \"") + entry + _("\". Color ignored."));
            TextCtrlColorInput->SetValue(_("0.0=rgba(128,128,128,255)"));
        } else {
            std::vector<int> color = parseRGBA(settingRGBA);
            if (color[0] == -1 || color[1] == -1 || color[2] == -1 || color[3] == -1|| parseSettingDouble < -1.0 || parseSettingDouble > 1.0) {
                StatusBar->SetStatusText(_("Error: Failed to parse color from \"") + entry + _("\". Color ignored."));
                TextCtrlColorInput->SetValue(_("0.0=rgba(128,128,128,255)"));
            } else {
                bool added = false;
                int numListItems = ListBoxColors->GetCount();
                wxString addEntry = settingDouble + _("=rgba(")
                + wxString::Format(wxT("%i"), color[0]) + _(",") + wxString::Format(wxT("%i"), color[1])
                + _(",") + wxString::Format(wxT("%i"), color[2]) + _(",") + wxString::Format(wxT("%i"), color[3]) + _(")");
                for (unsigned int i = 0; i < numListItems; i++) {
                    wxString currentSet = ListBoxColors->GetString(i);
                    int indexPosition = currentSet.Find('=');
                    currentSet = currentSet.SubString(0, indexPosition - 1);
                    double currentDouble = parseDouble(_("Pos=") + currentSet);
                    if (currentDouble > parseSettingDouble) {
                        ListBoxColors->InsertItems(1, &addEntry, i);
                        requestUpdate = true;
                        added = true;
                        break;
                    }
                }
                if (!added) {
                    ListBoxColors->InsertItems(1, &addEntry, numListItems);
                    requestUpdate = true;
                }
            }
        }
    }
}

void NoiserFrame::OnListBoxColorsDoubleClick(wxCommandEvent& event)
{
    int indexSelection = ListBoxColors->GetSelection();
    wxString entry = ListBoxColors->GetString(indexSelection);
    int index = entry.Find('=');
    wxString settingDouble = entry.SubString(0, index-1);
    wxString settingRGBA = entry.SubString(index + 1, entry.Length());
    double parseSettingDouble;
    if (!settingDouble.ToDouble(&parseSettingDouble)) {
        StatusBar->SetStatusText(_("Error: Failed to parse color position from \"") + entry + _("\". Color ignored."));
    } else {
        std::vector<int> color = parseRGBA(settingRGBA);
        if (color[0] == -1 || color[1] == -1 || color[2] == -1 || color[3] == -1|| parseSettingDouble < -1.0 || parseSettingDouble > 1.0) {
            StatusBar->SetStatusText(_("Error: Failed to parse color from \"") + entry + _("\". Color ignored."));
        } else {
            wxColourData colorData;
            colorData.SetChooseFull(true);
            wxColour colorValue(color[0], color[1], color[2]);
            colorData.SetColour(colorValue);
            wxColourDialog colorDialog(this, &colorData);
            if (colorDialog.ShowModal() == wxID_OK) {
                wxColourData returnData = colorDialog.GetColourData();
                wxColour newColor = returnData.GetColour();
                wxString setEntry = settingDouble + _("=rgba(")
                + wxString::Format(wxT("%i"), newColor.Red()) + _(",") + wxString::Format(wxT("%i"), newColor.Green())
                + _(",") + wxString::Format(wxT("%i"), newColor.Blue()) + _(",") + wxString::Format(wxT("%i"), color[3]) + _(")");
                ListBoxColors->SetString(indexSelection, setEntry);
                requestUpdate = true;
            }
        }
    }
}

void NoiserFrame::OnCheckBoxSeamlessClick(wxCommandEvent& event)
{
    requestUpdate = true;
}

void NoiserFrame::OnMenuItemGrayscaleSelected(wxCommandEvent& event)
{
    RenderTexture(_("Grayscale"));
}

void NoiserFrame::OnMenuItemNormalsSelected(wxCommandEvent& event)
{
    RenderTexture(_("Normals"));
}

void NoiserFrame::OnMenuItemExportTerSelected(wxCommandEvent& event)
{
    wxFileDialog fileDialog(this, wxFileSelectorPromptStr, wxEmptyString, wxEmptyString, _("Ter Files (*.ter)|*.ter"), wxSAVE | wxOVERWRITE_PROMPT);
    if(fileDialog.ShowModal() == wxID_OK) {
        this->TerExportPath = fileDialog.GetPath();
        RenderTexture(_("Terr"));
    }
}

void NoiserFrame::OnMenuItemExportRawSelected(wxCommandEvent& event)
{
    wxFileDialog fileDialog(this, wxFileSelectorPromptStr, wxEmptyString, wxEmptyString, _("Raw Files (*.raw)|*.raw"), wxSAVE | wxOVERWRITE_PROMPT);
    if(fileDialog.ShowModal() == wxID_OK) {
        this->RawExportPath = fileDialog.GetPath();
        RenderTexture(_("Raw"));
    }
}

void NoiserFrame::OnMenuItemImageSaveAsSelected(wxCommandEvent& event)
{
    if (NoiseImage->IsOk()) {
        wxFileDialog saveDialog(this, _("Save File As"), wxEmptyString, wxEmptyString,
                            _("*.bmp;*.gif;*.png;*.jpeg;*.tif"),
                            wxSAVE | wxOVERWRITE_PROMPT);
        if (saveDialog.ShowModal() == wxID_OK) {
            wxString filename = saveDialog.GetPath();
            rememberImageSaveFilename = filename;
            if (filename.Find( wxT("jpeg") ) != -1 || filename.Find( wxT("jpg") ) != -1) {
                NoiseImage->SaveFile(saveDialog.GetPath(), wxBITMAP_TYPE_JPEG);
                imageType = wxBITMAP_TYPE_JPEG;
            } else if (filename.Find( wxT("png") ) != -1) {
                NoiseImage->SaveFile(saveDialog.GetPath(), wxBITMAP_TYPE_PNG);
                imageType = wxBITMAP_TYPE_PNG;
            } else if (filename.Find( wxT("bmp") ) != -1) {
                NoiseImage->SaveFile(saveDialog.GetPath(), wxBITMAP_TYPE_BMP);
                imageType = wxBITMAP_TYPE_BMP;
            } else if (filename.Find( wxT("tif") ) != -1) {
                NoiseImage->SaveFile(saveDialog.GetPath(), wxBITMAP_TYPE_TIF);
                imageType = wxBITMAP_TYPE_TIF;
            } else {
                NoiseImage->SaveFile(saveDialog.GetPath(), wxBITMAP_TYPE_GIF);
                imageType = wxBITMAP_TYPE_GIF;
            }
            StatusBar->SetStatusText(_("Image file saved to ") + saveDialog.GetPath());
        }
    }
}

void NoiserFrame::OnMenuItemImageSaveSelected(wxCommandEvent& event)
{
    if (rememberImageSaveFilename == wxEmptyString) {
        wxFileDialog saveDialog(this, _("Save File As"), wxEmptyString, wxEmptyString,
                            _("*.bmp;*.gif;*.png;*.jpeg;*.tif"),
                            wxSAVE);
        if (saveDialog.ShowModal() == wxID_OK) {
            wxString filename = saveDialog.GetPath();
            rememberImageSaveFilename = filename;
            if (filename.Find(wxT("jpeg") ) != -1 || filename.Find( wxT("jpg") ) != -1) {
                NoiseImage->SaveFile(saveDialog.GetPath(), wxBITMAP_TYPE_JPEG);
                imageType = wxBITMAP_TYPE_JPEG;
            } else if (filename.Find( wxT("png") ) != -1) {
                NoiseImage->SaveFile(saveDialog.GetPath(), wxBITMAP_TYPE_PNG);
                imageType = wxBITMAP_TYPE_PNG;
            } else if (filename.Find( wxT("bmp") ) != -1) {
                NoiseImage->SaveFile(saveDialog.GetPath(), wxBITMAP_TYPE_BMP);
                imageType = wxBITMAP_TYPE_BMP;
            } else if (filename.Find( wxT("tif") ) != -1) {
                NoiseImage->SaveFile(saveDialog.GetPath(), wxBITMAP_TYPE_TIF);
                imageType = wxBITMAP_TYPE_TIF;
            } else {
                NoiseImage->SaveFile(saveDialog.GetPath(), wxBITMAP_TYPE_GIF);
                imageType = wxBITMAP_TYPE_GIF;
            }
            StatusBar->SetStatusText(_("Image file saved to ") + saveDialog.GetPath());
        }
    } else {
        NoiseImage->SaveFile(rememberImageSaveFilename, imageType);
        StatusBar->SetStatusText(_("Image file saved to ") + rememberImageSaveFilename);
    }
}

void NoiserFrame::OnMenuItemSaveSelected(wxCommandEvent& event)
{
    if (rememberSettingsSaveFilename == wxEmptyString) {
        wxFileDialog fileDialog(this, wxFileSelectorPromptStr, wxEmptyString, wxEmptyString, _("XML Files (*.xml)|*.xml"), wxFD_SAVE);
        if (fileDialog.ShowModal() == wxID_OK) {
            rememberSettingsSaveFilename = fileDialog.GetPath();
            this->SaveSettingsToFile(fileDialog.GetPath());
            StatusBar->SetStatusText(_("Settings saved to ") + fileDialog.GetPath());
        }
    } else {
        this->SaveSettingsToFile(rememberSettingsSaveFilename);
        StatusBar->SetStatusText(_("Settings saved to ") + rememberSettingsSaveFilename);
    }
}

void NoiserFrame::ZoomUpdate(void)
{
    wxImage noiseImageCopy = this->NoiseImage->Copy();
    noiseImageCopy = noiseImageCopy.Scale(noiseImageCopy.GetWidth() * scope, noiseImageCopy.GetHeight() * scope);
    this->BitmapView->Hide();
    this->BitmapView->SetMaxSize(wxSize(noiseImageCopy.GetWidth(), noiseImageCopy.GetHeight()));
    this->BitmapView->SetMinSize(wxSize(noiseImageCopy.GetWidth(), noiseImageCopy.GetHeight()));
    this->BitmapView->SetBitmap(noiseImageCopy);
    this->BitmapView->Show();
    this->BoxSizerAll->Fit(this);
    this->BoxSizerMain->Fit(this);
    this->BoxSizerHorizontal->Fit(this);
}

void NoiserFrame::OnMenuItemZoom14Selected(wxCommandEvent& event)
{
    this->scope = 0.25;
    this->ZoomUpdate();
}

void NoiserFrame::OnMenuItemZoom12Selected(wxCommandEvent& event)
{
    this->scope = 0.5;
    this->ZoomUpdate();
}

void NoiserFrame::OnMenuItemZoom11Selected(wxCommandEvent& event)
{
    this->scope = 1.0;
    this->ZoomUpdate();
}

void NoiserFrame::OnMenuItemZoom21Selected(wxCommandEvent& event)
{
    this->scope = 2.0;
    this->ZoomUpdate();
}

void NoiserFrame::OnMenuItemAutoRenderSelected(wxCommandEvent& event)
{
    this->sizeReminder = false;
}

void NoiserFrame::OnMenuItemSaveAsQuickSelected(wxCommandEvent& event)
{
    if (NoiseImage->IsOk()) {
        wxFileDialog saveDialog(this, _("Save File As"), wxEmptyString, wxEmptyString,
                            _("*.bmp;*.gif;*.png;*.jpeg;*.tif"),
                            wxSAVE | wxOVERWRITE_PROMPT);
        if (saveDialog.ShowModal() == wxID_OK) {
            wxString filename = saveDialog.GetPath();
            rememberImageSaveFilename = filename;
            if (filename.Find( wxT("jpeg") ) != -1 || filename.Find( wxT("jpg") ) != -1) {
                NoiseImage->SaveFile(saveDialog.GetPath(), wxBITMAP_TYPE_JPEG);
                imageType = wxBITMAP_TYPE_JPEG;
            } else if (filename.Find( wxT("png") ) != -1) {
                NoiseImage->SaveFile(saveDialog.GetPath(), wxBITMAP_TYPE_PNG);
                imageType = wxBITMAP_TYPE_PNG;
            } else if (filename.Find( wxT("bmp") ) != -1) {
                NoiseImage->SaveFile(saveDialog.GetPath(), wxBITMAP_TYPE_BMP);
                imageType = wxBITMAP_TYPE_BMP;
            } else if (filename.Find( wxT("tif") ) != -1) {
                NoiseImage->SaveFile(saveDialog.GetPath(), wxBITMAP_TYPE_TIF);
                imageType = wxBITMAP_TYPE_TIF;
            } else {
                NoiseImage->SaveFile(saveDialog.GetPath(), wxBITMAP_TYPE_GIF);
                imageType = wxBITMAP_TYPE_GIF;
            }
            StatusBar->SetStatusText(_("Image file saved to ") + saveDialog.GetPath());
        }
    }
}
