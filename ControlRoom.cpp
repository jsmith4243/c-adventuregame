void ControlRoom::roomAction(Player& player1)
{


	if (player1.Done1 == false)
	{

		std::cout << "Captain Jones: This is Captain Jones, commander of this warship." << std::endl;
		std::cout << "The ship systems are deactivated for testing." << std::endl;
		std::cout << "You have to find Sargent Brown and the the operating system disk." << std::endl;
		std::cout << "Once you have it, load it into the computer core so we can turn on the system." << std::endl;
		std::cout << "Then we may be able to defend ourselves." << std::endl;
		std::cout << "Hurry the main pirate force arrives in 20 minutes and then we're all toast." << std::endl << std::endl;


		player1.Done1=true;

	} 

	else if(player1.Done3 == true && player1.Done4 == false)

	{

		std::cout << "Captain Jones: Good job starting the computers!" << std::endl;
		std::cout << "I can now control ship direction from here." << std::endl;
		std::cout << "However, the pirates are shooting at the bridge form the nearby island" << std::endl;
		std::cout << "Several men are dead from the sharpshooters." << std::endl;
		std::cout << "The ship computers have triangulated the pirates's position on the island." << std::endl;
		std::cout << "You need to go to the gun turret and load a round, then go to fire control and fire." << std::endl;
		std::cout << "That should teach them a lesson!" << std::endl <<  std::endl;

	
		player1.Done4 = true;

	}

	else if (player1.Done6 == true && player1.Done7 == false)
	{

		std::cout << "Captain Jones: Nice work! I saw the pirates fly in the air as that shell hit them spot on!" << std::endl;
		std::cout << "I've set the ship on a course home. However, the engines aren't working because the fuel valve is off" << std::endl;
		std::cout << "The ship was being towed, but the tugboat was destroyed by the pirates." << std::endl;
		std::cout << "Go to fuel storage and turn on the valve." << std::endl;
		std::cout << "!!!But first get yourself a rifle from the armory," <<std::endl;
		std::cout << "as the rest of the skeleton crew have barricated themselves in torpedo storage," << std::endl;
		std::cout << "since the pirates have boarded from deck 24 and taken over the engine room." << std::endl << std::endl;

		player1.Done7 = true;

	}



	else if (player1.Done10 == true && player1.Done11 == false)
	{

		std::cout << "Captain Jones: Good job. We are on course home." << std::endl;
		std::cout << "But we have a problem: A pirate ship is pursuing us." << std::endl;
		std::cout << "We need to destroy it before it punctures our hull with a rocket and sinks us!" << std::endl;
		std::cout << "The computer is locked on and ready to fire, but our only missile is stuck." << std::endl;
		std::cout << "The computer shows that our missile in missile launcher 2 is stuck!!!" << std::endl;
		std::cout << "Please go to the launcher and fix the missile!" << std::endl << std::endl; 

		player1.Done11 = true;

	}

	else if (player1.Done13 == true && player1.Done14 == false)
	{

		std::cout << "Captain Jones: A pirate dingui has come from the island" <<std::endl;

		std::cout << "A good torpedo should take care of them!" << std::endl << std::endl ;

		player1.Done14 = true;


	}

	else if (player1.Done16 == true && player1.Done17 == false)
	{

		std::cout << "Captain Jones: Excellent job. We won!!!" <<std::endl;

		std::cout << "Feel free to roam the ship as we pilot us home" << std::endl << std::endl;

		std::cout << "GAME OVER" << std::endl<<std::endl;

		player1.wonGame = true;

		player1.Done17 = true;


	}

	
}

void ControlRoom::interact(Player& player1)
{
}
