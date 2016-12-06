class CfgPatches
{
	class IF_US
	{
		units[] = {"B_LIB_US_Backpack","B_LIB_US_RocketBag","B_LIB_US_Radio","B_LIB_US_Bandoleer","B_LIB_US_MGbag","B_LIB_US_Backpack_dday","B_LIB_US_MedicBackpack_Empty","B_LIB_US_RocketBag_Empty","B_LIB_US_MGbag_Empty"};
		weapons[] = {"U_LIB_US_Private","U_LIB_US_Private_1st","U_LIB_US_Corp","U_LIB_US_Sergant","U_LIB_US_Snipe","U_LIB_US_Eng","U_LIB_US_Med","U_LIB_US_Off","U_LIB_US_Cap","H_LIB_US_Helmet","H_LIB_US_Helmet_Net","H_LIB_US_Helmet_Med","H_LIB_US_Helmet_Cap","H_LIB_US_Helmet_First_lieutenant","H_LIB_US_Helmet_Second_lieutenant","H_LIB_US_Helmet_Pilot","H_LIB_US_Helmet_Tank","V_LIB_US_Vest_Bar","V_LIB_US_Vest_Asst_MG","V_LIB_US_Vest_Carbine","V_LIB_US_Vest_Carbine_eng","V_LIB_US_Vest_Carbine_nco","V_LIB_US_Vest_Garand","V_LIB_US_Vest_Grenadier","V_LIB_US_Vest_Medic","V_LIB_US_Vest_Medic2","V_LIB_US_Vest_Thompson","V_LIB_US_Vest_Thompson_nco","V_LIB_US_Vest_45"};
		requiredVersion = 0.1;
		requiredAddons[] = {"WW2_Core_c_Core_c","WW2_Assets_c_Characters_Americans_c_US_Army"};
	};
};
class cfgWeapons
{
	class U_BasicBody;
	class U_LIB_BasicBody: U_BasicBody
	{
		class ItemInfo;
	};
	class U_LIB_US_Private: U_LIB_BasicBody
	{
		author = "LODU & tierprot";
		scope = 2;
		displayName = "$STR_CTH_U_LIB_US_Private";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_US_Army_us_private_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Americans_t\US_Army\new_us_soldier_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_US_rifleman";
            containerClass = "Supply140";
		};
	};
	class U_LIB_US_Private_1st: U_LIB_BasicBody
	{
		author = "LODU & tierprot";
		scope = 2;
		displayName = "$STR_CTH_U_LIB_US_Private_1st";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_US_Army_us_1stclass_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Americans_t\US_Army\new_us_soldier_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_US_FC_rifleman";
            containerClass = "Supply140";
		};
	};
	class U_LIB_US_Corp: U_LIB_BasicBody
	{
		author = "LODU & tierprot";
		scope = 2;
		displayName = "$STR_CTH_U_LIB_US_Corp";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_US_Army_us_corporal_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Americans_t\US_Army\new_us_soldier_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_US_corporal";
            containerClass = "Supply140";
		};
	};
	class U_LIB_US_Sergant: U_LIB_BasicBody
	{
		author = "LODU & tierprot";
		scope = 2;
		displayName = "$STR_CTH_U_LIB_US_Sergant";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_US_Army_us_sergeant_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Americans_t\US_Army\new_us_soldier_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_US_smgunner";
            containerClass = "Supply140";
		};
	};
	class U_LIB_US_Snipe: U_LIB_BasicBody
	{
		author = "LODU & tierprot";
		scope = 2;
		displayName = "$STR_CTH_U_LIB_US_Snipe";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_US_Army_us_sniper_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Americans_t\US_Army\new_us_soldier_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_US_sniper";
            containerClass = "Supply140";
		};
	};
	class U_LIB_US_Eng: U_LIB_BasicBody
	{
		author = "LODU & tierprot";
		scope = 2;
		displayName = "$STR_CTH_U_LIB_US_Eng";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_US_Army_us_engineer_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Americans_t\US_Army\new_us_soldier_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_US_engineer";
            containerClass = "Supply140";
		};
	};
	class U_LIB_US_Med: U_LIB_BasicBody
	{
		author = "LODU & tierprot";
		scope = 2;
		displayName = "$STR_CTH_U_LIB_US_Med";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_US_Army_us_medic_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Americans_t\US_Army\new_us_soldier_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_US_medic";
            containerClass = "Supply140";
		};
	};
	class U_LIB_US_Off: U_LIB_BasicBody
	{
		author = "LODU & tierprot";
		scope = 2;
		displayName = "$STR_CTH_U_LIB_US_Off";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_US_Army_us_1stlieut_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Americans_t\US_Army\new_us_soldier_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_US_first_lieutenant";
            containerClass = "Supply140";
		};
	};
	class U_LIB_US_Cap: U_LIB_BasicBody
	{
		author = "LODU & tierprot";
		scope = 2;
		displayName = "$STR_CTH_U_LIB_US_Cap";
		picture = "\WW2\Assets_t\Characters\Misc_t\Portrait\portrait_US_Army_us_capt_ca.paa";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Americans_t\US_Army\new_us_soldier_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "LIB_US_captain";
            containerClass = "Supply140";
		};
	};
	class ItemCore;
	class V_LIB_Vest_Camo_Base;
	class VestItem;
	class V_LIB_US_Vest_Bar: V_LIB_Vest_Camo_Base
	{
		author = "LODU & tierprot";
		scope = 1;
		displayName = "$STR_CTH_V_LIB_US_Vest_Bar";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_US_Army_bar_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_bar.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_garand_belt_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_pouchs_us_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_us_suspends01_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_bar.p3d";
			containerClass = "Supply140";
			mass = 7;
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		};
	};
	class V_LIB_US_Vest_Bar_ARM: V_LIB_Vest_Camo_Base
	{
		author = "LODU & tierprot";
		scope = 2;
		displayName = "$STR_CTH_V_LIB_US_Vest_Bar";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_US_Army_bar_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_bar.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_garand_belt_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_pouchs_us_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_us_suspends01_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_bar.p3d";
			containerClass = "Supply140";
			mass = 7;
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
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
	class V_LIB_US_Vest_Asst_MG: V_LIB_Vest_Camo_Base
	{
		author = "LODU & tierprot";
		scope = 1;
		displayName = "$STR_CTH_V_LIB_US_Vest_Asst_MG";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_GUER_PolishTroops_guer_vest_mp40_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_asst_MG.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_garand_belt_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_pouchs_us_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_us_bags01_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_asst_MG.p3d";
			containerClass = "Supply140";
			mass = 7;
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		};
	};
	class V_LIB_US_Vest_Asst_MG_ARM: V_LIB_Vest_Camo_Base
	{
		author = "LODU & tierprot";
		scope = 2;
		displayName = "$STR_CTH_V_LIB_US_Vest_Asst_MG";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_GUER_PolishTroops_guer_vest_mp40_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_asst_MG.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_garand_belt_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_pouchs_us_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_us_bags01_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_asst_MG.p3d";
			containerClass = "Supply140";
			mass = 7;
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
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
	class V_LIB_US_Vest_Carbine: V_LIB_Vest_Camo_Base
	{
		author = "LODU & tierprot";
		scope = 1;
		displayName = "$STR_CTH_V_LIB_US_Vest_Carbine";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_US_Army_carbine_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_carbine.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_garand_belt_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_pouchs_us_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_us_suspends01_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_carbine.p3d";
			containerClass = "Supply140";
			mass = 7;
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		};
	};
	class V_LIB_US_Vest_Carbine_ARM: V_LIB_Vest_Camo_Base
	{
		author = "LODU & tierprot";
		scope = 2;
		displayName = "$STR_CTH_V_LIB_US_Vest_Carbine";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_US_Army_carbine_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_carbine.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_garand_belt_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_pouchs_us_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_us_suspends01_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_carbine.p3d";
			containerClass = "Supply140";
			mass = 7;
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
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
	class V_LIB_US_Vest_Carbine_eng: V_LIB_Vest_Camo_Base
	{
		author = "LODU & tierprot";
		scope = 1;
		displayName = "$STR_CTH_V_LIB_US_Vest_Carbine_eng";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_US_Army_carbine_eng_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_carbine_eng.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2","camo_3"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_garand_belt_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_pouchs_us_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_us_suspends01_co.paa","\WW2\Assets_t\Characters\Americans_t\US_Army\lodu_us_bags01_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_carbine_eng.p3d";
			containerClass = "Supply140";
			mass = 7;
			hiddenSelections[] = {"camo_0","camo_1","camo_2","camo_3"};
		};
	};
	class V_LIB_US_Vest_Carbine_eng_ARM: V_LIB_Vest_Camo_Base
	{
		author = "LODU & tierprot";
		scope = 2;
		displayName = "$STR_CTH_V_LIB_US_Vest_Carbine_eng";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_US_Army_carbine_eng_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_carbine_eng.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2","camo_3"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_garand_belt_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_pouchs_us_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_us_suspends01_co.paa","\WW2\Assets_t\Characters\Americans_t\US_Army\lodu_us_bags01_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_carbine_eng.p3d";
			containerClass = "Supply140";
			mass = 7;
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
	class V_LIB_US_Vest_Carbine_nco: V_LIB_Vest_Camo_Base
	{
		author = "LODU & tierprot";
		scope = 1;
		displayName = "$STR_CTH_V_LIB_US_Vest_Carbine_nco";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_US_Army_carbine_nco_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_carbine_nco.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2","camo_3","camo_4"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_garand_belt_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_pouchs_us_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_us_suspends01_co.paa","\WW2\Assets_t\Characters\Americans_t\US_Army\lodu_us_bags01_co.paa","\WW2\Assets_t\Characters\Americans_t\US_Army\lodu_SCR_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_carbine_nco.p3d";
			containerClass = "Supply140";
			mass = 7;
			hiddenSelections[] = {"camo_0","camo_1","camo_2","camo_3","camo_4"};
		};
	};
	class V_LIB_US_Vest_Carbine_nco_ARM: V_LIB_Vest_Camo_Base
	{
		author = "LODU & tierprot";
		scope = 2;
		displayName = "$STR_CTH_V_LIB_US_Vest_Carbine_nco";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_US_Army_carbine_nco_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_carbine_nco.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2","camo_3","camo_4"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_garand_belt_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_pouchs_us_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_us_suspends01_co.paa","\WW2\Assets_t\Characters\Americans_t\US_Army\lodu_us_bags01_co.paa","\WW2\Assets_t\Characters\Americans_t\US_Army\lodu_SCR_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_carbine_nco.p3d";
			containerClass = "Supply140";
			mass = 7;
			hiddenSelections[] = {"camo_0","camo_1","camo_2","camo_3","camo_4"};
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
	class V_LIB_US_Vest_Garand: V_LIB_Vest_Camo_Base
	{
		author = "LODU & tierprot";
		scope = 1;
		displayName = "$STR_CTH_V_LIB_US_Vest_Garand";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_US_Army_garand_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_garand.p3d";
		hiddenSelections[] = {"camo_0","camo_1"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_garand_belt_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_us_suspends01_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_garand.p3d";
			containerClass = "Supply70";
			mass = 7;
			hiddenSelections[] = {"camo_0","camo_1"};
		};
	};
	class V_LIB_US_Vest_Garand_ARM: V_LIB_Vest_Camo_Base
	{
		author = "LODU & tierprot";
		scope = 2;
		displayName = "$STR_CTH_V_LIB_US_Vest_Garand";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_US_Army_garand_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_garand.p3d";
		hiddenSelections[] = {"camo_0","camo_1"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_garand_belt_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_us_suspends01_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_garand.p3d";
			containerClass = "Supply70";
			mass = 7;
			hiddenSelections[] = {"camo_0","camo_1"};
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
	class V_LIB_US_Vest_Grenadier: V_LIB_Vest_Camo_Base
	{
		author = "LODU & tierprot";
		scope = 1;
		displayName = "$STR_CTH_V_LIB_US_Vest_Grenadier";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_US_Army_grenadier_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_grenadier.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_garand_belt_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_us_suspends01_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_us_bags01_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_grenadier.p3d";
			containerClass = "Supply140";
			mass = 7;
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		};
	};
	class V_LIB_US_Vest_Grenadier_ARM: V_LIB_Vest_Camo_Base
	{
		author = "LODU & tierprot";
		scope = 2;
		displayName = "$STR_CTH_V_LIB_US_Vest_Grenadier";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_US_Army_grenadier_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_grenadier.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_garand_belt_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_us_suspends01_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_us_bags01_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_grenadier.p3d";
			containerClass = "Supply140";
			mass = 7;
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
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
	class V_LIB_US_Vest_Medic: V_LIB_Vest_Camo_Base
	{
		author = "LODU & tierprot";
		scope = 1;
		displayName = "$STR_CTH_V_LIB_US_Vest_Medic";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_US_Army_medic_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_medic.p3d";
		hiddenSelections[] = {"camo_0"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_medic_bag_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_medic.p3d";
			containerClass = "Supply140";
			mass = 7;
			hiddenSelections[] = {"camo_0"};
		};
	};
	class V_LIB_US_Vest_Medic_ARM: V_LIB_Vest_Camo_Base
	{
		author = "LODU & tierprot";
		scope = 2;
		displayName = "$STR_CTH_V_LIB_US_Vest_Medic";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_US_Army_medic_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_medic.p3d";
		hiddenSelections[] = {"camo_0"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_medic_bag_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_medic.p3d";
			containerClass = "Supply140";
			mass = 7;
			hiddenSelections[] = {"camo_0"};
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
	class V_LIB_US_Vest_Medic2: V_LIB_Vest_Camo_Base
	{
		author = "LODU & El Tyranos";
		scope = 1;
		displayName = "$STR_CTH_V_LIB_US_Vest_Medic_Heavy";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_US_Army_medic_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_medic2.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_medic_bag_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_garand_belt_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_pouchs_us_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_medic2.p3d";
			containerClass = "Supply140";
			mass = 7;
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		};
	};
	class V_LIB_US_Vest_Medic2_ARM: V_LIB_Vest_Camo_Base
	{
		author = "LODU & El Tyranos";
		scope = 2;
		displayName = "$STR_CTH_V_LIB_US_Vest_Medic_Heavy";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_US_Army_medic_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_medic2.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_medic_bag_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_garand_belt_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_pouchs_us_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_medic2.p3d";
			containerClass = "Supply140";
			mass = 7;
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
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
	class V_LIB_US_Vest_Thompson: V_LIB_Vest_Camo_Base
	{
		author = "LODU & tierprot";
		scope = 1;
		displayName = "$STR_CTH_V_LIB_US_Vest_Thompson";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_US_Army_thompson_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_thompson.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_garand_belt_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_pouchs_us_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_us_suspends01_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_thompson.p3d";
			containerClass = "Supply140";
			mass = 7;
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		};
	};
	class V_LIB_US_Vest_Thompson_ARM: V_LIB_Vest_Camo_Base
	{
		author = "LODU & tierprot";
		scope = 2;
		displayName = "$STR_CTH_V_LIB_US_Vest_Thompson";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_US_Army_thompson_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_thompson.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_garand_belt_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_pouchs_us_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_us_suspends01_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_thompson.p3d";
			containerClass = "Supply140";
			mass = 7;
			hiddenSelections[] = {"camo_0","camo_1","camo_2"};
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
	class V_LIB_US_Vest_Thompson_nco: V_LIB_Vest_Camo_Base
	{
		author = "LODU & tierprot";
		scope = 1;
		displayName = "$STR_CTH_V_LIB_US_Vest_Thompson_nco";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_US_Army_thompson_nco_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_thompson_nco.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2","camo_3"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_garand_belt_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_pouchs_us_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_us_suspends01_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_us_scr_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_thompson_nco.p3d";
			containerClass = "Supply140";
			mass = 7;
			hiddenSelections[] = {"camo_0","camo_1","camo_2","camo_3"};
		};
	};
	class V_LIB_US_Vest_Thompson_nco_ARM: V_LIB_Vest_Camo_Base
	{
		author = "LODU & tierprot";
		scope = 2;
		displayName = "$STR_CTH_V_LIB_US_Vest_Thompson_nco";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Clothing\V_US_Army_thompson_nco_vest_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_thompson_nco.p3d";
		hiddenSelections[] = {"camo_0","camo_1","camo_2","camo_3"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_garand_belt_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_pouchs_us_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_us_suspends01_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_us_scr_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_thompson_nco.p3d";
			containerClass = "Supply140";
			mass = 7;
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
	class V_LIB_US_Vest_45: V_LIB_Vest_Camo_Base
	{
		author = "LODU & tierprot";
		scope = 1;
		displayName = "$STR_CTH_V_LIB_US_Vest_45";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_45.p3d";
		hiddenSelections[] = {"camo_0","camo_1"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_garand_belt_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_pouchs_us_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_45.p3d";
			containerClass = "Supply140";
			mass = 7;
			hiddenSelections[] = {"camo_0","camo_1"};
		};
	};
	class V_LIB_US_Vest_45_ARM: V_LIB_Vest_Camo_Base
	{
		author = "LODU & tierprot";
		scope = 2;
		displayName = "$STR_CTH_V_LIB_US_Vest_45";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_45.p3d";
		hiddenSelections[] = {"camo_0","camo_1"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_garand_belt_co.paa","ww2\assets_t\characters\americans_t\us_army\lodu_pouchs_us_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_vest_45.p3d";
			containerClass = "Supply140";
			mass = 7;
			hiddenSelections[] = {"camo_0","camo_1"};
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
	class B_LIB_US_Backpack: B_LIB_AssaultPack_Base
	{
		author = "LODU & tierprot";
		scope = 2;
		displayName = "$STR_CTH_B_LIB_US_Backpack";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Backpacks\B_US_Army_backpack_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_backpack.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Americans_t\US_Army\lodu_bagpack_co.paa"};
		maximumLoad = 300;
	};
	class B_LIB_US_Backpack_dday: B_LIB_US_Backpack
	{
		author = "LODU, tierprot & Shemich";
		displayName = "$STR_CTH_B_LIB_US_Backpack_dday";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_backpack_dday.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_bagpack_co.paa","ww2\assets_t\characters\americans_t\us_army\us_m7_gas_mask_bag_co.paa"};
	};
	class B_LIB_US_Backpack_eng: B_LIB_US_Backpack
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "$STR_CTH_B_LIB_US_Backpack_eng";
		class TransportMagazines
		{
			class _xx_LIB_US_M1A1_ATMINE_mag
			{
				magazine = "LIB_US_M1A1_ATMINE_mag";
				count = 1;
			};
			class _xx_LIB_US_M3_MINE_mag
			{
				magazine = "LIB_US_M3_MINE_mag";
				count = 3;
			};
		};
	};
	class B_LIB_US_MedicBackpack: B_LIB_US_Backpack
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "$STR_CTH_B_LIB_US_MedicBackpack";
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
				count = 10;
			};
		};
	};
	class B_LIB_US_MedicBackpack_Empty: B_LIB_US_MedicBackpack
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		class TransportItems{};
	};
	class B_LIB_US_RocketBag: B_LIB_AssaultPack_Base
	{
		author = "LODU & tierprot";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "$STR_CTH_B_LIB_US_RocketBag";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Backpacks\B_US_Army_rocket_bag_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_rocket_bag.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Americans_t\US_Army\lodu_us_bags01_co.paa"};
		maximumLoad = 300;
		class TransportMagazines
		{
			class _xx_LIB_1Rnd_60mm_M6
			{
				magazine = "LIB_1Rnd_60mm_M6";
				count = 3;
			};
		};
	};
	class B_LIB_US_RocketBag_Empty: B_LIB_US_RocketBag
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		class TransportMagazines{};
	};
	class B_LIB_US_Radio: B_LIB_AssaultPack_Base
	{
		author = "LODU & tierprot";
		scope = 2;
		displayName = "$STR_CTH_B_LIB_US_Radio";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Backpacks\B_US_Army_radio_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_radio.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Americans_t\US_Army\lodu_SCR_300_co.paa"};
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
	class B_LIB_US_Bandoleer: B_LIB_AssaultPack_Base
	{
		author = "LODU & tierprot";
		scope = 2;
		displayName = "$STR_CTH_B_LIB_US_Bandoleer";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Backpacks\B_US_Army_bandoleer_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_bandoleer.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Americans_t\US_Army\lodu_us_bags01_co.paa"};
		maximumLoad = 300;
	};
	class B_LIB_US_MGbag: B_LIB_AssaultPack_Base
	{
		author = "LODU & tierprot";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "$STR_CTH_B_LIB_US_MGbag";
		picture = "\WW2\Assets_t\Characters\Misc_t\Pictures\Backpacks\B_US_Army_mg_bag_ca.paa";
		model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_MG_bag.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\Americans_t\US_Army\lodu_us_bags01_co.paa"};
		maximumLoad = 300;
		class TransportMagazines
		{
			class _xx_LIB_20Rnd_762x63
			{
				magazine = "LIB_20Rnd_762x63";
				count = 4;
			};
		};
	};
	class B_LIB_US_MGbag_Empty: B_LIB_US_MGbag
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		class TransportMagazines{};
	};
};
//};
