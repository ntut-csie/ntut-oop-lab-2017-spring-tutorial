#include <string>
#include <iostream>
using namespace std;
bool Guess(int number)
{
    return false;
}
int main()
{
    int guess;

    do
    {
        std::cin >> guess;
    }
    while (!Guess(guess));

    return 0;
}