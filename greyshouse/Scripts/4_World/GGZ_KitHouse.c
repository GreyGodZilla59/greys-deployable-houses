class GGZ_KitHouse1: GGZ_Kit_Base
{
	override string GGZ_GetDeployableName()
	{
		return "GGZ_House1";
	}

	override bool GGZ_ShouldCutGrass()
	{
		return true;
	}
};

class GGZ_House1: House
{
	// FROM HERE
	// Remove this code if you dont want to remove grass around the object
	Object m_ClutterCutter;

	void GGZ_House1()
	{
		if (!m_ClutterCutter)
		{
			m_ClutterCutter = GetGame().CreateObjectEx( "ClutterCutter6x6", GetPosition(), ECE_PLACE_ON_SURFACE );
			m_ClutterCutter.SetOrientation( GetOrientation() );
		}
	}

	override void EEDelete(EntityAI parent)
	{
		super.EEDelete(parent);
		
		if (m_ClutterCutter  &&  GetGame())
		{
			GetGame().ObjectDelete(m_ClutterCutter);
			m_ClutterCutter = NULL;
		}
	}
	// TO HERE
};
class GGZ_KitHouse2: GGZ_Kit_Base
{
	override string GGZ_GetDeployableName()
	{
		return "GGZ_House2";
	}
	override bool GGZ_ShouldCutGrass()
	{
		return true;
	}
};
class GGZ_House2: House
{
	// FROM HERE
	// Remove this code if you dont want to remove grass around the object
	Object m_ClutterCutter;

	void GGZ_House2()
	{
		if (!m_ClutterCutter)
		{
			m_ClutterCutter = GetGame().CreateObjectEx( "ClutterCutter6x6", GetPosition(), ECE_PLACE_ON_SURFACE );
			m_ClutterCutter.SetOrientation( GetOrientation() );
		}
	}

	override void EEDelete(EntityAI parent)
	{
		super.EEDelete(parent);
		
		if (m_ClutterCutter  &&  GetGame())
		{
			GetGame().ObjectDelete(m_ClutterCutter);
			m_ClutterCutter = NULL;
		}
	}
	// TO HERE
};
class GGZ_KitHouse3: GGZ_Kit_Base
{
	override string GGZ_GetDeployableName()
	{
		return "GGZ_House3";
	}
	override bool GGZ_ShouldCutGrass()
	{
		return true;
	}
};
class GGZ_House3: House
{
	// FROM HERE
	// Remove this code if you dont want to remove grass around the object
	Object m_ClutterCutter;

	void GGZ_House3()
	{
		if (!m_ClutterCutter)
		{
			m_ClutterCutter = GetGame().CreateObjectEx( "ClutterCutter6x6", GetPosition(), ECE_PLACE_ON_SURFACE );
			m_ClutterCutter.SetOrientation( GetOrientation() );
		}
	}

	override void EEDelete(EntityAI parent)
	{
		super.EEDelete(parent);
		
		if (m_ClutterCutter  &&  GetGame())
		{
			GetGame().ObjectDelete(m_ClutterCutter);
			m_ClutterCutter = NULL;
		}
	}
	// TO HERE
};
class GGZ_KitHouse4: GGZ_Kit_Base
{
	override string GGZ_GetDeployableName()
	{
		return "GGZ_House4";
	}
	override bool GGZ_ShouldCutGrass()
	{
		return true;
	}
};
class GGZ_House4: House
{
	// FROM HERE
	// Remove this code if you dont want to remove grass around the object
	Object m_ClutterCutter;

	void GGZ_House4()
	{
		if (!m_ClutterCutter)
		{
			m_ClutterCutter = GetGame().CreateObjectEx( "ClutterCutter6x6", GetPosition(), ECE_PLACE_ON_SURFACE );
			m_ClutterCutter.SetOrientation( GetOrientation() );
		}
	}

	override void EEDelete(EntityAI parent)
	{
		super.EEDelete(parent);
		
		if (m_ClutterCutter  &&  GetGame())
		{
			GetGame().ObjectDelete(m_ClutterCutter);
			m_ClutterCutter = NULL;
		}
	}
	// TO HERE
};
class GGZ_KitHouse5: GGZ_Kit_Base
{
	override string GGZ_GetDeployableName()
	{
		return "GGZ_House5";
	}
	override bool GGZ_ShouldCutGrass()
	{
		return true;
	}
};
class GGZ_House5: House
{
	// FROM HERE
	// Remove this code if you dont want to remove grass around the object
	Object m_ClutterCutter;

	void GGZ_House5()
	{
		if (!m_ClutterCutter)
		{
			m_ClutterCutter = GetGame().CreateObjectEx( "ClutterCutter6x6", GetPosition(), ECE_PLACE_ON_SURFACE );
			m_ClutterCutter.SetOrientation( GetOrientation() );
		}
	}

	override void EEDelete(EntityAI parent)
	{
		super.EEDelete(parent);
		
		if (m_ClutterCutter  &&  GetGame())
		{
			GetGame().ObjectDelete(m_ClutterCutter);
			m_ClutterCutter = NULL;
		}
	}
	// TO HERE
};