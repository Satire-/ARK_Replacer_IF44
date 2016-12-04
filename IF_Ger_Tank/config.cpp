////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.97
//Sun Dec 04 17:28:13 2016 : Source 'file' date Sun Dec 04 17:28:13 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class ww2_assets_c_characters_germans_c : GER_TankTroops\Gear\config.bin{
class CfgPatches
{
	class IF_Ger_Tank
	{
		units[] = {};
		weapons[] = {"U_LIB_GER_Tank_crew_private","U_LIB_GER_Tank_crew_unterofficer","U_LIB_GER_Tank_crew_leutnant","U_LIB_GER_Spg_crew_private","U_LIB_GER_Spg_crew_unterofficer","U_LIB_GER_Spg_crew_leutnant","V_LIB_GER_TankPrivateBelt","H_LIB_GER_TankOfficerCap","H_LIB_GER_TankPrivateCap","H_LIB_GER_SPGPrivateCap"};
		requiredVersion = 0.1;
		requiredAddons[] = {"WW2_Core_c_Core_c","WW2_Assets_c_Characters_CustomFaces_c","WW2_Assets_c_Characters_Germans_c_GER_Wehrmacht"};
	};
};
class cfgWeapons
{
	class U_BasicBody;
	class U_LIB_BasicBody: U_BasicBody
	{
		class ItemInfo;
	};
	class U_LIB_GER_Tank_crew_private: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_Tank_crew_private";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_TankTroops_ger_tank_crew_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_TankTroops\ger_tank_crew_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_tank_crew";
            containerClass = "Supply140";
		};
	};
	class U_LIB_GER_Tank_crew_unterofficer: U_LIB_GER_Tank_crew_private
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_Tank_crew_unterofficer";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_TankTroops_ger_tank_unterofficer_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_TankTroops\ger_tank_crew_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_tank_unterofficer";
            containerClass = "Supply140";
		};
	};
	class U_LIB_GER_Tank_crew_leutnant: U_LIB_GER_Tank_crew_private
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_Tank_crew_leutnant";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_TankTroops_ger_tank_officer_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_TankTroops\ger_tank_crew_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_tank_lieutenant";
            containerClass = "Supply140";
		};
	};
	class U_LIB_GER_Spg_crew_private: U_LIB_GER_Tank_crew_private
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_Spg_crew_private";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_TankTroops_ger_spg_crew_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_TankTroops\ger_spg_crew_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_spg_crew";
            containerClass = "Supply140";
		};
	};
	class U_LIB_GER_Spg_crew_unterofficer: U_LIB_GER_Tank_crew_private
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_Spg_crew_unterofficer";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_TankTroops_ger_spg_unterofficer_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_TankTroops\ger_spg_crew_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_spg_unterofficer";
            containerClass = "Supply140";
		};
	};
	class U_LIB_GER_Spg_crew_leutnant: U_LIB_GER_Tank_crew_private
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_Spg_crew_leutnant";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_TankTroops_ger_spg_officer_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_TankTroops\ger_spg_crew_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_spg_lieutenant";
            containerClass = "Supply140";
		};
	};
	class ItemCore;
	class V_LIB_Vest_Camo_Base;
	class VestItem;
	class V_LIB_GER_TankPrivateBelt: V_LIB_Vest_Camo_Base
	{
		scope = 2;
		displayName = "$STR_CTH_V_LIB_GER_TankPrivateBelt";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_GER_TankTroops_ger_private_belt_ca.paa";
		model = "\WW2\Assets_m\Characters\Germans_m\GER_TankTroops\WW2_Tank_private_belt.p3d";
		hiddenSelections[] = {"camo","camoB"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_equipment_0_co.paa","\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_soldier_0_camo_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Germans_m\GER_TankTroops\WW2_Tank_private_belt.p3d";
			containerClass = "Supply140";
			hiddenSelections[] = {"camo","camoB"};
		};
	};
};
//};
