class CfgWeapons
{
	class Rifle_Base_F;
	class UGL_F;
	/*
	// AUG 5.56 mm
	class arifle_AUG_base_F: Rifle_Base_F
	{
		drySound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_dry",db-5,1,10};
		reloadMagazineSound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_reload",db0,1,10};
		changeFiremodeSound[] = {"",db0,0,0};
		class Single: Mode_SemiAuto
	  	{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_aug_shot_soundset,
					jsrs_5x56mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_aug_shot_silenced_soundset,
					jsrs_5x56mm_sd_reverb_soundset
				};
			};
	  	};
	  	class FullAuto: Mode_FullAuto
	  	{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_aug_shot_soundset,
					jsrs_5x56mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_aug_shot_silenced_soundset,
					jsrs_5x56mm_sd_reverb_soundset
				};
			};
	  	};
	};
	class arifle_AUG_GL_base_F: arifle_AUG_base_F
	{
		class EGLM: UGL_F
		{
			reloadMagazineSound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_UGL_reload",db-2,1,10};
		};
	};
	*/
	// G36 6.5 mm
	class arifle_G36_base_F: Rifle_Base_F
	{
		drySound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_dry",db-5,1,10};
		reloadMagazineSound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_reload",db0,1,10};
		changeFiremodeSound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_firemode",db-15,1,5};
		class Single: Mode_SemiAuto
	  	{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_g36_shot_soundset,
					jsrs_6x5mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_g36_shot_silenced_soundset,
					jsrs_6x5mm_sd_reverb_soundset
				};
			};
	  	};
	  	class Burst: Mode_Burst
	  	{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_g36_shot_soundset,
					jsrs_6x5mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_g36_shot_silenced_soundset,
					jsrs_6x5mm_sd_reverb_soundset
				};
			};
	  	};
	  	class FullAuto: Mode_FullAuto
	  	{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_g36_shot_soundset,
					jsrs_6x5mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_g36_shot_silenced_soundset,
					jsrs_6x5mm_sd_reverb_soundset
				};
			};
	  	};
	};
	class arifle_G36_GL_base_F: arifle_G36_base_F
	{
		class UGL: UGL_F
		{
			reloadMagazineSound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_UGL_reload",db-2,1,10};
		};
	};
};