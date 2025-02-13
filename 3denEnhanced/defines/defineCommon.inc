//GUI and script related macros
#include "..\defines\macros.inc"

//DIK Key Codes
#include "..\defines\definedikcodes.inc"

//Common GRIDs
#include "..\defines\definecommongrids.inc"

//Eden Editor IDDs and IDCs as well as controls types and styles and macros
#include "..\defines\resincl.inc"

#define SHOW_IN_ROOT value = 0
#define EDIT_W 10
#define EDIT_W_WIDE 11
#define CENTERED_X(w) (CENTER_X - (w / 2 * GRID_W))
#define DIALOG_TOP (safezoneY + 17 * GRID_H)
#define CTRL_DEFAULT_H (SIZE_M * GRID_H)

//Top of all UIs
#define WINDOW_TOP (0.5 - WINDOW_HAbs * 0.5 + 5 * GRID_H)

//Either uses full width and leaves only 5 grids left and right,
//or it uses a maximum of 400 grids. This way, on ultra wide and super ultra wide,
//the UI will not become too wide
#define WINDOW_WAbs ((safezoneW / GRID_W - 10) min 400)

//Width of edit attributes window
#define WINDOW_W_ATTRIBUTES 140

//Statusbar
#define SPACE_X (2 * pixelW)
#define ORIGIN_X_STATUSBAR (safezoneW - 60 * GRID_W)

//Macros for scripting
#define CTRL(IDC) (_display displayCtrl IDC)

#define TEXTURE_SEARCH_START "\a3\3DEN\Data\Displays\Display3DEN\search_start_ca.paa"
#define TEXTURE_SEARCH_END "\a3\3DEN\Data\Displays\Display3DEN\search_end_ca.paa"

//3den Enhanced specific IDDs and IDCs
#define IDD_3DENRADIO 60000
#define IDC_3DENRADIO_CURRENTSONG 700
#define IDC_3DENRADIO_FILTER 200
#define IDC_3DENRADIO_POSITION 800
#define IDC_3DENRADIO_SEARCH 600
#define IDC_3DENRADIO_SONGLIST 100
#define IDC_3DENRADIO_SORT 500
#define IDC_3DENRADIO_TIME 900
#define IDC_3DENRADIO_TOGGLERADIO 300
#define IDC_3DENRADIO_VOLUME 400

#define IDD_ACTIONCREATOR 190000
#define IDC_ACTIONCREATOR_ARGUMENTS 1401
#define IDC_ACTIONCREATOR_CONDITION 1403
#define IDC_ACTIONCREATOR_HIDEONUSE 1406
#define IDC_ACTIONCREATOR_OK -1
#define IDC_ACTIONCREATOR_PRIORITY 1402
#define IDC_ACTIONCREATOR_RADIUS 1404
#define IDC_ACTIONCREATOR_SCRIPT 1400
#define IDC_ACTIONCREATOR_SHORTCUT 1405
#define IDC_ACTIONCREATOR_SHOWUNCONCIOUS 1000
#define IDC_ACTIONCREATOR_SHOWWINDOW 1407
#define IDC_ACTIONCREATOR_TITLE 1408

#define IDD_BATCHREPLACE 150000
#define IDC_BATCHREPLACE_LIST 1600
#define IDC_BATCHREPLACE_PREVIEW 1700
#define IDC_BATCHREPLACE_REPLACEWITH 1400
#define IDC_BATCHREPLACE_SEARCH 1500

#define IDD_BRIEFINGEDITOR -1
#define IDC_BRIEFINGEDITOR_BRIEFINGTEXT 10
#define IDC_BRIEFINGEDITOR_COLOURS 100
#define IDC_BRIEFINGEDITOR_FIRSTPARAM 200
#define IDC_BRIEFINGEDITOR_FIRSTPARAMVALUE 210
#define IDC_BRIEFINGEDITOR_FONTS 70
#define IDC_BRIEFINGEDITOR_HIGHLIGHT 50
#define IDC_BRIEFINGEDITOR_MARKERS 60
#define IDC_BRIEFINGEDITOR_SECONDPARAM 220
#define IDC_BRIEFINGEDITOR_SECONDPARAMVALUE 230
#define IDC_BRIEFINGEDITOR_SHOWTITLE 40
#define IDC_BRIEFINGEDITOR_SUBJECT 20
#define IDC_BRIEFINGEDITOR_TAGS 90
#define IDC_BRIEFINGEDITOR_TEMPLATES 80
#define IDC_BRIEFINGEDITOR_THIRDPARAM 240
#define IDC_BRIEFINGEDITOR_THIRDPARAMVALUE 250
#define IDC_BRIEFINGEDITOR_TITLE 30

#define IDD_CREATEOBJECT -1
#define IDC_CREATEOBJECT_CLOSE -1
#define IDC_CREATEOBJECT_LIST 20
#define IDC_CREATEOBJECT_MODE 10

#define IDC_DISPLAY3DEN_FAVORITES 1337
#define IDC_DISPLAY3DEN_FAVORITES_PREVIEWIMAGE 15000
#define IDC_DISPLAY3DEN_FAVORITES_PREVIEWIMAGEBG 15001

#define IDD_ESE -1
#define IDD_TEMPLATEDATA 500
#define IDC_ESE_AVAILABLEITEMSLIST 2200
#define IDC_ESE_BUTTONSEARCH 3500
#define IDC_ESE_COMPATIBLEITEMSLIST 4100
#define IDC_ESE_FILTER 2100
#define IDC_ESE_FILTERSEARCH 3300
#define IDC_ESE_INVENTORYLIST 2300
#define IDC_ESE_MENU 4000
#define IDC_ESE_SAVE 3900
#define IDC_ESE_SEARCH 3400
#define IDC_ESE_TEMPLATEDATA_DESCRIPTION 30800
#define IDC_ESE_TEMPLATEDATA_TITLE 30700
#define IDC_ESE_TEMPLATESLIST 4200

#define IDD_EXPORTGUIDEFINES 14000

#define IDD_FUNCTIONSVIEWER -1
#define IDC_FUNCTIONSVIEWER_CODE 1401
#define IDC_FUNCTIONSVIEWER_GROUP 5000
#define IDC_FUNCTIONSVIEWER_LINES 1404
#define IDC_FUNCTIONSVIEWER_LIST 1500
#define IDC_FUNCTIONSVIEWER_MENU 2200
#define IDC_FUNCTIONSVIEWER_NAME 1402
#define IDC_FUNCTIONSVIEWER_NUMFUNCTIONS 1405
#define IDC_FUNCTIONSVIEWER_PANNEL 1406
#define IDC_FUNCTIONSVIEWER_PATH 1403
#define IDC_FUNCTIONSVIEWER_SEARCH 1400
#define IDC_FUNCTIONSVIEWER_SEARCHCODE 2000
#define IDC_FUNCTIONSVIEWER_SEARCHTEXT 2100

#define IDC_GARRISON_BLACKLIST_TOGGLE 20000
#define IDC_GARRISON_BLACKLIST_VALUE 20002
#define IDC_GARRISON_CANCEL 20009
#define IDC_GARRISON_COVERAGE 20003
#define IDC_GARRISON_GROUP 20100
#define IDC_GARRISON_INFO 20006
#define IDC_GARRISON_MODE 20004
#define IDC_GARRISON_OK 20010
#define IDC_GARRISON_PATH 20005
#define IDC_GARRISON_STANCE 20007
#define IDC_GARRISON_UPDATE_SELECTION 20008

#define IDD_MODULEINFORMATION -1
#define IDC_MODULEINFORMATION_DESCRIPTION 1400
#define IDC_MODULEINFORMATION_DIRECTION 1403
#define IDC_MODULEINFORMATION_DUPLICATE 1402
#define IDC_MODULEINFORMATION_POSITION 1401
#define IDC_MODULEINFORMATION_SYNC 1404

#define IDD_NAMEOBJECTS 80000
#define IDC_NAMEOBJECTS_INDEXSTART 1100
#define IDC_NAMEOBJECTS_OK -1
#define IDC_NAMEOBJECTS_VARIABLENAME 1000

#define IDD_PLACEMENTTOOLS -1
#define IDC_PLACEMENTTOOLS_A 80
#define IDC_PLACEMENTTOOLS_B 90
#define IDC_PLACEMENTTOOLS_CENTRALANGLE 30
#define IDC_PLACEMENTTOOLS_CURRENTVALUE 120
#define IDC_PLACEMENTTOOLS_FINECONTROL 250
#define IDC_PLACEMENTTOOLS_INITIALANGLE 20
#define IDC_PLACEMENTTOOLS_NUMCOLUMNS 50
#define IDC_PLACEMENTTOOLS_RADIUS 10
#define IDC_PLACEMENTTOOLS_SPACEX 60
#define IDC_PLACEMENTTOOLS_SPACEY 70
#define IDC_PLACEMENTTOOLS_SPACING 40

#define IDC_RPTVIEWER_EDIT 202
#define IDC_RPTVIEWER_GROUP 201
#define IDC_RPTVIEWER_LINES 203
#define IDC_RPTVIEWER_TITLE 200

#define IDD_SAM 160000
#define IDD_SAM_TEMPLATEDATA -1
#define IDC_SAM_ATTRIBUTES 1500
#define IDC_SAM_SEARCH 1400
#define IDC_SAM_TEMPLATEDATA_DESCRIPTION 1401
#define IDC_SAM_TEMPLATEDATA_TITLE 1400
#define IDC_SAM_TEMPLATES 1501

#define IDD_SENTENCESBROWSER -1
#define IDC_SENTENCESBROWSER_COUNT 3000
#define IDC_SENTENCESBROWSER_FAVORITES 4000
#define IDC_SENTENCESBROWSER_FILTER 5000
#define IDC_SENTENCESBROWSER_LIST 2000
#define IDC_SENTENCESBROWSER_PAGES 1000
#define IDC_SENTENCESBROWSER_SEARCH 10000

#define IDC_SHORTCUTS_CLOSE 1
#define IDC_SHORTCUTS_CONTENT 50
#define IDC_SHORTCUTS_CONTENTBG 20
#define IDC_SHORTCUTS_DISABLEDBG 80
#define IDC_SHORTCUTS_DISABLEDTILESBG 90
#define IDC_SHORTCUTS_FILTER 70
#define IDC_SHORTCUTS_FILTERBG 60
#define IDC_SHORTCUTS_FOOTER 100
#define IDC_SHORTCUTS_SEARCH 30
#define IDC_SHORTCUTS_SEARCHICON 40
#define IDC_SHORTCUTS_TITLE 10

#define IDC_STATUSBAR_CAMDIR 681
#define IDC_STATUSBAR_ICONGROUPS 678
#define IDC_STATUSBAR_ICONMARKERS 670
#define IDC_STATUSBAR_ICONOBJECTS 680
#define IDC_STATUSBAR_ICONSYSTEMS 672
#define IDC_STATUSBAR_ICONTRIGGERS 676
#define IDC_STATUSBAR_ICONWAYPOINTS 674
#define IDC_STATUSBAR_NUMGROUPS 677
#define IDC_STATUSBAR_NUMMARKERS 669
#define IDC_STATUSBAR_NUMOBJECTS 679
#define IDC_STATUSBAR_NUMSYSTEMS 671
#define IDC_STATUSBAR_NUMTRIGGERS 675
#define IDC_STATUSBAR_NUMWAYPOINTS 673
#define IDC_STATUSBAR_SESSIONTIMER 668

#define IDD_TEXTUREFINDER 140000
#define IDC_TEXTUREFINDER_COLLAPSEALL 106
#define IDC_TEXTUREFINDER_EXPANDALL 107
#define IDC_TEXTUREFINDER_PREVIEW 102
#define IDC_TEXTUREFINDER_PREVIEWBACKGROUND 105
#define IDC_TEXTUREFINDER_PROGRESS 101
#define IDC_TEXTUREFINDER_PROGRESSTEXT 103
#define IDC_TEXTUREFINDER_SEARCH 104
#define IDC_TEXTUREFINDER_TEXTURELIST 100

#define IDD_VAM -1
#define IDC_VAM_ACCTREEVIEW 15
#define IDC_VAM_ACE_CHECKBOX 20
#define IDC_VAM_BI_CHECKBOX 25
#define IDC_VAM_PREVIEW_PICTURE 30
#define IDC_VAM_PROGRESS_1 40
#define IDC_VAM_PROGRESS_2 50
#define IDC_VAM_PROGRESS_3 60
#define IDC_VAM_PROGRESS_4 70
#define IDC_VAM_PROGRESS_5 80
#define IDC_VAM_PROGRESS_TEXT_1 90
#define IDC_VAM_PROGRESS_TEXT_2 100
#define IDC_VAM_PROGRESS_TEXT_3 110
#define IDC_VAM_PROGRESS_TEXT_4 120
#define IDC_VAM_PROGRESS_TEXT_5 130
#define IDC_VAM_SEARCH 645
#define IDC_VAM_TREEVIEW 10

#define IDD_VARIABLEVIEWER 500
#define IDC_VARIABLEVIEWER_FILTER 501
#define IDC_VARIABLEVIEWER_HIDEFUNCTIONS 502
#define IDC_VARIABLEVIEWER_LIST 503
#define IDC_VARIABLEVIEWER_NAMESPACE 504
#define IDC_VARIABLEVIEWER_SEARCH 505
#define IDC_VARIABLEVIEWER_SEARCHBUTTON 506
#define IDC_VARIABLEVIEWER_SET 507
#define IDC_VARIABLEVIEWER_DELETE 508
#define IDC_VARIABLEVIEWER_VARIABLECOUNT 509
#define IDC_VARIABLEVIEWER_VARIABLENAME 510
#define IDC_VARIABLEVIEWER_VARIABLEVALUE 511

#define IDC_ZEUSADDONS_CFGPATCHES 10
#define IDC_ZEUSADDONS_COLLAPSE 60
#define IDC_ZEUSADDONS_EXPAND 70
#define IDC_ZEUSADDONS_EXPORT 30
#define IDC_ZEUSADDONS_INVERT 40
#define IDC_ZEUSADDONS_SEARCH 50
#define IDC_ZEUSADDONS_UNITS 20