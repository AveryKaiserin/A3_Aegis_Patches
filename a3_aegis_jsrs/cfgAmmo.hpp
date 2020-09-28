class CfgAmmo
{
    class BulletBase;
/*
	class B_19mm_HE: BulletBase
	{
		SoundSetBulletFly[] = {jsrs_sc_bullet_flyby_soundset};
		SoundSetSonicCrack[] = {jsrs_sc_30x90mm_soundset};
		SoundSetExplosion[] =
		{
			jsrs_20mm_explosion_soundset,
			jsrs_explosion_echo_small_soundset
		};
	};
*/
	class RocketBase;
	class M_SPG9_HEAT: RocketBase
	{
		SoundSetSonicCrack[] = {jsrs_sc_rocket_flyby_soundset};
		SoundSetExplosion[] =
		{
			jsrs_rocket_explosion_soundset,
			jsrs_rocket_explosion_stereo_soundset,
			jsrs_shell_explosion_reverb_soundset
		};
	};
	class ammo_Bomb_LaserGuidedBase;
	class ammo_Bomb_SmallDiameterBase: ammo_Bomb_LaserGuidedBase
	{
		SoundSetExplosion[] =
		{
			jsrs_bomb_explosion_soundset,
			jsrs_bomb_explosion_stereo_soundset,
			jsrs_bomb_explosion_reverb_soundset
		};
	};
};