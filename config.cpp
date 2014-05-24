#include "\clf_radios\description.h"

class DefaultEventhandlers;
class CfgPatches
{
	class clf_radios
	{
		units[] = {};
		weapons[]={};
		author[] = {"C-L-F Raspu"};
		requiredVersion=0.1;
		requiredAddons[]={"task_force_radio_items"};
	};
};

class CfgVehicles {

	class TFAR_Bag_Base;

	class clf_prc117g_ap: TFAR_Bag_Base
	{
		scope=1;
		displayName="Assault Pack AN/PRC117G";
		picture="\clf_radios\data\clf_prc117g_ap_icon.paa";
		icon="iconBackpack";
		model="\clf_radios\clf_prc117g_ap.p3d";
		maximumLoad=30;
		mass=20;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		transportMaxWeapons=0;
		transportMaxMagazines=4;
		class DestructionEffects
		{
		};
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anprc117g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
	};

	class clf_prc117g_ap_multi: clf_prc117g_ap {
		scope = 2;
		model = "\clf_radios\clf_prc117g_ap.p3d";
		displayName = "Assault Pack AN/PRC117G (Multicam)";
		hiddenSelections[] = 
		{"camo"};
		hiddenSelectionsTextures[] = {"\clf_radios\data\clf_prc117g_ap_co.paa"};
	};

	class clf_nicecomm2: TFAR_Bag_Base
	{
		scope=1;
		displayName="NICE COMM 2 US Falcon III";
		picture="\clf_radios\data\clf_nicecomm2_icon.paa";
		icon="iconBackpack";
		model="\clf_radios\clf_nicecomm2.p3d";
		maximumLoad=60;
		mass=40;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		transportMaxWeapons=0;
		transportMaxMagazines=10;
		class DestructionEffects
		{
		};
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "falconiiimc_radio_dialog";
		tf_subtype = "digital_lr";
		tf_dialogUpdate = "[""0%1""] call CLF_fnc_updateAddLRDialogToChannel;";
	};

	class clf_nicecomm2_multi: clf_nicecomm2 {
		scope = 2;
		model = "\clf_radios\clf_nicecomm2.p3d";
		displayName = "NICE COMM 2 US Falcon III (Multicam)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\clf_radios\data\clf_nicecomm2_co.paa"};
	};

	class clf_nicecomm2_coy: clf_nicecomm2 {
		scope = 2;
		model = "\clf_radios\clf_nicecomm2.p3d";
		displayName = "NICE COMM 2 US Falcon III (Coyote)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\clf_radios\data\clf_nicecomm2_coyote_co.paa"};
	};

	class clf_nicecomm2_prc117g: TFAR_Bag_Base
	{
		scope=1;
		displayName="NICE COMM 2 US Falcon III";
		picture="\clf_radios\data\clf_nicecomm2_icon.paa";
		icon="iconBackpack";
		model="\clf_radios\clf_nicecomm2.p3d";
		maximumLoad=60;
		mass=40;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		transportMaxWeapons=0;
		transportMaxMagazines=10;
		class DestructionEffects
		{
		};
		tf_encryptionCode = "tf_west_radio_code";
		tf_subtype = "digital_lr";
		tf_dialog = "anprc117g_radio_dialog";
		tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
	};

	class clf_nicecomm2_prc117g_multi: clf_nicecomm2_prc117g {
		scope = 2;
		model = "\clf_radios\clf_nicecomm2_prc117g.p3d";
		displayName = "NICE COMM 2 US AN/PRC-117G (Multicam)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\clf_radios\data\clf_nicecomm2_co.paa"};
	};

	class clf_nicecomm2_prc117g_coy: clf_nicecomm2_prc117g {
		scope = 2;
		model = "\clf_radios\clf_nicecomm2_prc117g.p3d";
		displayName = "NICE COMM 2 US AN/PRC-117G (Coyote)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\clf_radios\data\clf_nicecomm2_coyote_co.paa"};
	};		
};

#include "\task_force_radio_items\radio_ids.hpp"

class CfgWeapons
{
	class ItemRadio;

		class clf_trc9110: ItemRadio
	{
		scope=2;
		displayName="TRC 9110";
		picture="\clf_radios\data\clf_trc9110_icon.paa";
		icon="iconBackpack";
		model="\clf_radios\clf_trc9110.p3d";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "trc9110_radio_dialog";
		tf_subtype = "digital";
		tf_dialogUpdate = "call TFAR_fnc_updateSWDialogToChannel;";
		tf_prototype = 1;
		tf_range = 6000;
		tf_parent = "clf_trc9110";
	};

	TF_RADIO_IDS(clf_trc9110,TRC 9110)
};

#include "\clf_radios\CfgFunctions.h"