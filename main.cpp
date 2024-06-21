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

	fpsGame* animal[2] = { new Valorant,new Apex };

	animal[0]->Voice();
	animal[1]->Voice();

	delete animal[0];
	delete animal[1];

	return 0;
}
