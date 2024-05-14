class CfgPatches
{
	class GGZ_grey_godzilla_kit
	{
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Scripts","DZ_Data"};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class GGZ_Kit_Base: Inventory_Base
    {
        scope = 0;
		model="greyshouse\ghkit\Scifi_Storage2_.p3d";
		rotationFlags=17;
		itemSize[]={1,5};
		weight=280;
		itemBehaviour=1;
		debug_ItemCategory=10;
		soundImpactType="wood";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
				class GlobalArmor
				{
					class Projectile
					{
						class Health
						{
							damage=0;
						};
						class Blood
						{
							damage=0;
						};
						class Shock
						{
							damage=0;
						};
					};
					class FragGrenade
					{
						class Health
						{
							damage=0;
						};
						class Blood
						{
							damage=0;
						};
						class Shock
						{
							damage=0;
						};
					};
				};
			};
		};
		class AnimationSources
		{
			class AnimSourceShown
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class AnimSourceHidden
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class Inventory: AnimSourceHidden
			{
			};
			class Placing: AnimSourceHidden
			{
			};
		};
	};

	//class GGZ_Kit_Base; // uncomment if you are inside a config.cpp which doesnt already contain GGZ_Kit_Base
	class GGZ_KitHouse1: GGZ_Kit_Base
    {
        scope = 2;
        displayName="Kit House1";
		descriptionShort ="";
	};
    class GGZ_KitHouse2: GGZ_Kit_Base
    {
        scope = 2;
        displayName="Kit House2";
        descriptionShort ="";
    };
    class GGZ_KitHouse3: GGZ_Kit_Base
    {
        scope = 2;
        displayName="Kit House3";
        descriptionShort ="";
    };
    class GGZ_KitHouse4: GGZ_Kit_Base
    {
        scope = 2;
        displayName="Kit House4";
        descriptionShort ="";
    };
    class GGZ_KitHouse5: GGZ_Kit_Base
    {
        scope = 2;
        displayName="Kit House5";
        descriptionShort ="";
    };	
};
