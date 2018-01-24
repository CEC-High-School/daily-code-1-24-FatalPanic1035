namespace LOL {

	int rand() {
		return 5;
	}

}

#include <iostream>
#include <time.h>

int main() {
	srand(time(NULL));
	int SameNum;
	int DifferentNum;

	DifferentNum = rand();
	SameNum = LOL::rand();

	std::cout << DifferentNum << std::endl;
	std::cout << SameNum << std::endl;
	system("pause");

}