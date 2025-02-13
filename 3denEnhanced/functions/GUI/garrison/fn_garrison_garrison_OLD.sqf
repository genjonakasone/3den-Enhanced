/*
  Author: R3vo

  Date: 2019-08-03

  Description:
  Garrison one or multiple buildings in the area. Radius and coverage are taken from the custom UI ENH_Garrison.

  Parameter(s):
  CONTROL: Button control

  Returns:
  -
*/

#include "\3denEnhanced\defines\defineCommon.inc"

disableSerialization;

params ["_ctrlButton"];
private _display = ctrlParent _ctrlButton;

private _positions = [];
private _selectedObjects = [["Object", "Logic", "Trigger", "Marker"]] call ENH_fnc_all3DENSelected;
private _center = (uiNamespace getVariable "bis_fnc_3DENEntityMenu_data") # 0;
_center set [2, 0];

private _radius = ctrlText CTRL(IDC_GARRISON_RADIUS);
private _index = lbCurSel CTRL(IDC_GARRISON_COVERAGE);
private _step = CTRL(IDC_GARRISON_COVERAGE) lbValue _index;
private _stance = lbCurSel CTRL(IDC_GARRISON_STANCE);

//Save settings
profileNamespace setVariable ['ENH_garrison_lastRadius', _radius];
profileNamespace setVariable ['ENH_garrison_lastCoverage', _index];
profileNamespace setVariable ['ENH_garrison_lastStance', _stance];

//Get nearest buildings
//Get all building positions from nearby buildings
#define BUILDINGPOS (_x buildingPos -1)
{
for "_i" from 0 to (count BUILDINGPOS - 1) step _step do
  {
    _positions pushBack (_x buildingPos _i);
  };
  false;
} count (_center nearObjects ["House", parseNumber _radius]);

//Place units inside buildings
collect3DENHistory
{
  {
    private _pos = selectRandom _positions;
    _positions = _positions - [_pos];

    if (count _positions == 0) exitWith
    {
      [localize "STR_ENH_GARRISON_NOTIFICATION", 1] call BIS_fnc_3DENNotification;
    };
    if(surfaceIsWater _pos) then
    {
      _x set3DENAttribute ["position", ASLToATL _pos];
    }
    else
    {
      _x set3DENAttribute ["position", _pos];
    };
    switch (_stance) do
    {
      case 0:
      {
        _x set3DENAttribute ["UnitPos", 3];
      };
      case 1:
      {
        _x set3DENAttribute ["UnitPos", 1];
      };
      case 2:
      {
        _x set3DENAttribute ["UnitPos", selectRandom [1, 3]];
      };
    };
    _x set3DENAttribute ["rotation", [0, 0, random 360]];
  } forEach _selectedObjects;
};

_display closeDisplay 0;