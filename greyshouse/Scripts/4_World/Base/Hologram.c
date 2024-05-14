modded class Hologram
{
	override string ProjectionBasedOnParent()
	{
		GGZ_Kit_Base item_in_hands = GGZ_Kit_Base.Cast( m_Parent );
		if ( item_in_hands )
			return item_in_hands.GGZ_GetDeployableName();

		return super.ProjectionBasedOnParent();
	}
	
    override EntityAI PlaceEntity( EntityAI entity_for_placing )
    {        
        if( entity_for_placing.CanAffectPathgraph() )
        {
            entity_for_placing.SetAffectPathgraph( true, false );
            GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(GetGame().UpdatePathgraphRegionByObject, 100, false, entity_for_placing);
        }
        
        return entity_for_placing;
    }

    override void EvaluateCollision(ItemBase action_item = null)
    {
		ItemBase item_in_hands = ItemBase.Cast(m_Player.GetHumanInventory().GetEntityInHands());
		
        if ( item_in_hands && item_in_hands.IsInherited(GGZ_Kit_Base) )
        {
            SetIsColliding(false);
            return;
        }
		
        super.EvaluateCollision();
    }
};
