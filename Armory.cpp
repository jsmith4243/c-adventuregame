void Armory::roomAction(Player& player1)
{


	if (player1.Done7 == true && player1.Done8 ==false)
	{

		std::cout << "There is an abundance of rifles in the gun racks." << std::endl<< std::endl;

		

	} 

	

}

void Armory::interact(Player& player1)
{

	if (player1.Done7 == true && player1.Done8 ==false)
	{

	std::cout << "You grabbed a rifle and equipped it on yourself. " << std::endl<< std::endl;

	player1.addInventoryObject("rifle");

	player1.Done8 = true;

	} 

	

}
