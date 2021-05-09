#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int lottery = rand() % 900 + 100;
	cout << "Enter your lottery pick (three different digits): ";
	int guess = 0;
	cout << "The lottery number is " << lottery << endl;
	cin >> guess;
	int lotteryDigit1 = lottery / 100;
	int lotteryDigit2 = (lottery / 10) % 10;
	int lotteryDigit3 = lottery % 10;
	int guessDigit1 = guess / 100;
	int guessDigit2 = (guess / 10) % 10;
	int guessDigit3 = guess % 10;

	if (guess == lottery){
		cout << "Exact match: you win $10,000";
	}
	else if (guessDigit1 == lotteryDigit1 && guessDigit2 == lotteryDigit2 && guessDigit3 == lotteryDigit3 || guessDigit2 == lotteryDigit1 && guessDigit1 == lotteryDigit2 && guessDigit3 == lotteryDigit3 || guessDigit1 == lotteryDigit3 && guessDigit2 == lotteryDigit1 && guessDigit3 == lotteryDigit2 || guessDigit1 == lotteryDigit1 && guessDigit2 == lotteryDigit3 && guessDigit3 == lotteryDigit2 || guessDigit1 == lotteryDigit2 && guessDigit2 == lotteryDigit3 && guessDigit3 == lotteryDigit1 || guessDigit1 == lotteryDigit3 && guessDigit2 == lotteryDigit2 && guessDigit3 == lotteryDigit1){
		cout << "Match all digits: you win $3,000";
	}
	else if (guessDigit1 == lotteryDigit1 || guessDigit1 == lotteryDigit2 || guessDigit1 == lotteryDigit3 || guessDigit2 == lotteryDigit1 || guessDigit2 == lotteryDigit2 || guessDigit2 == lotteryDigit3 || guessDigit3 == lotteryDigit1 || guessDigit3 == lotteryDigit2 || guessDigit3 == lotteryDigit3){
		cout << "Match one digit: you win $1,000";
	}
	else if (guessDigit1 == lotteryDigit1 && guessDigit2 == lotteryDigit2 || guessDigit1 == lotteryDigit1 && guessDigit2 == lotteryDigit3 || guessDigit1 == lotteryDigit2 && guessDigit2 == lotteryDigit1 || guessDigit1 == lotteryDigit2 && guessDigit2 == lotteryDigit3 || guessDigit1 == lotteryDigit3 && guessDigit2 == lotteryDigit1 || guessDigit1 == lotteryDigit3 && guessDigit2 == lotteryDigit2 || guessDigit2 == lotteryDigit1 && guessDigit3 == lotteryDigit2 || guessDigit2 == lotteryDigit1 && guessDigit3 == lotteryDigit3 || guessDigit2 == lotteryDigit2 && guessDigit3 == lotteryDigit1 || guessDigit2 == lotteryDigit2 && guessDigit3 == lotteryDigit3 || guessDigit2 == lotteryDigit3 && guessDigit3 == lotteryDigit1 || guessDigit2 == lotteryDigit3 && guessDigit3 == lotteryDigit2 || guessDigit1 == lotteryDigit1 && guessDigit3 == lotteryDigit2 || guessDigit1 == lotteryDigit1 && guessDigit3 == lotteryDigit3 || guessDigit1 == lotteryDigit2 && guessDigit3 == lotteryDigit1 || guessDigit1 == lotteryDigit2 && guessDigit3 == lotteryDigit3 || guessDigit1 == lotteryDigit3 && guessDigit3 == lotteryDigit1 || guessDigit1 == lotteryDigit3 && guessDigit3 == lotteryDigit2){
        cout << "Match two digits: you win $2,000";
    }
	else{
		cout << "Sorry, no match";
	}
	return 0;
}
