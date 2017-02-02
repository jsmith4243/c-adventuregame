void MissileLauncher2::roomAction(Player& player1)
{


	if (player1.Done11 == true && player1.Done12 ==false)
	{

		std::cout << "The missile is feeding incorrectly into the launcher. You need to kick it into place." << std::endl << std::endl;

		

	} 

	

}

void MissileLauncher2::interact(Player& player1)
{

if (player1.Done11 == true && player1.Done12 ==false)
	{

		std::cout << "You kicked the missile into place. With a thump it feeds into the missile tube" << std::endl << std::endl;

		player1.Done12 = true;

		

	} 

}
