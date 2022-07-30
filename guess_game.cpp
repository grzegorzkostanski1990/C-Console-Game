#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int range, guess, goal,tryied = 0;
	cout << "Tell maximal number to guess: ";
	cin >> range;
	goal = rand() % range+1;

do{
	cout << "What is your guess between 1 and " <<range <<" ?" << endl;
	cin >> guess;
	tryied++;
	if (guess > goal) { cout << "You guessed too big number"<<endl; }
	if (guess < goal) { cout << "You guessed too small number"<<endl; }
} while (guess != goal);
cout << "Congratulations! You found that number at "<<tryied<< " time!";

return 0;
}
