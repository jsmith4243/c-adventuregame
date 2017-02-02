LinkedList::ListNode* LinkedList::add(std::string label1)
{
	
	ListNode *nodePtr, *previousNodePtr;

	if (head == NULL)

		{
			head = new ListNode(label1);

			return head;

		}
	else
		{
			ListNode *nodePtr = head;
			while (nodePtr->next != NULL)
				nodePtr = nodePtr->next;

			nodePtr->next = new ListNode(label1);

			return nodePtr->next;

		}

	


}

void LinkedList::remove(std::string label1)
{

	ListNode *nodePtr = head;

	while ( (nodePtr->next != NULL) )

	{

		if (((nodePtr->next)->label) == label1)
		{


		}


	}

}

void LinkedList::displayOrder()
{

	std::cout << "QUEST1: " << std::endl;
	
	std:: cout << "	Go to control room, talk to captain.";

	std::cout << std::endl;

	std::cout << "	Go to deck 13, find Sargent Brown dead, get operating system disk." ;
	std::cout << std::endl;

	std::cout << "	Go to computer core, load operating system." ;
	std::cout << std::endl;

	std::cout << "QUEST2: " << std::endl;

	std:: cout << "	Go to control room, talk to captain.";

	std::cout << std::endl;

	std:: cout << "	Go to gun turret, load a round in gun.";

	std::cout << std::endl;



	std:: cout << "	Go to fire control, fire on pirates shooting the boat from the island.";

	std::cout << std::endl;

	std::cout << "QUEST3: " << std::endl;

	std:: cout << "	Go to control room, talk to captain.";

	std::cout << std::endl;

	std:: cout << "	Go to armory, get rifle. .";

	std::cout << std::endl;

	std:: cout << "	Go to fuel storage, turn on fuel valve.";

	std::cout << std::endl;

	std:: cout << "	Go to engine room, turn on engine.";

	std::cout << std::endl;

	std::cout << "QUEST4: " << std::endl;

	std:: cout << "	Go to control room, talk to captain.";

	std::cout << std::endl;

	std:: cout << "	Go to missile launcher 2, kick the missile into place.";

	std::cout << std::endl;

	std:: cout << "	Go to fire control, fire missile on pirate boat";

	std::cout << std::endl;

	std::cout << "QUEST5: " << std::endl;

	std:: cout << "	Go to control room, talk to captain.";

	std::cout << std::endl;

	std:: cout << "	Go to torpedo Storage, load torpedo in torpedo launcher";

	std::cout << std::endl;

	std:: cout << "	Go to fire control, fire on pirate dingui";

	std::cout << std::endl;	

	std:: cout << "	Go to control room, talk to captain.";

	std::cout << std::endl;

}

void LinkedList::displayList() const
{

	
	std::cout << std::endl;

	ListNode *nodePtr = head; 

	while (nodePtr->next != NULL)
	{

		std::cout << nodePtr-> label << " = ";

	
		
		
		//segfaults because in some cases nodePtr->left is null and doesnt have a label
		std:: cout << "left: ";
		if (nodePtr->left != NULL)
		{
			std:: cout  << (nodePtr->left)->label << " "; 

			

		}
		else 
		{
			std::cout << "No connection ";

		}

		std:: cout << "up: ";
		if (nodePtr->up != NULL)
		{
			std:: cout << (nodePtr->up)->label << " "; 

			

		}
		else 
		{
			std::cout << "No connection ";

		}		

		std:: cout << "right: ";
		if (nodePtr->right != NULL)
		{
			std:: cout << (nodePtr->right)->label << " "; 

			

		}
		else 
		{
			std::cout << "No connection ";

		}	

		std:: cout << "down: ";
		if (nodePtr->down != NULL)
		{
			std:: cout << (nodePtr->down)->label << " "; 

			

		}
		else 
		{
			std::cout << "No connection ";

		}
		

		

	
		

		

		std::cout << std::endl;

		

		//next node

		nodePtr = nodePtr->next;

	}

		std::cout << nodePtr-> label << " = ";

	
		
		
		//segfaults because in some cases nodePtr->left is null and doesnt have a label
		std:: cout << "left: ";
		if (nodePtr->left != NULL)
		{
			std:: cout  << (nodePtr->left)->label << " "; 

			

		}
		else 
		{
			std::cout << "No connection ";

		}

		std:: cout << "up: ";
		if (nodePtr->up != NULL)
		{
			std:: cout << (nodePtr->up)->label << " "; 

			

		}
		else 
		{
			std::cout << "No connection ";

		}		

		std:: cout << "right: ";
		if (nodePtr->right != NULL)
		{
			std:: cout << (nodePtr->right)->label << " "; 

			

		}
		else 
		{
			std::cout << "No connection ";

		}	

		std:: cout << "down: ";
		if (nodePtr->down != NULL)
		{
			std:: cout << (nodePtr->down)->label << " "; 

			

		}
		else 
		{
			std::cout << "No connection ";

		}
		

		

	
		

		

		


	std::cout << std::endl;

}

void LinkedList::displayListPtrs() const
{

	
	std::cout << std::endl;

	ListNode *nodePtr = head; 

	while (nodePtr->next != NULL)
	{

		std::cout << nodePtr << " = ";

	
		
		
		//segfaults because in some cases nodePtr->left is null and doesnt have a label
		std:: cout << "left: ";
		if (nodePtr->left != NULL)
		{
			std:: cout  << (nodePtr->left) << " "; 

			

		}
		else 
		{
			std::cout << "No connection ";

		}

		std:: cout << "up: ";
		if (nodePtr->up != NULL)
		{
			std:: cout << (nodePtr->up) << " "; 

			

		}
		else 
		{
			std::cout << "No connection ";

		}		

		std:: cout << "right: ";
		if (nodePtr->right != NULL)
		{
			std:: cout << (nodePtr->right) << " "; 

			

		}
		else 
		{
			std::cout << "No connection ";

		}	

		std:: cout << "down: ";
		if (nodePtr->down != NULL)
		{
			std:: cout << (nodePtr->down) << " "; 

			

		}
		else 
		{
			std::cout << "No connection ";

		}
		

		

	
		

		

		std::cout << std::endl;

		

		//next node

		nodePtr = nodePtr->next;

	}


		std::cout << nodePtr << " = ";

	
		
		
		//segfaults because in some cases nodePtr->left is null and doesnt have a label
		std:: cout << "left: ";
		if (nodePtr->left != NULL)
		{
			std:: cout  << (nodePtr->left) << " "; 

			

		}
		else 
		{
			std::cout << "No connection ";

		}

		std:: cout << "up: ";
		if (nodePtr->up != NULL)
		{
			std:: cout << (nodePtr->up) << " "; 

			

		}
		else 
		{
			std::cout << "No connection ";

		}		

		std:: cout << "right: ";
		if (nodePtr->right != NULL)
		{
			std:: cout << (nodePtr->right) << " "; 

			

		}
		else 
		{
			std::cout << "No connection ";

		}	

		std:: cout << "down: ";
		if (nodePtr->down != NULL)
		{
			std:: cout << (nodePtr->down) << " "; 

			

		}
		else 
		{
			std::cout << "No connection ";

		}
		

		

	
		

		

		std::cout << std::endl;



	
}


LinkedList::~LinkedList()
{

}

