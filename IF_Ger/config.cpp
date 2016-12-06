class CfgPatches
{
	class IF_Ger
	{
		units[] = {"B_LIB_GER_A_frame","B_LIB_GER_Radio","B_LIB_GER_Backpack","B_LIB_GER_MedicBackpack","B_LIB_GER_LW_Paradrop","B_LIB_GER_Panzer","B_LIB_GER_MedicBackpack_Empty","B_LIB_GER_Tonister34_cowhide","B_LIB_GER_Panzer_Empty"};
		weapons[] = {"U_LIB_GER_Soldier_camo","U_LIB_GER_Pionier","U_LIB_GER_LW_pilot","U_LIB_GER_Officer_camo","U_LIB_GER_Funker","U_LIB_GER_Schutze","U_LIB_GER_Art_schutze","U_LIB_GER_Oberschutze","U_LIB_GER_Gefreiter","U_LIB_GER_Unterofficer","U_LIB_GER_Art_unterofficer","U_LIB_GER_Recruit","U_LIB_GER_Medic","U_LIB_GER_Leutnant","U_LIB_GER_Art_leutnant","U_LIB_GER_Oberleutnant","U_LIB_GER_Hauptmann","U_LIB_GER_Oberst","U_LIB_GER_Scharfschutze","U_LIB_GER_MG_schutze","H_LIB_GER_HelmetCamo","H_LIB_GER_Helmet","H_LIB_GER_OfficerCap","H_LIB_GER_Cap","H_LIB_GER_LW_PilotHelmet","V_LIB_GER_VestMP40","V_LIB_GER_VestSTG","V_LIB_GER_VestKar98","V_LIB_GER_VestG43","V_LIB_GER_SniperBelt","V_LIB_GER_VestMG","V_LIB_GER_VestUnterofficer","V_LIB_GER_FieldOfficer","V_LIB_GER_OfficerVest","V_LIB_GER_OfficerBelt","V_LIB_GER_PrivateBelt"};
		requiredVersion = 0.1;
		requiredAddons[] = {"WW2_Core_c_Core_c","WW2_Assets_c_Characters_Germans_c_GER_Wehrmacht"};
	};
};
class cfgWeapons
{
	class U_BasicBody;
	class U_LIB_BasicBody: U_BasicBody
	{
		class ItemInfo;
	};
	class U_LIB_GER_Soldier_camo: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_Soldier_camo";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_Wehrmacht_ger_camo_soldier_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_soldier_0_camo_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_soldier_camo_MP40";
            containerClass = "Supply140";
		};
	};
	class U_LIB_GER_Pionier: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_Pionier";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_Wehrmacht_ger_sapper_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_soldier_0_camo_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_sapper";
            containerClass = "Supply140";
		};
	};
	class U_LIB_GER_LW_pilot: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_LW_pilot";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_Wehrmacht_ger_pilot_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_pilot_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_pilot";
            containerClass = "Supply140";
		};
	};
	class U_LIB_GER_Officer_camo: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_Officer_camo";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_Wehrmacht_ger_camo_lieutenant_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_lieutenant_0_camo_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_scout_unterofficer";
            containerClass = "Supply140";
		};
	};
	class U_LIB_GER_Funker: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_Funker";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_Wehrmacht_ger_radioman_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_soldier_0_camo_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_radioman";
            containerClass = "Supply140";
		};
	};
	class U_LIB_GER_Schutze: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_Schutze";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_Wehrmacht_ger_soldier_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_soldier_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_rifleman";
            containerClass = "Supply140";
		};
	};
	class U_LIB_GER_Art_schutze: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_Art_schutze";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_Wehrmacht_ger_art_soldier_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_art_soldier_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_gun_crew";
            containerClass = "Supply140";
		};
	};
	class U_LIB_GER_Oberschutze: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_Oberschutze";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_Wehrmacht_ger_soldier_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_soldier_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_ober_rifleman";
            containerClass = "Supply140";
		};
	};
	class U_LIB_GER_Gefreiter: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_Gefreiter";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_Wehrmacht_ger_soldier_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_soldier_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_stggunner";
            containerClass = "Supply140";
		};
	};
	class U_LIB_GER_Unterofficer: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_Unterofficer";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_Wehrmacht_ger_unterofficer_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_soldier_1_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_unterofficer";
            containerClass = "Supply140";
		};
	};
	class U_LIB_GER_Art_unterofficer: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_Art_unterofficer";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_Wehrmacht_ger_art_unterofficer_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_art_unterofficer_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_gun_unterofficer";
            containerClass = "Supply140";
		};
	};
	class U_LIB_GER_Recruit: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_Recruit";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_Wehrmacht_ger_soldier_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_recruit_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_recruit";
            containerClass = "Supply140";
		};
	};
	class U_LIB_GER_Medic: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_Medic";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_Wehrmacht_ger_medic_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_medic_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_medic";
            containerClass = "Supply140";
		};
	};
	class U_LIB_GER_Leutnant: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_Leutnant";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_Wehrmacht_ger_lieutenant_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_officer_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_lieutenant";
            containerClass = "Supply140";
		};
	};
	class U_LIB_GER_Art_leutnant: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_Art_leutnant";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_Wehrmacht_ger_art_lieutenant_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_art_officer_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_gun_lieutenant";
            containerClass = "Supply140";
		};
	};
	class U_LIB_GER_Oberleutnant: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_Oberleutnant";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_Wehrmacht_ger_oberlieutenant_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_officer_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_ober_lieutenant";
            containerClass = "Supply140";
		};
	};
	class U_LIB_GER_Hauptmann: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_Hauptmann";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_Wehrmacht_ger_hauptmann_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_officer_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_hauptmann";
            containerClass = "Supply140";
		};
	};
	class U_LIB_GER_Oberst: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_Oberst";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_Wehrmacht_ger_oberst_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_oberst_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_oberst";
            containerClass = "Supply140";
		};
	};
	class U_LIB_GER_Scharfschutze: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_Scharfschutze";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_Wehrmacht_ger_sniper_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_sniper_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_scout_sniper";
            containerClass = "Supply140";
		};
	};
	class U_LIB_GER_MG_schutze: U_LIB_BasicBody
	{
		scope = 2;
		displayName = "$STR_CTH_U_LIB_GER_MG_schutze";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\U_GER_Wehrmacht_ger_mgunner_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_mgunner_0_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_GER_mgunner";
            containerClass = "Supply140";
		};
	};
	class ItemCore;
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};
	class V_LIB_Vest_Camo_Base;
	class VestItem;
	class V_LIB_GER_VestMP40: V_LIB_Vest_Camo_Base
	{
		scope = 1;
		displayName = "$STR_CTH_V_LIB_GER_VestMP40";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_GER_Wehrmacht_ger_vest_mp40_ca.paa";
		model = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_vest_mp40.p3d";
		hiddenSelections[] = {"Camo","CamoB"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_equipment_0_co.paa","\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_soldier_0_camo_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_vest_mp40.p3d";
			containerClass = "Supply140";
			mass = 20;
			hiddenSelections[] = {"Camo","CamoB"};
		};
	};
	class V_LIB_GER_VestMP40_ARM: V_LIB_GER_VestMP40
	{
		scope = 2;
		class ItemInfo: VestItem
		{
            uniformModel = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_vest_mp40.p3d";
			containerClass = "Supply140";
			mass = 20;
			hiddenSelections[] = {"Camo","CamoB"};
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
	class V_LIB_GER_VestSTG: V_LIB_Vest_Camo_Base
	{
		scope = 1;
		displayName = "$STR_CTH_V_LIB_GER_VestSTG";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_GER_Wehrmacht_ger_vest_stg_ca.paa";
		model = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_vest_stg.p3d";
		hiddenSelections[] = {"Camo","CamoB"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_equipment_0_co.paa","\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_soldier_0_camo_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_vest_stg.p3d";
			containerClass = "Supply140";
			mass = 20;
			hiddenSelections[] = {"Camo","CamoB"};
		};
	};
	class V_LIB_GER_VestSTG_ARM: V_LIB_GER_VestSTG
	{
		scope = 2;
		class ItemInfo: VestItem
		{
            uniformModel = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_vest_stg.p3d";
			containerClass = "Supply140";
			mass = 20;
			hiddenSelections[] = {"Camo","CamoB"};
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
	class V_LIB_GER_VestKar98: V_LIB_Vest_Camo_Base
	{
		scope = 1;
		displayName = "$STR_CTH_V_LIB_GER_VestKar98";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_GER_Wehrmacht_ger_vest_kar98_ca.paa";
		model = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_vest_kar98.p3d";
		hiddenSelections[] = {"Camo","CamoB"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_equipment_0_co.paa","\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_soldier_0_camo_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_vest_kar98.p3d";
			containerClass = "Supply140";
			mass = 20;
			hiddenSelections[] = {"Camo","CamoB"};
		};
	};
	class V_LIB_GER_VestKar98_ARM: V_LIB_GER_VestKar98
	{
		scope = 2;
		class ItemInfo: VestItem
		{
            uniformModel = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_vest_kar98.p3d";
			containerClass = "Supply140";
			mass = 20;
			hiddenSelections[] = {"Camo","CamoB"};
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
	class V_LIB_GER_VestG43: V_LIB_Vest_Camo_Base
	{
		scope = 1;
		displayName = "$STR_CTH_V_LIB_GER_VestG43";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_GER_Wehrmacht_ger_vest_g43_ca.paa";
		model = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_vest_G43.p3d";
		hiddenSelections[] = {"Camo","CamoB"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_equipment_0_co.paa","\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_soldier_0_camo_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_vest_G43.p3d";
			containerClass = "Supply140";
			mass = 20;
			hiddenSelections[] = {"Camo","CamoB"};
		};
	};
	class V_LIB_GER_VestG43_ARM: V_LIB_GER_VestG43
	{
		scope = 2;
		class ItemInfo: VestItem
		{
            uniformModel = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_vest_G43.p3d";
			containerClass = "Supply140";
			mass = 20;
			hiddenSelections[] = {"Camo","CamoB"};
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
	class V_LIB_GER_SniperBelt: V_LIB_Vest_Camo_Base
	{
		scope = 1;
		displayName = "$STR_CTH_V_LIB_GER_SniperBelt";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_GER_Wehrmacht_ger_sniper_belt_ca.paa";
		model = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_sniper_belt.p3d";
		hiddenSelections[] = {"Camo","CamoB"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_equipment_0_co.paa","\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_soldier_0_camo_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_sniper_belt.p3d";
			containerClass = "Supply140";
			mass = 10;
			hiddenSelections[] = {"Camo","CamoB"};
		};
	};
	class V_LIB_GER_SniperBelt_ARM: V_LIB_GER_SniperBelt
	{
		scope = 2;
		class ItemInfo: VestItem
		{
            uniformModel = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_sniper_belt.p3d";
			containerClass = "Supply140";
			mass = 10;
			hiddenSelections[] = {"Camo","CamoB"};
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
	class V_LIB_GER_VestMG: V_LIB_Vest_Camo_Base
	{
		scope = 1;
		displayName = "$STR_CTH_V_LIB_GER_VestMG";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_GER_Wehrmacht_ger_vest_mg_ca.paa";
		model = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_vest_mg.p3d";
		hiddenSelections[] = {"Camo","CamoB"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_equipment_0_co.paa","\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_soldier_0_camo_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_vest_mg.p3d";
			containerClass = "Supply160";
			mass = 20;
			hiddenSelections[] = {"Camo","CamoB"};
		};
	};
	class V_LIB_GER_VestMG_ARM: V_LIB_GER_VestMG
	{
		scope = 2;
		class ItemInfo: VestItem
		{
            uniformModel = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_vest_mg.p3d";
			containerClass = "Supply160";
			mass = 20;
			hiddenSelections[] = {"Camo","CamoB"};
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
	class V_LIB_GER_VestUnterofficer: V_LIB_Vest_Camo_Base
	{
		scope = 1;
		displayName = "$STR_CTH_V_LIB_GER_VestUnterofficer";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_GER_Wehrmacht_ger_vest_unter_ca.paa";
		model = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_vest_unter.p3d";
		hiddenSelections[] = {"Camo","CamoB","Camo1"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_equipment_0_co.paa","\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_soldier_0_camo_co.paa","\WW2\Assets_t\Characters\Germans_t\GER_TankTroops\ger_tank_crew_equipment_0_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_vest_unter.p3d";
			containerClass = "Supply140";
			mass = 20;
			hiddenSelections[] = {"Camo","CamoB","Camo1"};
		};
	};
	class V_LIB_GER_VestUnterofficer_ARM: V_LIB_GER_VestUnterofficer
	{
		scope = 2;
		class ItemInfo: VestItem
		{
            uniformModel = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_vest_unter.p3d";
			containerClass = "Supply140";
			mass = 20;
			hiddenSelections[] = {"Camo","CamoB","Camo1"};
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
	class V_LIB_GER_FieldOfficer: V_LIB_Vest_Camo_Base
	{
		scope = 1;
		displayName = "$STR_CTH_V_LIB_GER_FieldOfficer";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_GER_Wehrmacht_ger_field_officer_ca.paa";
		model = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_field_officer.p3d";
		hiddenSelections[] = {"Camo","CamoB","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_equipment_0_co.paa","\WW2\Assets_t\Characters\Germans_t\GER_TankTroops\ger_tank_crew_equipment_0_co.paa","\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_oberst_co.paa","\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_officer_belt.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_field_officer.p3d";
			containerClass = "Supply140";
			mass = 15;
			hiddenSelections[] = {"Camo","CamoB","Camo1","Camo2"};
		};
	};
	class V_LIB_GER_FieldOfficer_ARM: V_LIB_GER_FieldOfficer
	{
		scope = 2;
		class ItemInfo: VestItem
		{
            uniformModel = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_field_officer.p3d";
			containerClass = "Supply140";
			mass = 15;
			hiddenSelections[] = {"Camo","CamoB","Camo1","Camo2"};
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
	class V_LIB_GER_OfficerVest: V_LIB_Vest_Camo_Base
	{
		scope = 1;
		displayName = "$STR_CTH_V_LIB_GER_OfficerVest";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_GER_Wehrmacht_ger_officer_belt_ca.paa";
		model = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_officer_belt.p3d";
		hiddenSelections[] = {"Camo","CamoB","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_equipment_0_co.paa","\WW2\Assets_t\Characters\Germans_t\GER_TankTroops\ger_tank_crew_equipment_0_co.paa","\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_oberst_co.paa","\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_officer_belt.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_officer_belt.p3d";
			containerClass = "Supply140";
			mass = 15;
			hiddenSelections[] = {"Camo","CamoB","Camo1","Camo2"};
		};
	};
	class V_LIB_GER_OfficerVest_ARM: V_LIB_GER_OfficerVest
	{
		scope = 2;
		class ItemInfo: VestItem
		{
            uniformModel = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_officer_belt.p3d";
			containerClass = "Supply140";
			mass = 15;
			hiddenSelections[] = {"Camo","CamoB","Camo1","Camo2"};
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
	class V_LIB_GER_OfficerBelt: V_LIB_Vest_Camo_Base
	{
		scope = 1;
		displayName = "$STR_CTH_V_LIB_GER_OfficerBelt";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_GER_Wehrmacht_ger_officer_belt_clean_ca.paa";
		model = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Officer_belt.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_oberst_co.paa","\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_officer_belt.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Officer_belt.p3d";
			containerClass = "Supply140";
			mass = 10;
			hiddenSelections[] = {"Camo1","Camo2"};
		};
	};
	class V_LIB_GER_OfficerBelt_ARM: V_LIB_GER_OfficerBelt
	{
		scope = 2;
		class ItemInfo: VestItem
		{
            uniformModel = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Officer_belt.p3d";
			containerClass = "Supply140";
			mass = 10;
			hiddenSelections[] = {"Camo1","Camo2"};
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
	class V_LIB_GER_PrivateBelt: V_LIB_Vest_Camo_Base
	{
		scope = 1;
		displayName = "$STR_CTH_V_LIB_GER_PrivateBelt";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_GER_Wehrmacht_ger_private_belt_ca.paa";
		model = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_private_belt.p3d";
		hiddenSelections[] = {"Camo","CamoB"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_equipment_0_co.paa","\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_soldier_0_camo_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_private_belt.p3d";
			containerClass = "Supply140";
			mass = 10;
			hiddenSelections[] = {"Camo","CamoB"};
		};
	};
	class V_LIB_GER_PrivateBelt_ARM: V_LIB_GER_PrivateBelt
	{
		scope = 2;
		class ItemInfo: VestItem
		{
            uniformModel = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Inf_private_belt.p3d";
			containerClass = "Supply140";
			mass = 10;
			hiddenSelections[] = {"Camo","CamoB"};
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
	class B_LIB_GER_A_frame: B_LIB_AssaultPack_Base
	{
		scope = 2;
		displayName = "$STR_CTH_B_LIB_GER_A_frame";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Backpacks\B_GER_Wehrmacht_German_a_frame_ca.paa";
		model = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_A_frame.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_equipment_0_co.paa"};
		maximumLoad = 300;
	};
	class B_LIB_GER_A_frame_AT: B_LIB_GER_A_frame
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "$STR_CTH_B_LIB_GER_A_frame_AT";
		class TransportMagazines
		{
			class _xx_lib_pwm
			{
				magazine = "lib_pwm";
				count = 2;
			};
		};
	};
	class B_LIB_GER_A_frame_Gef: B_LIB_GER_A_frame
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "$STR_CTH_B_LIB_GER_A_frame";
		class TransportMagazines
		{
			class _xx_lib_1Rnd_flare_white
			{
				magazine = "lib_1Rnd_flare_white";
				count = 2;
			};
			class _xx_lib_1Rnd_flare_red
			{
				magazine = "lib_1Rnd_flare_red";
				count = 2;
			};
			class _xx_lib_1Rnd_flare_green
			{
				magazine = "lib_1Rnd_flare_green";
				count = 2;
			};
			class _xx_lib_1Rnd_flare_yellow
			{
				magazine = "lib_1Rnd_flare_yellow";
				count = 2;
			};
		};
	};
	class B_LIB_GER_Radio: B_LIB_AssaultPack_Base
	{
		scope = 2;
		displayName = "$STR_LIB_DN_GERMAN_RADIO";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Backpacks\B_GER_Wehrmacht_German_radio_ca.paa";
		model = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Radio.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\ger_equipment_3_co.paa"};
		maximumLoad = 300;
		supplyRadius = 0;
		mass = 150;
		class TransportItems
		{
			class _xx_ItemRadio
			{
				name = "ItemRadio";
				count = 1;
			};
		};
	};
	class B_LIB_GER_Backpack: B_LIB_AssaultPack_Base
	{
		scope = 2;
		displayName = "$STR_CTH_B_LIB_GER_Backpack";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Backpacks\B_GER_Wehrmacht_German_sapper_ca.paa";
		model = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Sap_backpack.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\German_rucksack_co.paa"};
		maximumLoad = 300;
	};
	class B_LIB_GER_SapperBackpack: B_LIB_GER_Backpack
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "$STR_CTH_B_LIB_GER_SapperBackpack";
		class TransportMagazines
		{
			class _xx_lib_SMI_35_1_MINE
			{
				magazine = "LIB_SMI_35_1_MINE_mag";
				count = 2;
			};
			class _xx_LIB_TMI_42_MINE
			{
				magazine = "LIB_TMI_42_MINE_mag";
				count = 2;
			};
		};
	};
	class B_LIB_GER_SapperBackpack2: B_LIB_GER_SapperBackpack
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		class TransportMagazines
		{
			class _xx_LIB_Ladung_Small_MINE_mag
			{
				magazine = "LIB_Ladung_Small_MINE_mag";
				count = 2;
			};
			class _xx_LIB_Ladung_Big_MINE_mag
			{
				magazine = "LIB_Ladung_Big_MINE_mag";
				count = 2;
			};
			class _xx_LIB_Ladung_PM_MINE_mag
			{
				magazine = "LIB_Ladung_PM_MINE_mag";
				count = 1;
			};
			class _xx_LIB_LIB_PM_Provod_100
			{
				magazine = "LIB_PM_Provod_100";
				count = 2;
			};
		};
	};
	class B_LIB_GER_MedicBackpack: B_LIB_AssaultPack_Base
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "$STR_CTH_B_LIB_GER_Tonister34_MedicBackpack";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Backpacks\B_GER_Wehrmacht_med_bag_ca.paa";
		model = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Lodu_german_medic_bag.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\Lodu\lodu_german_medic_bag_co.paa"};
		maximumLoad = 300;
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
				count = 5;
			};
		};
	};
	class B_LIB_GER_MedicBackpack_Empty: B_LIB_GER_MedicBackpack
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		class TransportItems{};
	};
	class B_LIB_GER_Tonister34_cowhide: B_LIB_GER_MedicBackpack_Empty
	{
		displayName = "$STR_CTH_B_LIB_GER_Tonister34_Backpack";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Backpacks\B_GER_Wehrmacht_tonister34_bag_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\Lodu\lodu_german_tonister34_bag_co.paa"};
		hiddenSelectionsMaterials[] = {"\WW2\Assets_r\Characters\Germans_r\GER_Wehrmacht\Lodu\Lodu_german_tonister34_bag.rvmat"};
	};
	class B_LIB_GER_LW_Paradrop: B_LIB_AssaultPack_Base
	{
		scope = 2;
		displayName = "$STR_CTH_B_LIB_GER_LW_Paradrop";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Backpacks\B_GER_Wehrmacht_para_system_ca.paa";
		model = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Ger_paradrop.p3d";
		hiddenSelections[] = {"camo_0"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\germans_t\ger_wehrmacht\paradrop_co.paa"};
		maximumLoad = 300;
	};
	class B_LIB_GER_Panzer: B_LIB_AssaultPack_Base
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "$STR_CTH_B_LIB_GER_Panzer";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Backpacks\B_GER_Wehrmacht_panz_bag_ca.paa";
		model = "\WW2\Assets_m\Characters\Germans_m\GER_Wehrmacht\WW2_Lodu_guer_rocket_bag.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Germans_t\GER_Wehrmacht\Lodu\lodu_wh_rocket_bag_co.paa"};
		maximumLoad = 300;
		class TransportMagazines
		{
			class _xx_LIB_1Rnd_RPzB
			{
				magazine = "LIB_1Rnd_RPzB";
				count = 5;
			};
		};
	};
	class B_LIB_GER_Panzer_Empty: B_LIB_GER_Panzer
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		class TransportMagazines{};
	};
};
//};
