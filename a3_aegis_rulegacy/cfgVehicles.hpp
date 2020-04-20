#define HEADGEAR_HOLDER(a,b,c) \
	class Headgear_##a##: Headgear_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = ##c##; \
		vehicleClass = ItemsHeadgear; \
		model = "\A3\Weapons_F\DummyCap.p3d"; \
		class TransportItems \
		{ \
			item_xx(##a##,1); \
		}; \
	};

#define UNIFORM_HOLDER(a,b) \
	class Item_##a##: Item_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = EdSubcat_Uniforms; \
		vehicleClass = ItemsUniforms; \
		model = "\A3\Weapons_F\dummyweapon.p3d"; \
		class TransportItems \
		{ \
			item_xx(##a##,1); \
		}; \
	};

#define VEST_HOLDER(a,b) \
	class Vest_##a##: Vest_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = EdSubcat_Vests; \
		vehicleClass = ItemsVests; \
		class TransportItems \
		{ \
			item_xx(##a##,1); \
		}; \
	};

class CfgVehicles
{
    // Arma 3 Apex
    class I_C_Soldier_Para_4_F;
    class I_C_Soldier_Camo_F;
    class B_GEN_Commander_F;
    // Arma 3 Tanks
    class I_Story_Crew_F;
    // Arma 3 Enoch
    class O_R_Man_Base_F;
    class O_R_Soldier_Base_F: O_R_Man_Base_F
    {
        uniformClass = U_O_R_Gorka_01_camo_F;
    };
    class O_R_Soldier_TL_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_cover_taiga_F,
            V_CarrierRigKBT_01_heavy_Green_F,
            ItemGPS,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_cover_taiga_F,
            V_CarrierRigKBT_01_heavy_Green_F,
            ItemGPS,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_GL_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_F,
            V_CarrierRigKBT_01_heavy_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_F,
            V_CarrierRigKBT_01_heavy_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_soldier_exp_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_headset_F,
            V_CarrierRigKBT_01_heavy_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_headset_F,
            V_CarrierRigKBT_01_heavy_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_AR_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_cover_taiga_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_cover_taiga_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_soldier_M_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_cover_taiga_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_cover_taiga_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_medic_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_headset_F,
            V_CarrierRigKBT_01_heavy_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_headset_F,
            V_CarrierRigKBT_01_heavy_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_LAT_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_cover_taiga_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_cover_taiga_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    // Arma 3 Aegis
    class O_R_TankerCoveralls_01_F: I_Story_Crew_F
    {
        scope = protected;
        scopeCurator = private;
		modelSides[] =
        {
            TEast,
            TCivilian
        };
        uniformClass = U_O_R_TankerCoveralls_01_F;
        hiddenSelectionsTextures[] = {"\A3_Aegis_RULegacy\Data\O_R_Crew_01_CO.paa"};
        hiddenSelectionsMaterials[] = {"\A3_Aegis_RULegacy\Data\O_R_Crew_01.rvmat"};
    };
    class O_R_Uniform_01_arid_F: I_C_Soldier_Camo_F
    {
        scope = protected;
        scopeCurator = private;
		modelSides[] =
        {
            TEast,
            TCivilian
        };
        uniformClass = U_O_R_Uniform_01_arid_F;
        hiddenSelectionsTextures[] =
        {
            "\A3_Aegis_RULegacy\Data\O_R_Soldier_01_arid_CO.paa",
            "\A3_Aegis_RULegacy\Data\O_R_Soldier_01_arid_pants_CO.paa"
        };
    };
    class O_R_Uniform_01_taiga_F: O_R_Uniform_01_arid_F
    {
        uniformClass = U_O_R_Uniform_01_taiga_F;
        hiddenSelectionsTextures[] =
        {
            "\A3_Aegis_RULegacy\Data\O_R_Soldier_01_taiga_CO.paa",
            "\A3_Aegis_RULegacy\Data\O_R_Soldier_01_taiga_pants_CO.paa"
        };
    };
    class O_R_Uniform_01_arid_tanktop_F: I_C_Soldier_Para_4_F
    {
        scope = protected;
        scopeCurator = private;
		modelSides[] =
        {
            TEast,
            TCivilian
        };
        uniformClass = U_O_R_Uniform_01_arid_tanktop_F;
        hiddenSelectionsTextures[] =
        {
            "\A3_Aegis_RULegacy\Data\O_R_Soldier_01_tanktop_CO.paa",
            "\A3_Aegis_RULegacy\Data\O_R_Soldier_01_arid_pants_CO.paa"
        };
    };
    class O_R_Uniform_01_taiga_tanktop_F: O_R_Uniform_01_arid_tanktop_F
    {
        uniformClass = U_O_R_Uniform_01_taiga_tanktop_F;
        hiddenSelectionsTextures[] =
        {
            "\A3_Aegis_RULegacy\Data\O_R_Soldier_01_tanktop_CO.paa",
            "\A3_Aegis_RULegacy\Data\O_R_Soldier_01_taiga_pants_CO.paa"
        };
    };
    class O_R_Uniform_01_taiga_sweater_F: B_GEN_Commander_F
    {
        scope = protected;
        scopeCurator = private;
		modelSides[] =
        {
            TEast,
            TCivilian
        };
        uniformClass = U_O_R_Uniform_01_taiga_sweater_F;
        hiddenSelectionsTextures[] = {"\A3_Aegis_RULegacy\Data\O_R_Soldier_01_taiga_sweater_CO.paa"};
    };
    class O_R_Soldier_A_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_AAR_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_F,
            V_ChestrigF_rgr,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_F,
            V_ChestrigF_rgr,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_support_AMG_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_F,
            V_ChestrigF_rgr,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_F,
            V_ChestrigF_rgr,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_support_AMort_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_F,
            V_ChestrigF_rgr,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_F,
            V_ChestrigF_rgr,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_AHAT_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_F,
            V_ChestrigF_rgr,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_F,
            V_ChestrigF_rgr,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_AAA_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_F,
            V_ChestrigF_rgr,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_F,
            V_ChestrigF_rgr,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_AAT_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_F,
            V_ChestrigF_rgr,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_F,
            V_ChestrigF_rgr,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_crew_F: O_R_Soldier_Base_F
    {
        uniformClass = U_O_R_TankerCoveralls_01_F;
        linkedItems[] =
        {
            H_Tank_black_F,
            V_CarrierRigKBT_01_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_Tank_black_F,
            V_CarrierRigKBT_01_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_engineer_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_paint_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_paint_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_support_GMG_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_F,
            V_ChestrigF_rgr,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_F,
            V_ChestrigF_rgr,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_support_MG_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_F,
            V_ChestrigF_rgr,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_F,
            V_ChestrigF_rgr,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_support_Mort_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_F,
            V_ChestrigF_rgr,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_F,
            V_ChestrigF_rgr,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_helipilot_F: O_R_Soldier_Base_F
    {
        uniformClass = U_O_R_Gorka_01_black_F;
        linkedItems[] =
        {
            H_PilotHelmetHeli_B,
            V_TacVest_blk,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_PilotHelmetHeli_B,
            V_TacVest_blk,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_helicrew_F: O_R_helipilot_F
    {
        uniformClass = U_O_R_Gorka_01_black_F;
        linkedItems[] =
        {
            H_CrewHelmetHeli_B,
            V_TacVest_blk,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_CrewHelmetHeli_B,
            V_TacVest_blk,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_soldier_AA_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_headset_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_headset_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_soldier_AT_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_headset_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_headset_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_officer_F: O_R_Soldier_Base_F
    {
        uniformClass = U_O_R_Uniform_01_taiga_F;
        linkedItems[] =
        {
            H_MilCap_taiga,
            V_BandollierB_rgr,
            ItemGPS,
            DefaultManLinkedItems
        };
        respawnLinkedItems[] =
        {
            H_MilCap_taiga,
            V_BandollierB_rgr,
            ItemGPS,
            DefaultManLinkedItems
        };
    };
    class O_R_soldier_repair_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_cover_taiga_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_cover_taiga_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_HAT_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_cover_taiga_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_cover_taiga_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_lite_F: O_R_Soldier_Base_F
    {
        uniformClass = U_O_R_Uniform_01_taiga_tanktop_F;
        linkedItems[] =
        {
            H_MilCap_taiga,
            V_CarrierRigKBT_01_Green_F,
            DefaultManLinkedItems
        };
        respawnLinkedItems[] =
        {
            H_MilCap_taiga,
            V_CarrierRigKBT_01_Green_F,
            DefaultManLinkedItems
        };
    };
    class O_R_Soldier_CQ_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_paint_headset_F,
            V_CarrierRigKBT_01_heavy_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_paint_headset_F,
            V_CarrierRigKBT_01_heavy_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_SL_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_cover_taiga_F,
            V_CarrierRigKBT_01_heavy_Green_F,
            ItemGPS,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_cover_taiga_F,
            V_CarrierRigKBT_01_heavy_Green_F,
            ItemGPS,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_soldier_UAV_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            O_R_UAVTerminal,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            O_R_UAVTerminal,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_unarmed_F: O_R_Soldier_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_cover_taiga_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_cover_taiga_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems
        };
    };
    class O_R_Soldier_CBRN_F: O_R_Soldier_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_F,
            V_CarrierRigKBT_01_light_Green_F,
            G_AirPurifyingRespirator_02_olive_F,
            DefaultManCbrnLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_F,
            V_CarrierRigKBT_01_light_Green_F,
            G_AirPurifyingRespirator_02_olive_F,
            DefaultManCbrnLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_RadioOperator_F: O_R_Soldier_F
    {
        linkedItems[] =
        {
            H_HelmetSpecter_paint_headset_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_paint_headset_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_A_ard_F: O_R_Soldier_A_F
    {
        uniformClass = U_O_R_Uniform_01_arid_F;
        linkedItems[] =
        {
            H_HelmetSpecter_brown_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_brown_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_AAR_ard_F: O_R_Soldier_AAR_F
    {
        uniformClass = U_O_R_Uniform_01_arid_F;
        linkedItems[] =
        {
            H_HelmetSpecter_brown_F,
            V_ChestrigF_rgr,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_brown_F,
            V_ChestrigF_rgr,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_AAA_ard_F: O_R_Soldier_AAA_F
    {
        uniformClass = U_O_R_Uniform_01_arid_F;
        linkedItems[] =
        {
            H_HelmetSpecter_brown_F,
            V_ChestrigF_rgr,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_brown_F,
            V_ChestrigF_rgr,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_AAT_ard_F: O_R_Soldier_AAT_F
    {
        uniformClass = U_O_R_Uniform_01_arid_F;
        linkedItems[] =
        {
            H_HelmetSpecter_brown_F,
            V_ChestrigF_rgr,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_brown_F,
            V_ChestrigF_rgr,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_soldier_AR_ard_F: O_R_soldier_AR_F
    {
        uniformClass = U_O_R_Uniform_01_arid_F;
        linkedItems[] =
        {
            H_HelmetSpecter_cover_khaki_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_cover_khaki_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_medic_ard_F: O_R_medic_F
    {
        uniformClass = U_O_R_Uniform_01_arid_F;
        linkedItems[] =
        {
            H_HelmetSpecter_brown_headset_F,
            V_CarrierRigKBT_01_heavy_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_brown_headset_F,
            V_CarrierRigKBT_01_heavy_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_engineer_ard_F: O_R_engineer_F
    {
        uniformClass = U_O_R_Uniform_01_arid_F;
        linkedItems[] =
        {
            H_HelmetSpecter_brown_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_brown_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_soldier_exp_ard_F: O_R_soldier_exp_F
    {
        uniformClass = U_O_R_Uniform_01_arid_F;
        linkedItems[] =
        {
            H_HelmetSpecter_brown_headset_F,
            V_CarrierRigKBT_01_heavy_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_brown_headset_F,
            V_CarrierRigKBT_01_heavy_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_GL_ard_F: O_R_Soldier_GL_F
    {
        uniformClass = U_O_R_Uniform_01_arid_F;
        linkedItems[] =
        {
            H_HelmetSpecter_brown_F,
            V_CarrierRigKBT_01_heavy_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_brown_F,
            V_CarrierRigKBT_01_heavy_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_soldier_M_ard_F: O_R_soldier_M_F
    {
        uniformClass = U_O_R_Uniform_01_arid_F;
        linkedItems[] =
        {
            H_HelmetSpecter_cover_khaki_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_cover_khaki_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_soldier_AA_ard_F: O_R_soldier_AA_F
    {
        uniformClass = U_O_R_Uniform_01_arid_F;
        linkedItems[] =
        {
            H_HelmetSpecter_brown_headset_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_brown_headset_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_soldier_AT_ard_F: O_R_soldier_AT_F
    {
        uniformClass = U_O_R_Uniform_01_arid_F;
        linkedItems[] =
        {
            H_HelmetSpecter_brown_headset_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_brown_headset_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_officer_ard_F: O_R_officer_F
    {
        uniformClass = U_O_R_Uniform_01_arid_F;
        linkedItems[] =
        {
            H_MilCap_grn,
            V_BandollierB_rgr,
            ItemGPS,
            DefaultManLinkedItems
        };
        respawnLinkedItems[] =
        {
            H_MilCap_grn,
            V_BandollierB_rgr,
            ItemGPS,
            DefaultManLinkedItems
        };
    };
    class O_R_soldier_repair_ard_F: O_R_soldier_repair_F
    {
        uniformClass = U_O_R_Uniform_01_arid_F;
        linkedItems[] =
        {
            H_HelmetSpecter_brown_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_brown_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_ard_F: O_R_Soldier_F
    {
        uniformClass = U_O_R_Uniform_01_arid_F;
        linkedItems[] =
        {
            H_HelmetSpecter_cover_khaki_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_cover_khaki_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_LAT_ard_F: O_R_Soldier_LAT_F
    {
        uniformClass = U_O_R_Uniform_01_arid_F;
        linkedItems[] =
        {
            H_HelmetSpecter_cover_khaki_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_cover_khaki_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_CQ_ard_F: O_R_Soldier_CQ_F
    {
        uniformClass = U_O_R_Uniform_01_arid_F;
        linkedItems[] =
        {
            H_HelmetSpecter_brown_headset_F,
            V_CarrierRigKBT_01_heavy_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_brown_headset_F,
            V_CarrierRigKBT_01_heavy_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_SL_ard_F: O_R_Soldier_SL_F
    {
        uniformClass = U_O_R_Uniform_01_arid_F;
        linkedItems[] =
        {
            H_HelmetSpecter_cover_khaki_F,
            V_CarrierRigKBT_01_heavy_Green_F,
            ItemGPS,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_cover_khaki_F,
            V_CarrierRigKBT_01_heavy_Green_F,
            ItemGPS,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_TL_ard_F: O_R_Soldier_TL_F
    {
        uniformClass = U_O_R_Uniform_01_arid_F;
        linkedItems[] =
        {
            H_HelmetSpecter_cover_khaki_F,
            V_CarrierRigKBT_01_heavy_Green_F,
            ItemGPS,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_cover_khaki_F,
            V_CarrierRigKBT_01_heavy_Green_F,
            ItemGPS,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_unarmed_ard_F: O_R_Soldier_unarmed_F
    {
        uniformClass = U_O_R_Uniform_01_arid_F;
        linkedItems[] =
        {
            H_HelmetSpecter_cover_khaki_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_cover_khaki_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems
        };
    };
    class O_R_RadioOperator_ard_F: O_R_Soldier_ard_F
    {
        uniformClass = U_O_R_Uniform_01_arid_F;
        weapons[] =
        {
            arifle_AK12_545_aco_pointer_F,
            hgun_Rook40_F,
            DefaultManWeapons
        };
        respawnWeapons[] =
        {
            arifle_AK12_545_aco_pointer_F,
            hgun_Rook40_F,
            DefaultManWeapons
        };
        linkedItems[] =
        {
            H_HelmetSpecter_brown_headset_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            H_HelmetSpecter_brown_headset_F,
            V_CarrierRigKBT_01_light_Green_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Headgear_Base_F;
	HEADGEAR_HOLDER(H_HelmetSpecter_F,"Raven Helmet",EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecter_paint_F,"Raven Helmet (Camo)",EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecter_headset_F,"Raven Helmet (Headset)",EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecter_paint_headset_F,"Raven Helmet (Camo, Headset)",EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecter_cover_khaki_F,"Raven Helmet (Cover B)",EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecter_cover_taiga_F,"Raven Helmet (Cover T)",EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecter_cover_hex_F,"Raven Helmet (Hex)",EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecter_cover_ghex_F,"Raven Helmet (Green Hex)",EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecter_cover_oucamo_F,"Raven Helmet (Urban)",EdSubcat_Helmets)
    class Item_Base_F;
	UNIFORM_HOLDER(U_O_R_TankerCoveralls_01_F,"Tanker Coveralls [Russia]")
	UNIFORM_HOLDER(U_O_R_Uniform_01_arid_F,"Bazanit-P Uniform")
	UNIFORM_HOLDER(U_O_R_Uniform_01_arid_tanktop_F,"Bazanit-P Uniform (Tank Top)")
	UNIFORM_HOLDER(U_O_R_Uniform_01_taiga_F,"Bazanit-T Uniform")
	UNIFORM_HOLDER(U_O_R_Uniform_01_taiga_tanktop_F,"Bazanit-T Uniform (Tank Top)")
	UNIFORM_HOLDER(U_O_R_Uniform_01_taiga_sweater_F,"Bazanit-T Uniform (Sweater)")
    class Vest_Base_F;
    VEST_HOLDER(V_CarrierRigKBT_01_Green_F,"Modular Carrier Vest (Green)")
	VEST_HOLDER(V_CarrierRigKBT_01_light_Green_F,"Modular Carrier Lite (Green)")
	VEST_HOLDER(V_CarrierRigKBT_01_heavy_Green_F,"Modular Carrier GL Rig (Green)")
};