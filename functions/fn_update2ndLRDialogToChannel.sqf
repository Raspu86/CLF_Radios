/*
 	Name: CLF_fnc_update2nLRDialogToChannel

 	Author(s):
		NKey
		L-H
		edited under tears by Raspu

 	Description:
		Updates the LR dialog to the channel if switched.

 	Parameters:
		0: STRING - Format to display channel with. Requires %1. (Optional)

 	Returns:
		Nothing

 	Example:
		// No custom format.
		call TFAR_fnc_updateLRDialogToChannel;
		// Custom format
		["CH: %1"] call TFAR_fnc_updateLRDialogToChannel;
*/
#include "\clf_radios\define.h"
//#include "\task_force_radio\define.h"
private ["_channelText", "_formatText"];
_formatText = "0%1";

if ((typename(_this) == typename ([])) and {count _this > 0} and  {typename (_this select 0) == (typename "")}) then {
	_formatText = _this select 0;
};

if ((TF_lr_dialog_radio call TFAR_fnc_getAdditionalLrChannel) == (TF_lr_dialog_radio call TFAR_fnc_getLrChannel)) then {
	_formatText = "CA:%1";
};

if ((TF_lr_dialog_radio call TFAR_fnc_getAdditionalLrChannel) > -1) then {
	ctrlSetText [LR_AD_EDIT, [TF_lr_dialog_radio, (TF_lr_dialog_radio call TFAR_fnc_getAdditionalLrChannel) + 1] call TFAR_fnc_GetChannelFrequency];
};
_channelText =  format[_formatText, (TF_lr_dialog_radio call TFAR_fnc_getAdditionalLrChannel) + 1];
ctrlSetText [LR_AD_CHANNEL, _channelText];