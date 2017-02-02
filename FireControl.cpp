void FireControl::roomAction(Player& player1)
{


	if (player1.Done5 == true && player1.Done6 == false)
	{

		std::cout << "The fire control computer is ready to fire. It says to press the fire button. " << std::endl<< std::endl;

		

	} 

	else if (player1.Done12 == true && player1.Done13 == false)
	{

		std::cout << "The pirate ship is on the crosshairs in the fire control computer. " << std::endl<< std::endl;

	}

	else if (player1.Done15 == true && player1.Done16 == false)
	{

		std::cout << "The fire button is ready to be pressed" << std::endl<< std::endl;

	}

	

}

void FireControl::interact(Player& player1)
{

	if (player1.Done5 == true && player1.Done6 == false)
	{

		std::cout << "You pressed the fire button. The ship shakes violently as a high power shell is fired at the pirates. " << std::endl;

		std::cout << "From the window you observe a large explosion and hear a loud boom as all pirates shooting on the ship form the island are dead" << std::endl<< std::endl;

		player1.Done6 = true;

	} 

	else if (player1.Done12 == true && player1.Done13 == false)
	{

		std::cout << "You press the fire button as you observe with elation as the missile streaks towards the pirate boat" << std::endl;

		std::cout << "Some pirates jump out of the boat, but the explosion is too large as this is a heavy type of missile" << std::endl;

		std::cout << "All pirates are eradicated." << std::endl << std::endl;

		player1.Done13 = true;

	}

	else if (player1.Done15 == true && player1.Done16 == false)
	{

		std::cout << "You fired on the pirate dingui" << std::endl;

		std::cout << "It tries to dodge the torpedo. But this advanced torpedo is homing. " << std::endl;

		std::cout << "The dongui blows up into a giant fireball, as this torpedo was meant for destroying large ships. " << std::endl << std::endl;

		player1.Done16 = true;

	}

}
