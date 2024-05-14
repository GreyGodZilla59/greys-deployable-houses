class CfgPatches
{
	class GGZ_House4
	{
		requiredAddons[] = {"DZ_Data","DZ_Structures_Walls"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class GGZ_house4: HouseNoDestruct
	{
		scope = 2;
		model = "greyshouse\ghouse4\ghouse4.p3d";
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