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
	};

	class clf_prc117g_ap_Multi: clf_prc117g_ap {
		scope = 2;
		model = "\clf_radios\clf_prc117g_ap.p3d";
		displayName = "Assault Pack AN/PRC117G (Multicam)";
		hiddenSelections[] = 
		{"camo"};
		hiddenSelectionsTextures[] = {"\clf_radios\data\clf_prc117g_ap_co.paa"};
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anprc117g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
	};

		class clf_trc9110: TFAR_Bag_Base
	{
		scope=2;
		displayName="TRC 9110";
		picture="\clf_radios\data\clf_trc9110_icon.paa";
		icon="iconBackpack";
		model="\clf_radios\clf_trc9110.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		maximumLoad=0;
		mass=10;
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
		transportMaxMagazines=0;
		class DestructionEffects
		{
		};
	};

		class clf_nicecomm2: TFAR_Bag_Base
	{
		scope=1;
		displayName="NICE COMM 2 US Falcon III";
		picture="\clf_radios\data\clf_nicecomm2_icon.paa";
		icon="iconBackpack";
		model="\clf_radios\clf_nicecomm2.p3d";
		maximumLoad=60;
		mass=35;
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
	};

	class clf_nicecomm2_Multi: clf_nicecomm2 {
		scope = 2;
		model = "\clf_radios\clf_nicecomm2.p3d";
		displayName = "NICE COMM 2 US Falcon III (Multicam)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\clf_radios\data\clf_nicecomm2_co.paa"};
	};

	class clf_nicecomm2_Coyote: clf_nicecomm2 {
		scope = 2;
		model = "\clf_radios\clf_nicecomm2.p3d";
		displayName = "NICE COMM 2 US Falcon III (Coyote)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\clf_radios\data\clf_nicecomm2_coyote_co.paa"};
	};		
};