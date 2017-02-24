#include <string>
#include <iostream>
using namespace std;
bool Guess(int number) {
	static int target = -1;
	if (target == -1) {
		target = (int)(100.0*rand()) % 100 + 1;
	}
	if (number == target)return true;
	return false;
}
int main() {
}