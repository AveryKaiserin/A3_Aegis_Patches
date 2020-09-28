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

class CfgVehicles
{
    // OPF_R_F
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
            V_CarrierRigKBT_01_heavy_Olive_F,
            Opf_H_HelmetSpecter_cover_taiga_F,
            DefaultManLeaderLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_heavy_Olive_F,
            Opf_H_HelmetSpecter_cover_taiga_F,
            DefaultManLeaderLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_GL_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_heavy_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_heavy_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_soldier_exp_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_heavy_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_heavy_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_AR_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Opf_H_HelmetSpecter_cover_taiga_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Opf_H_HelmetSpecter_cover_taiga_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_soldier_M_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Opf_H_HelmetSpecter_cover_taiga_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Opf_H_HelmetSpecter_cover_taiga_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_medic_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_headset_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_headset_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class O_R_Soldier_LAT_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Opf_H_HelmetSpecter_cover_taiga_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Opf_H_HelmetSpecter_cover_taiga_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    // Arma 3 Aegis
    class Aegis_O_R_Soldier_A_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_Soldier_AAR_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_support_AMG_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_TacChestrig_grn_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_TacChestrig_grn_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_support_AMort_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_TacChestrig_grn_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_TacChestrig_grn_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_Soldier_AHAT_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_Soldier_AAA_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_Soldier_AAT_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_crew_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_Olive_F,
            H_Tank_black_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_Olive_F,
            H_Tank_black_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_engineer_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_paint_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_paint_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_support_GMG_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_TacChestrig_grn_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_TacChestrig_grn_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_support_MG_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_TacChestrig_grn_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_TacChestrig_grn_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_support_Mort_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_TacChestrig_grn_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_TacChestrig_grn_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_helipilot_F: O_R_Soldier_Base_F
    {
        uniformClass = U_O_R_Gorka_01_black_F;
        linkedItems[] =
        {
            V_TacVest_blk,
            H_PilotHelmetHeli_B,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_TacVest_blk,
            H_PilotHelmetHeli_B,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_helicrew_F: O_R_helipilot_F
    {
        uniformClass = U_O_R_Gorka_01_black_F;
        linkedItems[] =
        {
            V_TacVest_blk,
            H_CrewHelmetHeli_B,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_TacVest_blk,
            H_CrewHelmetHeli_B,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_soldier_AA_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_headset_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_headset_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_soldier_AT_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_headset_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_headset_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_officer_F: O_R_Soldier_Base_F{};
    class Aegis_O_R_soldier_repair_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_Soldier_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Opf_H_HelmetSpecter_cover_taiga_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Opf_H_HelmetSpecter_cover_taiga_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_Soldier_HAT_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Opf_H_HelmetSpecter_cover_taiga_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Opf_H_HelmetSpecter_cover_taiga_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_Soldier_lite_F: O_R_Soldier_Base_F
    {
        uniformClass = U_O_R_Gorka_01_camo_F;
        linkedItems[] =
        {
            V_CarrierRigKBT_01_Olive_F,
            H_MilCap_taiga,
            DefaultManLinkedItems
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_Olive_F,
            H_MilCap_taiga,
            DefaultManLinkedItems
        };
    };
    class Aegis_O_R_Soldier_CQ_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_paint_headset_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_paint_headset_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_Soldier_SL_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_heavy_Olive_F,
            Opf_H_HelmetSpecter_cover_taiga_F,
            DefaultManLeaderLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_heavy_Olive_F,
            Opf_H_HelmetSpecter_cover_taiga_F,
            DefaultManLeaderLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_soldier_UAV_F: O_R_Soldier_Base_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            O_UavTerminal,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            O_UavTerminal,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_Soldier_unarmed_F: O_R_Soldier_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Opf_H_HelmetSpecter_cover_taiga_F,
            DefaultManLinkedItems
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Opf_H_HelmetSpecter_cover_taiga_F,
            DefaultManLinkedItems
        };
    };
    class Aegis_O_R_Soldier_CBRN_F: O_R_Soldier_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            G_AirPurifyingRespirator_02_olive_F,
            DefaultManCbrnLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            G_AirPurifyingRespirator_02_olive_F,
            DefaultManCbrnLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_RadioOperator_F: O_R_Soldier_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_paint_headset_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_paint_headset_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    // Aegis_OPF_R_ard_F
    class Aegis_O_R_Soldier_A_ard_F: Aegis_O_R_Soldier_A_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
    };
    class Aegis_O_R_Soldier_AAR_ard_F: Aegis_O_R_Soldier_AAR_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_support_AMG_ard_F: Aegis_O_R_support_AMG_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
    };
    class Aegis_O_R_support_AMort_ard_F: Aegis_O_R_support_AMort_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
    };
    class Aegis_O_R_Soldier_AHAT_ard_F: Aegis_O_R_Soldier_AHAT_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_Soldier_AAA_ard_F: Aegis_O_R_Soldier_AAA_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_Soldier_AAT_ard_F: Aegis_O_R_Soldier_AAT_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_soldier_AR_ard_F: O_R_soldier_AR_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Opf_H_HelmetSpecter_cover_khaki_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Opf_H_HelmetSpecter_cover_khaki_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_medic_ard_F: O_R_medic_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_headset_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_headset_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_crew_ard_F: Aegis_O_R_crew_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
    };
    class Aegis_O_R_engineer_ard_F: Aegis_O_R_engineer_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
    };
    class Aegis_O_R_soldier_exp_ard_F: O_R_soldier_exp_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
        linkedItems[] =
        {
            V_CarrierRigKBT_01_heavy_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_heavy_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_Soldier_GL_ard_F: O_R_Soldier_GL_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
        linkedItems[] =
        {
            V_CarrierRigKBT_01_heavy_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_heavy_Olive_F,
            Atlas_H_HelmetSpecter_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_support_GMG_ard_F: Aegis_O_R_support_GMG_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
    };
    class Aegis_O_R_support_MG_ard_F: Aegis_O_R_support_MG_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
    };
    class Aegis_O_R_support_Mort_ard_F: Aegis_O_R_support_Mort_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
    };
    class Aegis_O_R_helipilot_ard_F: Aegis_O_R_helipilot_F
    {
        uniformClass = U_O_R_Gorka_01_black_F;
    };
    class Aegis_O_R_helicrew_ard_F: Aegis_O_R_helicrew_F
    {
        uniformClass = U_O_R_Gorka_01_black_F;
    };
    class Aegis_O_R_soldier_M_ard_F: O_R_soldier_M_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Opf_H_HelmetSpecter_cover_khaki_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Opf_H_HelmetSpecter_cover_khaki_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_soldier_AA_ard_F: Aegis_O_R_soldier_AA_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
    };
    class Aegis_O_R_soldier_AT_ard_F: Aegis_O_R_soldier_AT_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
    };
    class Aegis_O_R_officer_ard_F: Aegis_O_R_officer_F{};
    class Aegis_O_R_soldier_repair_ard_F: Aegis_O_R_soldier_repair_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
    };
    class Aegis_O_R_Soldier_ard_F: Aegis_O_R_Soldier_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Opf_H_HelmetSpecter_cover_khaki_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Opf_H_HelmetSpecter_cover_khaki_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_Soldier_HAT_ard_F: Aegis_O_R_Soldier_HAT_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Opf_H_HelmetSpecter_cover_khaki_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Opf_H_HelmetSpecter_cover_khaki_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_Soldier_lite_ard_F: Aegis_O_R_Soldier_lite_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
        linkedItems[] =
        {
            V_CarrierRigKBT_01_Olive_F,
            H_MilCap_grn,
            DefaultManLinkedItems
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_Olive_F,
            H_MilCap_grn,
            DefaultManLinkedItems
        };
    };
    class Aegis_O_R_Soldier_LAT_ard_F: O_R_Soldier_LAT_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Opf_H_HelmetSpecter_cover_khaki_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Opf_H_HelmetSpecter_cover_khaki_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_Soldier_CQ_ard_F: Aegis_O_R_Soldier_CQ_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_paint_headset_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_paint_headset_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_Soldier_SL_ard_F: Aegis_O_R_Soldier_SL_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
        linkedItems[] =
        {
            V_CarrierRigKBT_01_heavy_Olive_F,
            Opf_H_HelmetSpecter_cover_khaki_F,
            DefaultManLeaderLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_heavy_Olive_F,
            Opf_H_HelmetSpecter_cover_khaki_F,
            DefaultManLeaderLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_Soldier_TL_ard_F: O_R_Soldier_TL_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
        linkedItems[] =
        {
            V_CarrierRigKBT_01_heavy_Olive_F,
            Opf_H_HelmetSpecter_cover_khaki_F,
            DefaultManLeaderLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_heavy_Olive_F,
            Opf_H_HelmetSpecter_cover_khaki_F,
            DefaultManLeaderLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_Soldier_CBRN_ard_F: Aegis_O_R_Soldier_ard_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            G_AirPurifyingRespirator_02_olive_F,
            DefaultManCbrnLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
            G_AirPurifyingRespirator_02_olive_F,
            DefaultManCbrnLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_RadioOperator_ard_F: Aegis_O_R_Soldier_ard_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_paint_headset_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_paint_headset_F,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_soldier_UAV_ard_F: Aegis_O_R_soldier_UAV_F
    {
        uniformClass = U_O_R_Gorka_01_brown_F;
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
		    O_UavTerminal,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Atlas_H_HelmetSpecter_F,
		    O_UavTerminal,
            DefaultManLinkedItems,
            NVGoggles_OPFOR
        };
    };
    class Aegis_O_R_Soldier_unarmed_ard_F: Aegis_O_R_Soldier_ard_F
    {
        linkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Opf_H_HelmetSpecter_cover_khaki_F,
            DefaultManLinkedItems
        };
        respawnLinkedItems[] =
        {
            V_CarrierRigKBT_01_light_Olive_F,
            Opf_H_HelmetSpecter_cover_khaki_F,
            DefaultManLinkedItems
        };
    };
    class Headgear_Base_F;
	HEADGEAR_HOLDER(Opf_H_HelmetSpecter_cover_khaki_F,$STR_A3_O_CfgWeapons_Opf_H_HelmetSpecter_cover_khaki_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(Opf_H_HelmetSpecter_cover_taiga_F,$STR_A3_O_CfgWeapons_Opf_H_HelmetSpecter_cover_taiga_F0,EdSubcat_Helmets)
};