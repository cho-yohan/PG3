#include <stdio.h>

class FPS
{
public:
	virtual void Voice() {
		printf("あにまる¥n");
	};
};

class Valorant : public FPS
{
public:
	void Voice() {
		printf("Valorantっす\n");
	};
};

class Apex : public FPS
{
public:
	void Voice() {
		printf("Apexっす\n");
	};
};

int main(void) {

	FPS* game[2] = { new Valorant,new Apex };

	game[0]->Voice();
	game[1]->Voice();

	delete game[0];
	delete game[1];

	return 0;
}
