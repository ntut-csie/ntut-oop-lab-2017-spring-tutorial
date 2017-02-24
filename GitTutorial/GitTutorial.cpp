#include <string>
#include <iostream>
using namespace std;
bool Guess(int number)
{
    static int target = -1;

    if (number > target)
    {
        std::cout << "Smaller" << std::endl;
        return false;
    }
    else if (number < target)
    {
        std::cout << "Bigger" << std::endl;
        return false;
    }

	if (number == target) {
		std::cout << "Correct !!";
		target = -1;
		return true;
	}
	else std::cout << "Wrong" << std::endl;
	return false;
}
int main()
{
    int guess;

    do
    {
        std::cout << "Choose a number between 1 - 100 :";
        std::cin >> guess;
    }
    while (!Guess(guess));

    return 0;
}