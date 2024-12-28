#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

int main() {
    srand(static_cast<unsigned>(time(0))); // Seed for random number generation
    int RightNo = rand() % 100 + 1;       // Random number between 1 and 100
    int GussNo;

    cout << "Guess the number (between 1 and 100): ";

    while (true) {
        if (!(cin >> GussNo)) {
            cout << "Please enter a valid number!" << endl;
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            continue;
        }

        if (GussNo == RightNo) {
            cout << "Correct! Well done." << endl;
            break;
        } else if (GussNo > RightNo) {
            cout << "The number is smaller! Try again..." << endl;
        } else {
            cout << "The number is bigger! Try again..." << endl;
        }
    }

    cout << "Thanks for playing! Press Enter to exit...";
    cin.ignore();
    cin.get();
    return 0;
}
