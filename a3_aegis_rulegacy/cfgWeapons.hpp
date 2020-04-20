class CfgWeapons
{
    class H_HelmetSpecter_base_F;
	class H_HelmetSpecter_F: H_HelmetSpecter_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = "Raven Helmet";
		picture = "\A3_Aegis_RULegacy\Data\UI\icon_H_HelmetSpecter_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis_RULegacy\Data\H_HelmetSpecter_01_CO.paa"};
	};
	class H_HelmetSpecter_paint_F: H_HelmetSpecter_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = "Raven Helmet (Camo)";
		picture = "\A3_Aegis_RULegacy\Data\UI\icon_H_HelmetSpecter_paint_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis_RULegacy\Data\H_HelmetSpecter_01_paint_CO.paa"};
	};
    class H_HelmetSpecter_headset_base_F;
	class H_HelmetSpecter_headset_F: H_HelmetSpecter_headset_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = "Raven Helmet (Headset)";
		picture = "\A3_Aegis_RULegacy\Data\UI\icon_H_HelmetSpecter_headset_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis_RULegacy\Data\H_HelmetSpecter_01_CO.paa",
			"\A3_Aegis_RULegacy\Data\H_HelmetSpecter_01_cover_taiga_CO.paa"
		};
	};
	class H_HelmetSpecter_paint_headset_F: H_HelmetSpecter_headset_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = "Raven Helmet (Camo, Headset)";
		picture = "\A3_Aegis_RULegacy\Data\UI\icon_H_HelmetSpecter_paint_headset_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis_RULegacy\Data\H_HelmetSpecter_01_paint_CO.paa",
			"\A3_Aegis_RULegacy\Data\H_HelmetSpecter_01_cover_khaki_CO.paa"
		};
	};
	class H_HelmetSpecter_cover_base_F;
	class H_HelmetSpecter_cover_khaki_F: H_HelmetSpecter_cover_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = "Raven Helmet (Cover B)";
		picture = "\A3_Aegis_RULegacy\Data\UI\icon_H_HelmetSpecter_cover_khaki_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis_RULegacy\Data\H_HelmetSpecter_01_CO.paa",
			"\A3_Aegis_RULegacy\Data\H_HelmetSpecter_01_cover_khaki_CO.paa"
		};
	};
	class H_HelmetSpecter_cover_taiga_F: H_HelmetSpecter_cover_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = "Raven Helmet (Cover T)";
		picture = "\A3_Aegis_RULegacy\Data\UI\icon_H_HelmetSpecter_cover_taiga_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis_RULegacy\Data\H_HelmetSpecter_01_CO.paa",
			"\A3_Aegis_RULegacy\Data\H_HelmetSpecter_01_cover_taiga_CO.paa"
		};
	};
	class H_HelmetSpecter_cover_hex_F: H_HelmetSpecter_cover_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = "Raven Helmet (Hex)";
		picture = "\A3_Aegis_RULegacy\Data\UI\icon_H_HelmetSpecter_cover_hex_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_brown_CO.paa",
			"\A3_Aegis_RULegacy\Data\H_HelmetSpecter_01_cover_hex_CO.paa"
		};
	};
	class H_HelmetSpecter_cover_ghex_F: H_HelmetSpecter_cover_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = "Raven Helmet (Green Hex)";
		picture = "\A3_Aegis_RULegacy\Data\UI\icon_H_HelmetSpecter_cover_ghex_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_brown_CO.paa",
			"\A3_Aegis_RULegacy\Data\H_HelmetSpecter_01_cover_ghex_CO.paa"
		};
	};
	class H_HelmetSpecter_cover_oucamo_F: H_HelmetSpecter_cover_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = "Raven Helmet (Urban)";
		picture = "\A3_Aegis_RULegacy\Data\UI\icon_H_HelmetSpecter_cover_oucamo_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_brown_CO.paa",
			"\A3_Aegis_RULegacy\Data\H_HelmetSpecter_01_cover_oucamo_CO.paa"
		};
	};
    class Uniform_Base;
    class UniformItem;
    class U_O_R_TankerCoveralls_01_F: Uniform_Base
    {
        author = $STR_A3_A_AveryTheKitty;
        scope = public;
        displayName = "Tanker Coveralls [Russia]";
        picture = "\A3_Aegis_RULegacy\Data\UI\icon_U_O_R_TankerCoveralls_01_F_CA.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelections[] = {camo};
        hiddenSelectionsTextures[] = {"\A3_Aegis_RULegacy\Data\O_R_Crew_01_CO.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = O_R_TankerCoveralls_01_F;
            containerClass = Supply30;
            mass = 30;
        };
    };
    class U_O_R_Uniform_01_arid_F: Uniform_Base
    {
        author = $STR_A3_A_AveryTheKitty;
        scope = public;
        displayName = "Bazanit-B Uniform";
        picture = "\A3_Aegis_RULegacy\Data\UI\icon_U_O_R_Uniform_01_arid_F_CA.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {camo};
        hiddenSelectionsTextures[] = {"\A3_Aegis_RULegacy\Data\O_R_Soldier_01_arid_CO.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = O_R_Uniform_01_arid_F;
            containerClass = Supply40;
            mass = 40;
        };
    };
    class U_O_R_Uniform_01_arid_tanktop_F: Uniform_Base
    {
        author = $STR_A3_A_AveryTheKitty;
        scope = public;
        displayName = "Bazanit-B Uniform (Tank Top)";
        picture = "\A3_Aegis_RULegacy\Data\UI\icon_U_O_R_Uniform_01_arid_tanktop_F_CA.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelections[] = {camo};
        hiddenSelectionsTextures[] = {"\A3_Aegis_RULegacy\Data\O_R_Soldier_01_tanktop_CO.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = O_R_Uniform_01_arid_tanktop_F;
            containerClass = Supply40;
            mass = 40;
        };
    };
    class U_O_R_Uniform_01_taiga_F: Uniform_Base
    {
        author = $STR_A3_A_AveryTheKitty;
        scope = public;
        displayName = "Bazanit-T Uniform";
        picture = "\A3_Aegis_RULegacy\Data\UI\icon_U_O_R_Uniform_01_taiga_F_CA.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {camo};
        hiddenSelectionsTextures[] = {"\A3_Aegis_RULegacy\Data\O_R_Soldier_01_taiga_CO.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = O_R_Uniform_01_taiga_F;
            containerClass = Supply40;
            mass = 40;
        };
    };
    class U_O_R_Uniform_01_taiga_tanktop_F: Uniform_Base
    {
        author = $STR_A3_A_AveryTheKitty;
        scope = public;
        displayName = "Bazanit-T Uniform (Tank Top)";
        picture = "\A3_Aegis_RULegacy\Data\UI\icon_U_O_R_Uniform_01_taiga_tanktop_F_CA.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelections[] = {camo};
        hiddenSelectionsTextures[] = {"\A3_Aegis_RULegacy\Data\O_R_Soldier_01_tanktop_CO.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = O_R_Uniform_01_taiga_tanktop_F;
            containerClass = Supply40;
            mass = 40;
        };
    };
    class U_O_R_Uniform_01_taiga_sweater_F: Uniform_Base
    {
        author = $STR_A3_A_AveryTheKitty;
        scope = public;
        displayName = "Bazanit-T Uniform (Sweater)";
        picture = "\A3_Aegis_RULegacy\Data\UI\icon_U_O_R_Uniform_01_taiga_sweater_F_CA.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelections[] = {camo};
        hiddenSelectionsTextures[] = {"\A3_Aegis_RULegacy\Data\O_R_Soldier_01_taiga_sweater_CO.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = O_R_Uniform_01_taiga_sweater_F;
            containerClass = Supply40;
            mass = 40;
        };
    };
    class V_CarrierRigKBT_01_base_F;
	class V_CarrierRigKBT_01_Green_F: V_CarrierRigKBT_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = "Modular Carrier Vest (Green)";
		picture = "\A3_Aegis_RULegacy\Data\UI\icon_V_CarrierRigKBT_01_Green_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis_RULegacy\Data\CarrierRigKBT_01_Green_CO.paa"};
	};
    class V_CarrierRigKBT_01_light_base_F;
	class V_CarrierRigKBT_01_light_Green_F: V_CarrierRigKBT_01_light_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = "Modular Carrier Lite (Green)";
		picture = "\A3_Aegis_RULegacy\Data\UI\icon_V_CarrierRigKBT_01_light_Green_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis_RULegacy\Data\CarrierRigKBT_01_Green_CO.paa"};
	};
    class V_CarrierRigKBT_01_heavy_base_F;
	class V_CarrierRigKBT_01_heavy_Green_F: V_CarrierRigKBT_01_heavy_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = "Modular Carrier GL Rig (Green)";
		picture = "\A3_Aegis_RULegacy\Data\UI\icon_V_CarrierRigKBT_01_heavy_Green_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis_RULegacy\Data\CarrierRigKBT_01_Green_CO.paa"};
	};
};