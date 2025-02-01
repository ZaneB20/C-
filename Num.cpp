#include <iostream>
#include <random>

int main(){
	int correct;
	int guess;
	int turns = 0;
	std::string name;
	bool keepGoing = true;

	std::random_device rd;
	std::uniform_int_distribution<int> dist(1,100);


	correct = dist(rd);

	std::cout << "Correct: " << correct << std::endl;

	while (keepGoing){
		turns++;
		std::cout << turns << ")Please enter a number: ";
		std::cin >> guess;


		if (guess < correct){
		std::cout << "too low." << std::
