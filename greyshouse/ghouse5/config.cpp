class CfgPatches
{
	class GGZ_House5
	{
		requiredAddons[] = {"DZ_Data","DZ_Structures_Walls"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class GGZ_house5: HouseNoDestruct
	{
		scope = 2;
		model = "greyshouse\ghouse5\ghouse5.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health { damage = 0; };
					class Blood { damage = 0; };
					class Shock { damage = 0; };
				};
				class Melee
				{
					class Health { damage = 0; };
					class Blood { damage = 0; };
					class Shock { damage = 0; };
				};
			};
		};
	};
};