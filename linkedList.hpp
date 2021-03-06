
class LinkedList
{

	//protected:
	public:

		struct ListNode
		{

			public:

			Room* room;
	
			std::string label;

			ListNode* next;

			ListNode* previous;

			ListNode* left;

			ListNode* right;

			ListNode* up;

			ListNode* down;

			ListNode(std::string label1, ListNode *next1 = NULL)
			{

				label = label1;

				next = next1;

				up = NULL;

				down = NULL;
	
				left = NULL;

				right = NULL;

				/*
				if (label1 == "gunTurret")
				{

				}
				else
				{
				*/

				if (label == "control room")
				{

					room = new ControlRoom();


				}

				else if (label == "computer core")
				{

					room = new ComputerCore();

				}



				else if (label == "engine room")
				{

					room = new EngineRoom();

				}

				else if (label == "deck 13")
				{

					room = new SpecialDeck();

				}

				else if (label == "gun turret")
				{

					room = new GunTurret();
				}

				else if (label == "fuel storage")
				{

					room = new FuelStorage();
	
				}

				else if (label == "engine room")
				{

					room = new EngineRoom();
	
				}

				else if (label == "missile launcher 2")
				{

					room = new MissileLauncher2();

				}

				else if (label == "torpedo storage")
				{

					room = new TorpedoStorage();

				}

				else if (label == "fire control")
				{

					room = new FireControl();

				}

				else if (label == "armory")
				{

					room = new Armory();

				}

				else
				{

					room = new Room();

				}
			}




		};

		ListNode *head; //List head pointer

		public:

			LinkedList()
			{

				head = NULL;
		
			}


			~LinkedList();

			void displayOrder();
		

			LinkedList::ListNode* add(std::string label1);
	

			void remove(std::string label1);
		
			void displayList() const;

			void displayListPtrs() const;	

		
};
