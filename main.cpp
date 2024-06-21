#include <stdio.h>

class fpsGame
{
public:
	virtual void Voice() {
		printf("あにまる¥n");
	};
};

class Valorant : public fpsGame
{
public:
	void Voice() {
		printf("Valorantっす\n");
	};
};

class Apex : public fpsGame
{
public:
	void Voice() {
		printf("Apexっす\n");
	};
};

int main(void) {

	fpsGame* game[2] = { new Valorant,new Apex };

	game[0]->Voice();
	game[1]->Voice();

	delete game[0];
	delete game[1];

	return 0;
}
