#include <iostream>

int main() {
	srand(time(0));
	char choice;

	for (;;) {
		std::cout << "\nRandom Number is " << rand();

		std::cout << "\nGenerate new random number (Y or N): ";
		std::cin >> choice;

		if (choice == 'N') break;
	}
}