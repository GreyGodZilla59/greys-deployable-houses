class CfgPatches
{
	class GGZ_Scripts
	{
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Scripts","DZ_Data"};
	};
};

class CfgMods
{
	class GGZ_Scripts
	{
		dir = "GGZ";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "GGZ_Scripts";
		credits = "grey";
		author = "grey";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"greyshouse\Scripts\4_World"};
			};
		};
	};
};

