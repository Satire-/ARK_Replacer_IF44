////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.97
//Sun Dec 04 16:04:31 2016 : Source 'file' date Sun Dec 04 16:04:31 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class ww2_assets_c_characters_soviets_c : SOV_RKKA\Gear\config.bin{
class CfgPatches
{
	class IF_Sov
	{
		units[] = {"B_LIB_SOV_RA_GasBag","B_LIB_SOV_RA_Paradrop","B_LIB_SOV_RA_MedicalBag","B_LIB_SOV_RA_Radio","B_LIB_SOV_RA_Rucksack","B_LIB_SOV_RA_MGAmmoBag","B_LIB_SOV_RA_MedicalBag_Empty","B_LIB_SOV_RA_Rucksack_Green","B_LIB_SOV_RA_MGAmmoBag_Empty"};
		weapons[] = {"U_LIB_SOV_Strelok","U_LIB_SOV_Strelokart","U_LIB_SOV_Tank_private_field","U_LIB_SOV_Starshina","U_LIB_SOV_Efreitor","U_LIB_SOV_Sergeant","U_LIB_SOV_Sergeant_inset_pocket","U_LIB_SOV_Stsergeant","U_LIB_SOV_Leutenant","U_LIB_SOV_Pilot","U_LIB_SOV_Leutenant_inset_pocket","U_LIB_SOV_Artleutenant","U_LIB_SOV_Stleutenant","U_LIB_SOV_Kapitan","U_LIB_SOV_Razvedchik_am","U_LIB_SOV_Razvedchik_lis","U_LIB_SOV_Razvedchik_mix","U_LIB_SOV_Sniper","U_LIB_SOV_Tank_ryadovoi","U_LIB_SOV_Tank_sergeant","U_LIB_SOV_Tank_leutenant","U_LIB_SOV_Tank_kapitan","H_LIB_SOV_RA_PrivateCap","H_LIB_SOV_RA_OfficerCap","H_LIB_SOV_RA_Helmet","H_LIB_SOV_TankHelmet","H_LIB_SOV_PilotHelmet","V_LIB_SOV_IShBrVestMG","V_LIB_SOV_IShBrVestPPShMag","V_LIB_SOV_IShBrVestPPShDisc","V_LIB_SOV_RA_OfficerVest","V_LIB_SOV_RA_SniperVest","V_LIB_SOV_RA_Belt","V_LIB_SOV_RA_TankOfficerSet","V_LIB_SOV_RA_PPShBelt","V_LIB_SOV_RA_MosinBelt","V_LIB_SOV_RA_SVTBelt","V_LIB_SOV_RA_MGBelt","V_LIB_SOV_RAZV_SVTBelt","V_LIB_SOV_RAZV_OfficerVest","V_LIB_SOV_RAZV_MGBelt","V_LIB_SOV_RAZV_PPShBelt"};
		requiredVersion = 0.1;
		requiredAddons[] = {"WW2_Core_c_Core_c","WW2_Assets_c_Characters_Soviets_c_SOV_RKKA"};
	};
};
class cfgWeapons
{
	class U_BasicBody;
	class U_LIB_BasicBody: U_BasicBody
	{
		class ItemInfo;
	};
	class U_LIB_SOV_Strelok: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_SOV_Strelok";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_SOV_RKKA_sov_soldier_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_soldier_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_SOV_smgunner";
            containerClass = "Supply140";
		};
	};
	class U_LIB_SOV_Strelokart: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_SOV_Strelokart";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_SOV_RKKA_sov_soldier_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\Soviet_arty_tank_crew_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_SOV_gun_crew";
            containerClass = "Supply140";
		};
	};
	class U_LIB_SOV_Tank_private_field: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_SOV_Tank_private_field";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_SOV_RKKA_Soviet_tank_private_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_tank_crew_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_SOV_tank_overall_crew";
            containerClass = "Supply140";
		};
	};
	class U_LIB_SOV_Starshina: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_SOV_Starshina";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_SOV_RKKA_Soviet_starshina_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_soldier_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_SOV_p_officer";
            containerClass = "Supply140";
		};
	};
	class U_LIB_SOV_Efreitor: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_SOV_Efreitor";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_SOV_RKKA_Soviet_efreitor_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_soldier_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_SOV_LC_rifleman";
            containerClass = "Supply140";
		};
	};
	class U_LIB_SOV_Sergeant: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_SOV_Sergeant";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_SOV_RKKA_Soviet_sergeant_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_soldier_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_SOV_sergeant";
            containerClass = "Supply140";
		};
	};
	class U_LIB_SOV_Sergeant_inset_pocket: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_SOV_Sergeant_inset_pocket";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_SOV_RKKA_Soviet_sergeant_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_tank_crew_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_SOV_gun_sergeant";
            containerClass = "Supply140";
		};
	};
	class U_LIB_SOV_Stsergeant: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_SOV_Stsergeant";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_SOV_RKKA_Soviet_arty_tank_starshii_serjant_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_soldier_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_SOV_staff_sergeant";
            containerClass = "Supply140";
		};
	};
	class U_LIB_SOV_Leutenant: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_SOV_Leutenant";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_SOV_RKKA_sov_officer_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_officer_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_SOV_lieutenant";
            containerClass = "Supply140";
		};
	};
	class U_LIB_SOV_Pilot: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_SOV_Pilot";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_SOV_RKKA_sov_pilot_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_pilot_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_SOV_pilot";
            containerClass = "Supply140";
		};
	};
	class U_LIB_SOV_Leutenant_inset_pocket: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_SOV_Leutenant_inset_pocket";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_SOV_RKKA_sov_officer_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_tank_crew_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_SOV_tank_overall_lieutenant";
            containerClass = "Supply140";
		};
	};
	class U_LIB_SOV_Artleutenant: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_SOV_Artleutenant";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_SOV_RKKA_Soviet_arty_lieutenant_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_officer_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_SOV_gun_lieutenant";
            containerClass = "Supply140";
		};
	};
	class U_LIB_SOV_Stleutenant: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_SOV_Stleutenant";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_SOV_RKKA_Soviet_starshii_lieutenant_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_officer_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_SOV_first_lieutenant";
            containerClass = "Supply140";
		};
	};
	class U_LIB_SOV_Kapitan: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_SOV_Kapitan";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_SOV_RKKA_Soviet_Kapitan_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_officer_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_SOV_captain";
            containerClass = "Supply140";
		};
	};
	class U_LIB_SOV_Razvedchik_am: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_SOV_Razvedchik_am";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_SOV_RKKA_sov_recon_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_soldier_camo_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_SOV_AT_soldier";
            containerClass = "Supply140";
		};
	};
	class U_LIB_SOV_Razvedchik_lis: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_SOV_Razvedchik_lis";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_SOV_RKKA_Soviet_reco2_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_soldier_camo_1_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_SOV_scout_rifleman";
            containerClass = "Supply140";
		};
	};
	class U_LIB_SOV_Razvedchik_mix: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_SOV_Razvedchik_mix";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_SOV_RKKA_sov_recon_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_soldier_camo_2_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_SOV_assault_sergeant";
            containerClass = "Supply140";
		};
	};
	class U_LIB_SOV_Sniper: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_SOV_Sniper";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_SOV_RKKA_sov_sniper_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_sniper_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_SOV_scout_sniper";
            containerClass = "Supply140";
		};
	};
	class U_LIB_SOV_Tank_ryadovoi: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_SOV_Tank_ryadovoi";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_SOV_RKKA_Soviet_tanker_kombez_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_soldier_camo_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_sov_tank_crew";
            containerClass = "Supply140";
		};
	};
	class U_LIB_SOV_Tank_sergeant: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_SOV_Tank_sergeant";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_SOV_RKKA_Soviet_tanker_kombez_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_soldier_camo_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_SOV_tank_sergeant";
            containerClass = "Supply140";
		};
	};
	class U_LIB_SOV_Tank_leutenant: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_SOV_Tank_leutenant";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_SOV_RKKA_Soviet_tanker_kombez_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_soldier_camo_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_SOV_tank_lieutenant";
            containerClass = "Supply140";
		};
	};
	class U_LIB_SOV_Tank_kapitan: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_SOV_Tank_kapitan";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_SOV_RKKA_Soviet_tank_kapitan_kombez_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_soldier_camo_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_SOV_tank_captain";
            containerClass = "Supply140";
		};
	};
	class ItemCore;
	class V_LIB_Vest_Camo_Base;
	class VestItem;
	class V_LIB_SOV_IShBrVestMG: V_LIB_Vest_Camo_Base
	{
		scope = 2;
		displayName = "$STR_CTH_V_LIB_SOV_IShBrVestMG";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_IShBR_vest_mg_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_IShBR_vest_mg.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2","camo_3"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_soldier_camo_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_3_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_cuirass_co.paa"};
		descriptionShort = "$STR_Clothing_Armor_Level_I";
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_IShBR_vest_mg.p3d";
			containerClass = "Supply140";
			mass = 100;
			hiddenSelections[] = {"camo_0","camo_1","camo_2","camo_3"};
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=16;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=16;
                    passThrough=0.30000001;
                };
            };
		};
	};
	class V_LIB_SOV_IShBrVestPPShMag: V_LIB_SOV_IShBrVestMG
	{
		scope = 2;
		displayName = "$STR_CTH_V_LIB_SOV_IShBrVestPPShMag";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_IShBR_vest_PPSh_mag_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_IShBR_vest_PPSh_mag.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2","camo_3","camo_4"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_soldier_camo_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_3_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_cuirass_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\soviet_furajka_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_IShBR_vest_PPSh_mag.p3d";
			hiddenSelections[] = {"camo_0","camo_1","camo_2","camo_3","camo_4"};
            containerClass = "Supply140";
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=16;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=16;
                    passThrough=0.30000001;
                };
            };
		};
	};
	class V_LIB_SOV_IShBrVestPPShDisc: V_LIB_SOV_IShBrVestMG
	{
		scope = 2;
		displayName = "$STR_CTH_V_LIB_SOV_IShBrVestPPShDisc";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_IShBR_vest_PPSh_disc_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_IShBR_vest_PPSh_disc.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2","camo_3"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_soldier_camo_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_3_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_cuirass_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_IShBR_vest_PPSh_disc.p3d";
			hiddenSelections[] = {"camo_0","camo_1","camo_2","camo_3"};
            containerClass = "Supply140";
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=16;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=16;
                    passThrough=0.30000001;
                };
            };
		};
	};
	class V_LIB_SOV_RA_OfficerVest: V_LIB_Vest_Camo_Base
	{
		scope = 1;
		displayName = "$STR_CTH_V_LIB_SOV_RA_OfficerVest";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_officer_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Officer_vest.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_officer_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_3_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Officer_vest.p3d";
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
			containerClass = "Supply140";
			mass = 15;
		};
	};
	class V_LIB_SOV_RA_OfficerVest_ARM: V_LIB_Vest_Camo_Base
	{
		scope = 2;
		displayName = "$STR_CTH_V_LIB_SOV_RA_OfficerVest";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_officer_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Officer_vest.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_officer_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_3_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Officer_vest.p3d";
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
			containerClass = "Supply140";
			mass = 15;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=16;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=16;
                    passThrough=0.30000001;
                };
            };
		};
	};
	class V_LIB_SOV_RA_SniperVest: V_LIB_Vest_Camo_Base
	{
		scope = 1;
		displayName = "$STR_CTH_V_LIB_SOV_RA_SniperVest";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_sniper_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Sniper_vest.p3d";
		hiddenSelections[] = {"camo_0","camo_1"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_soldier_camo_2_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_3_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Sniper_vest.p3d";
			hiddenSelections[] = {"camo_0","camo_1"};
			containerClass = "Supply140";
			mass = 10;
		};
	};
	class V_LIB_SOV_RA_SniperVest_ARM: V_LIB_Vest_Camo_Base
	{
		scope = 2;
		displayName = "$STR_CTH_V_LIB_SOV_RA_SniperVest";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_sniper_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Sniper_vest.p3d";
		hiddenSelections[] = {"camo_0","camo_1"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_soldier_camo_2_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_3_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Sniper_vest.p3d";
			hiddenSelections[] = {"camo_0","camo_1"};
			containerClass = "Supply140";
			mass = 10;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=16;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=16;
                    passThrough=0.30000001;
                };
            };
		};
	};
	class V_LIB_SOV_RA_Belt: V_LIB_Vest_Camo_Base
	{
		scope = 1;
		displayName = "$STR_CTH_V_LIB_SOV_RA_Belt";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_belt_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Belt.p3d";
		hiddenSelections[] = {"camo_0"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_soldier_camo_2_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Belt.p3d";
			hiddenSelections[] = {"camo_0"};
			containerClass = "Supply140";
			mass = 10;
		};
	};
	class V_LIB_SOV_RA_Belt_ARM: V_LIB_Vest_Camo_Base
	{
		scope = 2;
		displayName = "$STR_CTH_V_LIB_SOV_RA_Belt";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_belt_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Belt.p3d";
		hiddenSelections[] = {"camo_0"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_soldier_camo_2_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Belt.p3d";
			hiddenSelections[] = {"camo_0"};
			containerClass = "Supply140";
			mass = 10;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=16;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=16;
                    passThrough=0.30000001;
                };
            };
		};
	};
	class V_LIB_SOV_RA_TankOfficerSet: V_LIB_Vest_Camo_Base
	{
		scope = 1;
		displayName = "$STR_CTH_V_LIB_SOV_RA_TankOfficerSet";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_tank_officer_set_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Tank_officer_set.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_officer_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_3_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Tank_officer_set.p3d";
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
			containerClass = "Supply140";
			mass = 10;
		};
	};
	class V_LIB_SOV_RA_TankOfficerSet_ARM: V_LIB_Vest_Camo_Base
	{
		scope = 2;
		displayName = "$STR_CTH_V_LIB_SOV_RA_TankOfficerSet";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_tank_officer_set_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Tank_officer_set.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_officer_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_3_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Tank_officer_set.p3d";
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
			containerClass = "Supply140";
			mass = 10;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=16;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=16;
                    passThrough=0.30000001;
                };
            };
		};
	};
	class V_LIB_SOV_RA_PPShBelt: V_LIB_Vest_Camo_Base
	{
		scope = 1;
		displayName = "$STR_CTH_V_LIB_SOV_RA_PPShBelt";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_vest_PPSh_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Vest_PPSh_disc.p3d";
		hiddenSelections[] = {"camo_0","camo_1"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_soldier_camo_2_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_0_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Vest_PPSh_disc.p3d";
			hiddenSelections[] = {"camo_0","camo_1"};
			containerClass = "Supply140";
			mass = 20;
		};
	};
	class V_LIB_SOV_RA_PPShBelt_ARM: V_LIB_Vest_Camo_Base
	{
		scope = 2;
		displayName = "$STR_CTH_V_LIB_SOV_RA_PPShBelt";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_vest_PPSh_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Vest_PPSh_disc.p3d";
		hiddenSelections[] = {"camo_0","camo_1"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_soldier_camo_2_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_0_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Vest_PPSh_disc.p3d";
			hiddenSelections[] = {"camo_0","camo_1"};
			containerClass = "Supply140";
			mass = 20;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=16;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=16;
                    passThrough=0.30000001;
                };
            };
		};
	};
	class V_LIB_SOV_RA_MosinBelt: V_LIB_Vest_Camo_Base
	{
		scope = 1;
		displayName = "$STR_CTH_V_LIB_SOV_RA_MosinBelt";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_vest_mosin_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Vest_mosin.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_soldier_camo_2_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_3_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Vest_mosin.p3d";
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
			containerClass = "Supply140";
			mass = 20;
		};
	};
	class V_LIB_SOV_RA_MosinBelt_ARM: V_LIB_Vest_Camo_Base
	{
		scope = 2;
		displayName = "$STR_CTH_V_LIB_SOV_RA_MosinBelt";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_vest_mosin_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Vest_mosin.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_soldier_camo_2_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_3_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Vest_mosin.p3d";
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
			containerClass = "Supply140";
			mass = 20;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=16;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=16;
                    passThrough=0.30000001;
                };
            };
		};
	};
	class V_LIB_SOV_RA_SVTBelt: V_LIB_Vest_Camo_Base
	{
		scope = 1;
		displayName = "$STR_CTH_V_LIB_SOV_RA_SVTBelt";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_vest_svt_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Vest_svt.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_soldier_camo_2_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_3_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Vest_svt.p3d";
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
			containerClass = "Supply140";
			mass = 20;
		};
	};
	class V_LIB_SOV_RA_SVTBelt_ARM: V_LIB_Vest_Camo_Base
	{
		scope = 2;
		displayName = "$STR_CTH_V_LIB_SOV_RA_SVTBelt";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_vest_svt_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Vest_svt.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_soldier_camo_2_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_3_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Vest_svt.p3d";
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
			containerClass = "Supply140";
			mass = 20;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=16;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=16;
                    passThrough=0.30000001;
                };
            };
		};
	};
	class V_LIB_SOV_RA_MGBelt: V_LIB_Vest_Camo_Base
	{
		scope = 1;
		displayName = "$STR_CTH_V_LIB_SOV_RA_MGBelt";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_vest_mg_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Vest_mg.p3d";
		hiddenSelections[] = {"camo_0","camo_1"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_soldier_camo_2_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_0_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Vest_mg.p3d";
			hiddenSelections[] = {"camo_0","camo_1"};
			containerClass = "Supply140";
			mass = 10;
		};
	};
	class V_LIB_SOV_RA_MGBelt_ARM: V_LIB_Vest_Camo_Base
	{
		scope = 2;
		displayName = "$STR_CTH_V_LIB_SOV_RA_MGBelt";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_vest_mg_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Vest_mg.p3d";
		hiddenSelections[] = {"camo_0","camo_1"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_soldier_camo_2_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_0_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Vest_mg.p3d";
			hiddenSelections[] = {"camo_0","camo_1"};
			containerClass = "Supply140";
			mass = 10;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=16;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=16;
                    passThrough=0.30000001;
                };
            };
		};
	};
	class V_LIB_SOV_RAZV_SVTBelt: V_LIB_Vest_Camo_Base
	{
		scope = 1;
		displayName = "$STR_CTH_V_LIB_SOV_RAZV_SVTBelt";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_razv_vest_svt_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Razv_vest_svt.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_soldier_camo_2_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_3_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Razv_vest_svt.p3d";
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
			containerClass = "Supply140";
			mass = 20;
		};
	};
	class V_LIB_SOV_RAZV_SVTBelt_ARM: V_LIB_Vest_Camo_Base
	{
		scope = 2;
		displayName = "$STR_CTH_V_LIB_SOV_RAZV_SVTBelt";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_razv_vest_svt_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Razv_vest_svt.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_soldier_camo_2_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_3_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Razv_vest_svt.p3d";
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
			containerClass = "Supply140";
			mass = 20;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=16;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=16;
                    passThrough=0.30000001;
                };
            };
		};
	};
	class V_LIB_SOV_RAZV_OfficerVest: V_LIB_Vest_Camo_Base
	{
		scope = 1;
		displayName = "$STR_CTH_V_LIB_SOV_RAZV_OfficerVest";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_razv_officer_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Razv_officer_vest.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_officer_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_3_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Razv_officer_vest.p3d";
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
			containerClass = "Supply140";
			mass = 15;
		};
	};
	class V_LIB_SOV_RAZV_OfficerVest_ARM: V_LIB_Vest_Camo_Base
	{
		scope = 2;
		displayName = "$STR_CTH_V_LIB_SOV_RAZV_OfficerVest";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_razv_officer_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Razv_officer_vest.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_officer_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_3_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Razv_officer_vest.p3d";
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
			containerClass = "Supply140";
			mass = 15;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=16;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=16;
                    passThrough=0.30000001;
                };
            };
		};
	};
	class V_LIB_SOV_RAZV_MGBelt: V_LIB_Vest_Camo_Base
	{
		scope = 1;
		displayName = "$STR_CTH_V_LIB_SOV_RAZV_MGBelt";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_razv_vest_mg_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Razv_vest_mg.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_soldier_camo_2_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_3_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Razv_vest_mg.p3d";
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
			containerClass = "Supply140";
			mass = 15;
		};
	};
	class V_LIB_SOV_RAZV_MGBelt_ARM: V_LIB_Vest_Camo_Base
	{
		scope = 2;
		displayName = "$STR_CTH_V_LIB_SOV_RAZV_MGBelt";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_razv_vest_mg_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Razv_vest_mg.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_soldier_camo_2_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_3_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Razv_vest_mg.p3d";
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
			containerClass = "Supply140";
			mass = 15;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=16;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=16;
                    passThrough=0.30000001;
                };
            };
		};
	};
	class V_LIB_SOV_RAZV_PPShBelt: V_LIB_Vest_Camo_Base
	{
		scope = 1;
		displayName = "$STR_CTH_V_LIB_SOV_RAZV_PPShBelt";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_razv_vest_PPSh_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Razv_vest_PPSh_disc.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_soldier_camo_2_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_3_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Razv_vest_PPSh_disc.p3d";
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
			containerClass = "Supply140";
			mass = 15;
		};
	};
	class V_LIB_SOV_RAZV_PPShBelt_ARM: V_LIB_Vest_Camo_Base
	{
		scope = 2;
		displayName = "$STR_CTH_V_LIB_SOV_RAZV_PPShBelt";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_SOV_RKKA_razv_vest_PPSh_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Razv_vest_PPSh_disc.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_soldier_camo_2_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_0_co.paa","ww2\assets_t\characters\soviets_t\sov_rkka\sov_equipment_3_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Razv_vest_PPSh_disc.p3d";
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
			containerClass = "Supply140";
			mass = 15;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=16;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=16;
                    passThrough=0.30000001;
                };
            };
		};
	};
};
class CfgVehicles
{
	class B_LIB_AssaultPack_Base;
	class B_LIB_SOV_RA_GasBag: B_LIB_AssaultPack_Base
	{
		scope = 2;
		displayName = "$STR_CTH_B_LIB_SOV_RA_GasBag";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Backpacks\B_SOV_RKKA_gas_kit_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Gas_kit.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_equipment_0_co.paa"};
		maximumLoad = 200;
	};
	class B_LIB_SOV_RA_Paradrop: B_LIB_AssaultPack_Base
	{
		scope = 2;
		displayName = "$STR_CTH_B_LIB_SOV_RA_Paradrop";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Backpacks\B_SOV_RKKA_para_system_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Para_vest.p3d";
		hiddenSelections[] = {"camo_0"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\soviets_t\sov_rkka\sov_pilot_eqip_0_co.paa"};
		maximumLoad = 200;
	};
	class B_LIB_SOV_RA_MedicalBag: B_LIB_AssaultPack_Base
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "$STR_CTH_B_LIB_SOV_RA_MedicalBag";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Backpacks\B_SOV_RKKA_med_kit_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Med_kit.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_equipment_4_co.paa"};
		maximumLoad = 200;
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class B_LIB_SOV_RA_MedicalBag_Empty: B_LIB_SOV_RA_MedicalBag
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		class TransportItems{};
	};
	class B_LIB_SOV_RA_Radio: B_LIB_AssaultPack_Base
	{
		scope = 2;
		displayName = "$STR_CTH_B_LIB_SOV_RA_Radio";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Backpacks\B_SOV_RKKA_Soviet_radio_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Radio2.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\Soviet_ratsia_co.paa"};
		maximumLoad = 2;
		supplyRadius = 0;
		mass = 200;
		class TransportItems
		{
			class _xx_ItemRadio
			{
				name = "ItemRadio";
				count = 1;
			};
		};
	};
	class B_LIB_SOV_RA_Rucksack: B_LIB_AssaultPack_Base
	{
		scope = 2;
		displayName = "$STR_CTH_B_LIB_SOV_RA_Rucksack";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Backpacks\B_SOV_RKKA_Soviet_rucksack_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Ruck1.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_equipment_0_co.paa"};
		maximumLoad = 200;
	};
	class B_LIB_SOV_RA_Rucksack_Green: B_LIB_SOV_RA_Rucksack
	{
		displayName = "$STR_CTH_B_LIB_SOV_RA_Rucksack_Green";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Backpacks\B_SOV_RKKA_Soviet_rucksack_green_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_equipment_0b_co.paa"};
	};
	class B_LIB_SOV_RA_RucksackMines: B_LIB_SOV_RA_Rucksack
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "$STR_CTH_B_LIB_SOV_RA_RucksackMines";
		class TransportMagazines
		{
			class _xx_lib_pomzec
			{
				magazine = "LIB_pomzec_MINE_mag";
				count = 2;
			};
			class _xx_lib_M3_MINE
			{
				magazine = "LIB_M3_MINE_mag";
				count = 2;
			};
			class _xx_LIB_TM44_MINE
			{
				magazine = "LIB_TM44_MINE_mag";
				count = 2;
			};
		};
	};
	class B_LIB_SOV_RA_RucksackMines2: B_LIB_SOV_RA_Rucksack
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "$STR_CTH_B_LIB_SOV_RA_RucksackMines";
		class TransportMagazines
		{
			class _xx_LIB_TROTIL_MINE_mag
			{
				magazine = "LIB_TROTIL_MINE_mag";
				count = 3;
			};
			class _xx_LIB_PM_MINE_mag
			{
				magazine = "LIB_PM_MINE_mag";
				count = 1;
			};
			class _xx_LIB_PM_Provod_100
			{
				magazine = "LIB_PM_Provod_100";
				count = 2;
			};
			class _xx_lib_rpg6
			{
				magazine = "lib_rpg6";
				count = 2;
			};
		};
	};
	class B_LIB_SOV_RA_MGAmmoBag: B_LIB_AssaultPack_Base
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "$STR_CTH_B_LIB_SOV_RA_MGAmmoBag";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Backpacks\B_SOV_RKKA_mg_kit_ca.paa";
		model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\WW2_Mg_kit.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Soviets_t\SOV_RKKA\sov_equipment_4_co.paa"};
		maximumLoad = 200;
		class TransportMagazines
		{
			class _xx_lib_47Rnd_762x54
			{
				magazine = "lib_47Rnd_762x54";
				count = 3;
			};
		};
	};
	class B_LIB_SOV_RA_MGAmmoBag_Empty: B_LIB_SOV_RA_MGAmmoBag
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		class TransportMagazines{};
	};
};
//};
