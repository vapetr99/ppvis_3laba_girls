#pragma once
#pragma once
#pragma once
#include <array>

using namespace std;

class Cell {
private:
	const int MAX_AMOUNT_OF_INMATE = 4;
	const int MAX_AMOUNT_OF_PLANCTON = 2;
	const int MAX_AMOUNT_OF_PLANTS = 1;
	int inmateCounter;
	int plantsCounter;
	bool isCellEngaged;

public:
	virtual void isEngaged() = 0;
};

class Playground {
public:
	array<array<Cell, 10>, 10> playground;

};

//;

class Entity {    //сущность(растени€ и обитатели) только 2 функции, т.к. растени€ будет только умирать через несколько ходов и размножатьс€ на соседние клетки)
	string name;
	virtual void death() = 0;
	virtual void breeding() = 0;
};

class Inmate : Entity {
private:


	const int HP;
	Cell* currentCell = playground[1][1];

	virtual void nutrition() = 0;
	virtual void moving() = 0;

};

class Plant : Entity {

	void death() override;
	void breeding() override;

};

class Plancton : Inmate {

	void death() override;
	void breeding() override;
	void nutrition() override;
	void moving() override;

};

class PredatoryFish :Inmate {
	int size;

	void death() override;
	void breeding() override;
	void nutrition() override;
	void moving() override;
};

class Fish :Inmate {


	void death() override;
	void breeding() override;
	void nutrition() override;
	void moving() override;
};


class Shark : PredatoryFish {

};

class Piranha : PredatoryFish {

};

class Jellyfish : Plancton {//медуза

};


class Shrimp : Plancton { //креветка

};


class Seaweed : Plant//водоросли
{
};


class ClownFish : Fish //рыба-клоун
{
};

class SquirrelFish : Fish {  //рыба-белка

};