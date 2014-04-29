#include "\clf_radios\description.h"

class DefaultEventhandlers;
class CfgPatches
{
	class clf_radios
	{
		units[] = {"tfar_ModuleTaskForceRadioEnforceUsage", "tfar_ModuleTaskForceRadio", "tfar_ModuleTaskForceRadioFrequencies"};
		weapons[]={};
		author[] = {"C-L-F Raspu"};
		requiredVersion=0.1;
		requiredAddons[]={"task_force_radio_items"};
	};
};

class CfgVehicles {
	class Bag_Base
	{
		tf_hasLRradio = 0;
		tf_encryptionCode = "";		
		tf_range = 20000;
	};
	class TFAR_Bag_Base: Bag_Base 
	{
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		maximumLoad = 100;
		mass = 15;		
		tf_hasLRradio = 1;
		model = "\task_force_radio_items\models\TFR_BACKPACK";		
	};

	class clf_prc117g_ap: Bag_Base
	{
		scope=2;
		displayName="Assault Pack AN/PRC117G";
		picture="\clf_radios\data\clf_prc117g_ap_icon.paa";
		icon="iconBackpack";
		model="\clf_radios\clf_prc117g_ap.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
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

		class clf_trc9110: Bag_Base
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
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anprc117g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
	};

	class clf_nicecomm2_UCP: clf_nicecomm2 {
		scope = 2;
		model = "\clf_radios\clf_nicecomm2.p3d";
		displayName = "NICE COMM 2 US Falcon III (UCP)";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\clf_radios\data\clf_nicecomm2_ucp_co.paa"};
	};

	class clf_nicecomm2_Fleck: clf_nicecomm2 {
		scope = 2;
		model = "\clf_radios\clf_nicecomm2.p3d";
		displayName = "NICE COMM 2 US Falcon III (Flecktarn)";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\clf_radios\data\clf_nicecomm2_fleck_co.paa"};
	};	

	class clf_nicecomm2_Coyote: clf_nicecomm2 {
		scope = 2;
		model = "\clf_radios\clf_nicecomm2.p3d";
		displayName = "NICE COMM 2 US Falcon III (Coyote)";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\clf_radios\data\clf_nicecomm2_coyote_co.paa"};
	};		
};

#include "\task_force_radio_items\radio_ids.hpp"
