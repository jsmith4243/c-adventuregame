void TorpedoStorage::roomAction(Player& player1)
{


	if (player1.Done14 == true && player1.Done15 == false)
	{

		std::cout << "Torpedo is ready to be loaded. " << std::endl << std::endl;


		

	} 

	

}

void TorpedoStorage::interact(Player& player1)
{

	if (player1.Done14 == true && player1.Done15 == false)
	{

		std::cout << "You loaded a torpedo into the torpedo launcher." <<std::endl << std::endl;


		player1.Done15=true;
	}
}
