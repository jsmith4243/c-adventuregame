class Room
{

	public:

		virtual void roomAction(Player& player1);

		virtual void interact(Player& player1);


		friend class Player;

};
