class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
	};
	class Helicopter_Base_H: Helicopter_Base_F{};
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
	};
	class Tank: LandVehicle
	{
		class NewTurret;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets;
			};
		};
	};
	class Ship_F;
	class Boat_F: Ship_F
	{
		class Turrets;
	};
	class Heli_Transport_01_base_F: Helicopter_Base_H
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {mag_2(1000Rnd_762x51_Belt_T_Red_Splash)};
			};
			class RightDoorGun: MainTurret
			{
				magazines[] = {mag_2(1000Rnd_762x51_Belt_T_Red_Splash)};
			};
		};
	};
	class Heli_Transport_03_base_F: Helicopter_Base_H
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {mag_2(1000Rnd_762x51_Belt_T_Red_Splash)};
			};
			class RightDoorGun: MainTurret
			{
				magazines[] = {mag_2(1000Rnd_762x51_Belt_T_Red_Splash)};
			};
		};
	};
	class APC_Wheeled_01_base_F: Wheeled_APC_F{};
	class APC_Wheeled_01_base_v2_F: APC_Wheeled_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	class B_APC_Wheeled_01_cannon_v2_F: APC_Wheeled_01_base_v2_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] =
				{
					autocannon_30mm,
					ACE_LMG_coax_MAG58_mem3
				};
			};
		};
	};
	class APC_Tracked_02_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
	class O_R_APC_Tracked_02_base_F: APC_Tracked_02_base_F{};
	class O_R_APC_Tracked_02_AA_F: O_R_APC_Tracked_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] =
				{
					500Rnd_35mm_AA_shells_Tracer_Green,
					mag_2(4Rnd_Titan_long_missiles_O)
				};
			};
		};
	};
	class APC_Tracked_03_base_F: Tank_F{};
	class APC_Tracked_03_base_v2_F: APC_Tracked_03_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
	class APC_Tracked_03_base_v2_F: APC_Tracked_03_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] =
				{
					autocannon_40mm_CTWS,
					ACE_LMG_coax_L94A1_mem3
				};
				magazines[] =
				{
					mag_2(120Rnd_40mm_GPR_Tracer_Yellow_shells),
					mag_2(80Rnd_40mm_APFSDS_Tracer_Yellow_shells),
					mag_10(200Rnd_762x51_Belt_Yellow)
				};
			};
		};
	};
	class I_E_APC_tracked_03_cannon_v2_F: APC_Tracked_03_base_v2_F
	{
		displayName = "FV510 Warrior";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] =
				{
					mag_2(120Rnd_40mm_GPR_Tracer_Red_shells),
					mag_2(80Rnd_40mm_APFSDS_Tracer_Red_shells),
					mag_10(200Rnd_762x51_Belt_Red)
				};
			};
		};
	};
	class B_A_APC_tracked_03_cannon_F: APC_Tracked_03_base_v2_F
	{
		displayName = "FV510 Warrior";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] =
				{
					mag_2(120Rnd_40mm_GPR_Tracer_Red_shells),
					mag_2(80Rnd_40mm_APFSDS_Tracer_Red_shells),
					mag_10(200Rnd_762x51_Belt_Red)
				};
			};
		};
	};
	class B_A_APC_tracked_03_cannon_tna_F: APC_Tracked_03_base_v2_F
	{
		displayName = "FV510 Warrior";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] =
				{
					mag_2(120Rnd_40mm_GPR_Tracer_Red_shells),
					mag_2(80Rnd_40mm_APFSDS_Tracer_Red_shells),
					mag_10(200Rnd_762x51_Belt_Red)
				};
			};
		};
	};
	class B_A_APC_tracked_03_cannon_wdl_F: APC_Tracked_03_base_v2_F
	{
		displayName = "FV510 Warrior";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] =
				{
					mag_2(120Rnd_40mm_GPR_Tracer_Red_shells),
					mag_2(80Rnd_40mm_APFSDS_Tracer_Red_shells),
					mag_10(200Rnd_762x51_Belt_Red)
				};
			};
		};
	};
	class Boat_Armed_01_base_F: Boat_F
	{
		class Turrets: Turrets
		{
			class FrontTurret;
			class RearTurret;
		};
	};
	class Boat_Armed_01_minigun_base_F: Boat_Armed_01_base_F
	{
		class Turrets: Turrets
		{
			class FrontTurret: FrontTurret{};
			class RearTurret: RearTurret
			{
				magazines[] = {mag_2(1000Rnd_762x51_Belt_T_Red_Splash)};
			};
		};
	};
	class I_Boat_Armed_01_minigun_F: Boat_Armed_01_minigun_base_F
	{
        class Turrets: Turrets
		{
			class FrontTurret: FrontTurret{};
			class RearTurret: RearTurret
			{
				magazines[] = {mag_2(1000Rnd_762x51_Belt_T_Yellow_Splash)};
			};
		};
	};
	class LSV_02_base_F: Car_F
	{
		class Turrets: Turrets{};
	};
	class LSV_02_armed_base_F: LSV_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {mag_2(1000Rnd_762x51_Belt_T_Green_Splash)};
			};
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
			class CargoTurret_05;
		};
	};
};