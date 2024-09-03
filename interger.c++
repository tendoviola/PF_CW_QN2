#include <iostream>
#include <vector>
#include <algorithm>  // For sort function
using namespace std;

int main() {
    int num;
    char choice;

    cout << "This program is designed to exhibit the positive divisors of positive integers supplied by you.\n";
    cout << "You will be repeatedly prompted to enter a positive integer.\n";
    cout << "To terminate the program, you can enter a negative number or zero at any prompt.\n\n";

    do {
        cout << "Please enter a positive integer (or enter 0 or a negative number to quit): ";
        cin >> num;

        if (num <= 0) {
            cout << "Exiting the program.\n";
            break;
        }

        // Finding divisors
        vector<int> divisors;
        for (int i = 1; i <= num; ++i) {
            if (num % i == 0) {
                divisors.push_back(i);
            }
        }

        // Sorting divisors in decreasing order
        sort(divisors.rbegin(), divisors.rend());

        // Display divisors
        cout << "The divisors of " << num << " are:\n";
        for (int divisor : divisors) {
            cout << divisor << endl;
        }

        // Ask if the user wants to enter another number

        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the program. \n";

    return 0;
}
