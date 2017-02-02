void Player::addInventoryObject(std::string label1)
{

	inventoryVector.push_back(new InventoryObject(label1));

}

bool Player::isInInventory(std::string label1)
{

	//inventoryVector<InventoryObject*>::iterator iterator1;
	std::vector<InventoryObject*>::iterator iterator1;

	for(iterator1 = inventoryVector.begin(); iterator1 != inventoryVector.end(); iterator1++)
	{

		if ((*iterator1)->label == label1)
		{

			return true;
		}
		
		
		


	}
	return false;

}

Player::Player()
{

		quest1Done = false;

		quest2Done = false;

		quest3Done = false;

		quest4Done = false;

		quest5Done = false;

		//tasks 1-17

		Done1 = false;

		Done2 = false;

		Done3 = false;

		Done4 = false;

		Done5 = false;

		Done6 = false;

		Done7 = false;

		Done8 = false;

		Done9 = false;

		Done10 = false;

		Done11 = false;

		Done12 = false;

		Done13 = false;

		Done14 = false;

		Done15 = false;

		Done16 = false;

		Done17 = false;

		isDead = false;

		wonGame = false;
}
