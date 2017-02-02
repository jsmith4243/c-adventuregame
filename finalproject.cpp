/*********************************************************************
** Program Filename: lab8.cpp
** Author: Joel Smith 
** Date: February 28, 2015
** Description: lab3
** Input: User choice of inputs
** Output: No output
*********************************************************************/

#include <time.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>


#include "Player.hpp"
#include "Player.cpp"
#include "InventoryObject.hpp"
#include "InventoryObject.cpp"

#include "Room.hpp"
#include "Room.cpp"
#include "ComputerCore.hpp"
#include "ComputerCore.cpp"
#include "ControlRoom.hpp"
#include "ControlRoom.cpp"
#include "EngineRoom.hpp"
#include "EngineRoom.cpp"
#include "SpecialDeck.hpp"
#include "SpecialDeck.cpp"
#include "GunTurret.hpp"
#include "GunTurret.cpp"
#include "FireControl.hpp"
#include "FireControl.cpp"
#include "Armory.hpp"
#include "Armory.cpp"
#include "FuelStorage.hpp"
#include "FuelStorage.cpp"
#include "MissileLauncher2.hpp"
#include "MissileLauncher2.cpp"
#include "TorpedoStorage.hpp"
#include "TorpedoStorage.cpp"
#include "linkedList.hpp"
#include "linkedList.cpp"



int main() 
{

	std::cout << "User: Welcome to cs 162 final project." << std::endl << std::endl;

	std::cout << "User: Enter the letter \"n\" no turn off labels. Enter anything else to turn on labels." << std::endl << std::endl;

	std::cout << "You are a employee of a defense products company testing a new possible warship prototype for sale to the navy. " << std::endl << "The warship pocesses only a small skeleton crew for testing purposes. " << std:: endl << "As you are testing various systems out in the deck, you notice a boat out in the water with men " << std::endl << "They are heavily armed with assault rifles and rocket propelled grenades and look very tough. " << std::endl << "The men yell over a loudspeaker: \"Attention warship! We are the Somali pirates and we are taking this ship!\" " << std::endl << "\"We will sell it to the highest bidder and take you prisoner for ransom! Surrender immediately!\" " << std::endl << "Shortly thereafter, the Somali pirates begin shooting rockets and bullets into the ship." << std::endl <<  "Loud explosions thunder through the ship as your adventure begins." << std::endl << std::endl;

	Player player1;



	std::string currentPosition;

	currentPosition = "deck 1";

	bool labels = true;

	LinkedList roomList;

	
	LinkedList::ListNode* deck1Ptr = roomList.add("deck 1");

	

	

	LinkedList::ListNode* deck2Ptr = roomList.add("deck 2");

	

	LinkedList::ListNode* deck3Ptr =roomList.add("deck 3");

	LinkedList::ListNode* deck4Ptr = roomList.add("deck 4");

	LinkedList::ListNode* deck5Ptr = roomList.add("deck 5");

	LinkedList::ListNode* deck6Ptr = roomList.add("deck 6");
		
	LinkedList::ListNode* deck7Ptr = roomList.add("deck 7");

	LinkedList::ListNode* deck8Ptr = roomList.add("deck 8");

	LinkedList::ListNode* deck9Ptr = roomList.add("deck 9");

	LinkedList::ListNode* deck10Ptr = roomList.add("deck 10");



	LinkedList::ListNode* deck11Ptr = roomList.add("deck 11");

	

	

	LinkedList::ListNode* deck12Ptr = roomList.add("deck 12");

	

	LinkedList::ListNode* deck13Ptr =roomList.add("deck 13");

	LinkedList::ListNode* deck14Ptr = roomList.add("deck 14");

	LinkedList::ListNode* deck15Ptr = roomList.add("deck 15");

	LinkedList::ListNode* deck16Ptr = roomList.add("deck 16");
		
	LinkedList::ListNode* deck17Ptr = roomList.add("deck 17");

	LinkedList::ListNode* deck18Ptr = roomList.add("deck 18");

	LinkedList::ListNode* deck19Ptr = roomList.add("deck 19");

	LinkedList::ListNode* deck20Ptr = roomList.add("deck 20");

	LinkedList::ListNode* deck21Ptr = roomList.add("deck 21");

	LinkedList::ListNode* deck22Ptr = roomList.add("deck 22");

	LinkedList::ListNode* deck23Ptr = roomList.add("deck 23");

	LinkedList::ListNode* deck24Ptr = roomList.add("deck 24");


	

	LinkedList::ListNode* controlRoomPtr = roomList.add("control room");
	

	LinkedList::ListNode* navigationPtr = roomList.add("navigation");

	LinkedList::ListNode* fireControlPtr = roomList.add("fire control");

	LinkedList::ListNode* computerCorePtr = roomList.add("computer core");

	LinkedList::ListNode* brigPtr = roomList.add("brig");

	LinkedList::ListNode* engineeringPtr = roomList.add("engineering");



	LinkedList::ListNode* communicationsPtr = roomList.add("communications");

	LinkedList::ListNode* missileLauncher1Ptr = roomList.add("missile launcher 1");

	LinkedList::ListNode* gunTurretPtr = roomList.add("gun turret");

	LinkedList::ListNode* missileLauncher2Ptr = roomList.add("missile launcher 2");

	LinkedList::ListNode* crewQuartersPtr = roomList.add("crew quarters");

	LinkedList::ListNode* messHallPtr = roomList.add("mess hall");



	LinkedList::ListNode* crewRecreationPtr = roomList.add("crew recreation");

	LinkedList::ListNode* armoryPtr = roomList.add("armory");

	LinkedList::ListNode* armoredVehicleStoragePtr = roomList.add("armored vehicle storage");

	LinkedList::ListNode* torpedoStoragePtr = roomList.add("torpedo storage");

	LinkedList::ListNode* torpedoLauncherPtr = roomList.add("torpedo launcher");

	LinkedList::ListNode* fuelStoragePtr = roomList.add("fuel storage");

	LinkedList::ListNode* engineRoomPtr = roomList.add("engine room");

	//displays the linked list
	//roomList.displayList();
	



	

	LinkedList::ListNode *nodePtr2 = roomList.head;

	//nodePtr->next = nodePtr; //next node in linked list

	//deck1
	//modify doors
	deck1Ptr->left = navigationPtr;
	deck1Ptr->right = NULL;
	deck1Ptr->down = NULL;
	deck1Ptr->up = NULL;	
	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//deck2
	//modify doors
	deck2Ptr->left = NULL;
	deck2Ptr->right = navigationPtr;
	deck2Ptr->down = NULL;
	deck2Ptr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//deck3
	deck3Ptr->left = computerCorePtr;
	deck3Ptr->right = NULL;
	deck3Ptr->down = NULL;
	deck3Ptr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//deck4
	deck4Ptr->left = brigPtr;
	deck4Ptr->right = NULL;
	deck4Ptr->down = NULL;
	deck4Ptr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//deck5
	deck5Ptr->left = NULL;
	deck5Ptr->right = brigPtr;
	deck5Ptr->down = NULL;
	deck5Ptr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//deck6
	deck6Ptr->left = NULL;
	deck6Ptr->right = communicationsPtr;
	deck6Ptr->down = NULL;
	deck6Ptr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//deck7
	deck7Ptr->left = communicationsPtr;
	deck7Ptr->right = NULL;
	deck7Ptr->down = NULL;
	deck7Ptr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	
	//deck8
	deck8Ptr->left = NULL;
	deck8Ptr->right = crewQuartersPtr;
	deck8Ptr->down = NULL;
	deck8Ptr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//deck9
	deck9Ptr->left = crewQuartersPtr;
	deck9Ptr->right = NULL;
	deck9Ptr->down = NULL;
	deck9Ptr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//deck10
	deck10Ptr->left = NULL;
	deck10Ptr->right = messHallPtr;
	deck10Ptr->down = NULL;
	deck10Ptr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list

	//nodePtr->next = nodePtr; //next node in linked list

	//deck11
	deck11Ptr->left = messHallPtr;
	deck11Ptr->right = NULL;
	deck11Ptr->down = NULL;
	deck11Ptr->up = NULL;	
	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//deck12
	deck12Ptr->left = NULL;
	deck12Ptr->right = crewRecreationPtr;
	deck12Ptr->down = NULL;
	deck12Ptr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//deck13
	deck13Ptr->left = crewRecreationPtr;
	deck13Ptr->right = NULL;
	deck13Ptr->down = NULL;
	deck13Ptr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//deck14
	deck14Ptr->left = NULL;
	deck14Ptr->right = armoryPtr;
	deck14Ptr->down = NULL;
	deck14Ptr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//deck15
	deck15Ptr->left = armoryPtr;
	deck15Ptr->right = NULL;
	deck15Ptr->down = NULL;
	deck15Ptr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//deck16
	deck16Ptr->left = NULL;
	deck16Ptr->right = armoredVehicleStoragePtr;
	deck16Ptr->down = NULL;
	deck16Ptr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//deck17
	deck17Ptr->left = armoredVehicleStoragePtr;
	deck17Ptr->right = NULL;
	deck17Ptr->down = NULL;
	deck17Ptr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	
	//deck18
	deck18Ptr->left = NULL;
	deck18Ptr->right = torpedoStoragePtr;
	deck18Ptr->down = NULL;
	deck18Ptr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//deck19
	deck19Ptr->left = torpedoLauncherPtr;
	deck19Ptr->right = NULL;
	deck19Ptr->down = NULL;
	deck19Ptr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//deck20
	deck20Ptr->left = NULL;
	deck20Ptr->right = fuelStoragePtr;
	deck20Ptr->down = NULL;
	deck20Ptr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list

	
	//deck21
	deck21Ptr->left = fuelStoragePtr;
	deck21Ptr->right = NULL;
	deck21Ptr->down = NULL;
	deck21Ptr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	
	//deck22
	deck22Ptr->left = NULL;
	deck22Ptr->right = engineRoomPtr;
	deck22Ptr->down = NULL;
	deck22Ptr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//deck23
	deck23Ptr->left = engineRoomPtr;
	deck23Ptr->right = NULL;
	deck23Ptr->down = NULL;
	deck23Ptr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//deck24
	deck24Ptr->left = NULL;
	deck24Ptr->right = NULL;
	deck24Ptr->down = NULL;
	deck24Ptr->up = engineRoomPtr;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list

 
	
	//controlRoom
	controlRoomPtr->left = NULL;
	controlRoomPtr->right = NULL;
	controlRoomPtr->down = navigationPtr;
	controlRoomPtr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//navigation
	navigationPtr->left = deck2Ptr;
	navigationPtr->right = deck1Ptr;
	navigationPtr->down = computerCorePtr;
	navigationPtr->up = controlRoomPtr;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//fireControl
	fireControlPtr->left = NULL;
	fireControlPtr->right = computerCorePtr;
	fireControlPtr->down = NULL;
	fireControlPtr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list


	
	//computerCore
	computerCorePtr->left = fireControlPtr;
	computerCorePtr->right = deck3Ptr;
	computerCorePtr->down = brigPtr;
	computerCorePtr->up = navigationPtr;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//brig
	brigPtr->left = deck5Ptr;
	brigPtr->right = deck4Ptr;
	brigPtr->down = engineeringPtr;
	brigPtr->up = computerCorePtr;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//engineering
	engineeringPtr->left = NULL;
	engineeringPtr->right = NULL;
	engineeringPtr->down = communicationsPtr;
	engineeringPtr->up = brigPtr;

	//communications	
	communicationsPtr->left = deck6Ptr;
	communicationsPtr->right = deck7Ptr;
	communicationsPtr->down = gunTurretPtr;
	communicationsPtr->up = engineeringPtr;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
 
	
	//missileLauncher1 
	missileLauncher1Ptr->left = NULL;
	missileLauncher1Ptr->right = gunTurretPtr;
	missileLauncher1Ptr->down = NULL;
	missileLauncher1Ptr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//gunTurret
	gunTurretPtr->left = missileLauncher1Ptr;
	gunTurretPtr->right = missileLauncher2Ptr;
	gunTurretPtr->down = crewQuartersPtr;
	gunTurretPtr->up = communicationsPtr;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//missileLauncher2
	missileLauncher2Ptr->left = gunTurretPtr;
	missileLauncher2Ptr->right = NULL;
	missileLauncher2Ptr->down = NULL;
	missileLauncher2Ptr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list



	
	//crewQuarters
	crewQuartersPtr->left = deck8Ptr;
	crewQuartersPtr->right = deck9Ptr;
	crewQuartersPtr->down = messHallPtr;
	crewQuartersPtr->up = gunTurretPtr;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//messHall
	messHallPtr->left = deck10Ptr;
	messHallPtr->right = deck11Ptr;
	messHallPtr->down = crewRecreationPtr;
	messHallPtr->up = crewQuartersPtr;

	//nodePtr2->next = NULL;	


	//crewRecreation
	crewRecreationPtr->left = deck12Ptr;
	crewRecreationPtr->right = deck13Ptr;
	crewRecreationPtr->down = armoryPtr;
	crewRecreationPtr->up = messHallPtr;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list


	
	//armory
	armoryPtr->left = deck12Ptr;
	armoryPtr->right = deck13Ptr;
	armoryPtr->down = armoredVehicleStoragePtr;
	armoryPtr->up = crewRecreationPtr;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//armoredVehicleStorage
	armoredVehicleStoragePtr->left = deck16Ptr;
	armoredVehicleStoragePtr->right = deck17Ptr;
	armoredVehicleStoragePtr->down = torpedoStoragePtr;
	armoredVehicleStoragePtr->up = armoryPtr;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//torpedoStorage
	torpedoStoragePtr->left = deck18Ptr;
	torpedoStoragePtr->right = torpedoLauncherPtr;
	torpedoStoragePtr->down = fuelStoragePtr;
	torpedoStoragePtr->up = armoredVehicleStoragePtr;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list


	//torpedoLauncher
	torpedoLauncherPtr->left = torpedoStoragePtr;
	torpedoLauncherPtr->right = deck19Ptr;
	torpedoLauncherPtr->down = NULL;
	torpedoLauncherPtr->up = NULL;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	
	//fuelStorage
	fuelStoragePtr->left = deck20Ptr;
	fuelStoragePtr->right = deck21Ptr;
	fuelStoragePtr->down = engineRoomPtr;
	fuelStoragePtr->up = torpedoStoragePtr;

	//nodePtr2->next = NULL;	


	//engineRoom
	engineRoomPtr->left = deck22Ptr;
	engineRoomPtr->right = deck23Ptr;
	engineRoomPtr->down = deck24Ptr;
	engineRoomPtr->up = fuelStoragePtr;	
	
	nodePtr2 = nodePtr2->next; //next node in linked list
	

	
	
	
	
	


	



	

	LinkedList::ListNode *nodePtr = roomList.head; 

	time_t t;

	time(&t);

	int timeStart = t;

	int timeLimit = 1200;
	//int timeLimit = 60;

	player1.wonGame = false;

	
	while (true)
	{

		std::cout << std::endl << std::endl;

		time(&t);

		int timeNow = t - timeStart;

		if ((timeNow > timeLimit) && player1.wonGame == false)
		{

			std::cout << "You have run out of time. " << std::endl << std::endl;

			exit(1);
		
		}

		else
		{

			std::cout << "You have: " << (timeLimit - timeNow) << " seconds left." << std::endl << std::endl;

		}

		

		//std::cout << *t;

		

		

/*
		std::cout << "player1.Done1: " << player1.Done1 <<std::endl;

		std::cout << "player1.Done5: " << player1.Done5 << std::endl;

		std::cout << "Player1.Done6: " << player1.Done6 << std::endl;

		std::cout << "osdisk: " << player1.isInInventory("osdisk") << std::endl;
		
		
*/

		//nodePtr->next != NULL //check for end




	
		if (labels == true)
		{

			

			std::cout << "You are currently in room: " << currentPosition << std::endl << std::endl;

			

			
		}


		

		std::string choice;

		std::cout << "User: Enter \"up\" to go up, \"down\" to go down, \"left\" to go left, \"right\" to go right. Enter \"interact\" to interact with room. Enter \"q\" to quit" << std::endl << std::endl;

		std::cout << "User: press \"1\" to cheat and display the room list with connections. " << std::endl << std::endl;

		std::cout << "User: press \"2\" to cheat and display the order to beat the game. " << std::endl << std::endl;

		std::cin >> choice;

		std::cout << std::endl;

		while (std::cin.fail())
		{

		std::cout << "Invalid value. Enter again: ";
		std::cin.clear();
		std::cin.ignore(9999, '\n');
		std::cin >> choice;


		}



		

		if (choice == "1")
		{

			roomList.displayList();

			std::cout << std::endl;

			roomList.displayListPtrs();

		}

		if (choice == "2")
		{

			roomList.displayOrder();

			std::cout << std::endl;

		}

		if (choice == "n")
		{

			labels = false;

		}

		if (choice == "up")
		{

			if (nodePtr->up != NULL)
			{

				nodePtr = nodePtr->up;

				currentPosition = nodePtr->label;


			}
			else
			{

				

				std::cout << "You cannot go that way. There is no door. " << std::endl << std::endl;

			

			}

			

		}

		else if (choice == "down")
		{

			if (nodePtr->down != NULL)
			{

				nodePtr = nodePtr->down;

				currentPosition = nodePtr->label;


			}

			else
			{

				std::cout << "You cannot go that way. There is no door. " << std::endl << std::endl;

			}
		
		}

		else if (choice == "left")
		{

			if (nodePtr->left != NULL)
			{

				nodePtr = nodePtr->left;

				currentPosition = nodePtr->label;


			}
			else
			{

				std::cout << "You cannot go that way. There is no door. " << std::endl << std::endl;

			}

		}

		else if (choice == "right")
		{

			if (nodePtr->right != NULL)
			{

				

				nodePtr = nodePtr->right;

				currentPosition = nodePtr->label;


			}
			else
			{

				std::cout << "You cannot go that way. There is no door. " << std::endl << std::endl;

			}

		}

		else if (choice == "interact")
		{

			nodePtr->room->interact(player1);

		
		}

		else if (choice == "q")
		{

			return 1;

		}

		nodePtr->room->roomAction(player1);


	}

	std::cout << "You reached the end of the maze!" << std::endl;

	
}
