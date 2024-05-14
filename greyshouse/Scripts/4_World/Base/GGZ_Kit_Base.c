class GGZ_Kit_Base: KitBase
{
	override void OnPlacementComplete( Man player, vector position = "0 0 0", vector orientation = "0 0 0" )
	{
		super.OnPlacementComplete( player, position, orientation );
		
#ifdef SERVER
		Object deployedObject = Object.Cast( GetGame().CreateObjectEx( GGZ_GetDeployableName(), GetPosition(), ECE_PLACE_ON_SURFACE ));
		deployedObject.SetPosition( position );
		deployedObject.SetOrientation( orientation );
		
		if ( GGZ_ShouldCutGrass() )
		{
			Object m_ClutterCutter = GetGame().CreateObjectEx( "ClutterCutter6x6", position, ECE_PLACE_ON_SURFACE );
			m_ClutterCutter.SetOrientation( orientation );
		}
		
		//! Make the kit invisible, so it can be destroyed from deploy UA when action ends
		HideAllSelections();

		GetGame().ObjectDelete(this);
#endif
		
		SetIsDeploySound( true );
	}

	string GGZ_GetDeployableName()
	{
		return "paper";
	}

	bool GGZ_ShouldCutGrass()
	{
		return false;
	}
	
	override string GetPlaceSoundset()
	{
		return "putDown_FenceKit_SoundSet";
	}
	
	override bool IsDeployable()
	{
		return true;
	}
};
