void FuelStorage::roomAction(Player& player1)
{


	if (player1.Done8 == true && player1.Done9 ==false)
	{

		std::cout << "You fight your way into the fuel storage, killing several pirates using your rifle on the way." << std::endl << std::endl;

		

	} 

	

}

void FuelStorage::interact(Player& player1)
{

	if (player1.Done8 == true && player1.Done9 ==false)
	{

		std::cout << "You turn on the fuel valve. Engines are still off, better go to engine room and turn them on." << std::endl << std::endl;

		player1.Done9 = true;

		

	} 

}
