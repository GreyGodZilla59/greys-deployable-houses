class CfgPatches
{
	class GGZ_House2
	{
		requiredAddons[] = {"DZ_Data","DZ_Structures_Walls"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class GGZ_house2: HouseNoDestruct
	{
		scope = 2;
		model = "greyshouse\ghouse2\ghouse2.p3d";
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