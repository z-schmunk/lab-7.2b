//Zac Schmnunk - 10/24/2024
//Lab 7b.2

#include <iostream>
#include <cmath>

using namespace std;

bool all_the_same(int x, int y, int z) {
    return (x == y) && (y == z);
}

bool all_different(int x, int y, int z) {
    return (x != y) && (y != z) && (x != z);
}

bool sorted(int x, int y, int z) {
    return (x <= y) && (y <= z);
}

int main() {
    int x, y, z;
    char choice;

    do {
        cout << "Enter three numbers or Q to quit: ";
        if (!(cin >> x >> y >> z)) {
            cin.clear();
            cin >> choice;
            if (choice == 'Q' || choice == 'q') break;
            cout << "Invalid input. Please enter integers." << endl;
            continue;
        }

        if (all_the_same(x, y, z)) {
            cout << "Numbers are all the same." << endl;
        }
        else {
            cout << "Numbers are not all the same." << endl;
        }

        if (all_different(x, y, z)) {
            cout << "Numbers are all different." << endl;
        }
        else {
            cout << "Numbers are not all the different." << endl;
        }

        if (sorted(x, y, z)) {
            cout << "Numbers are sorted." << endl;
        }
        else {
            cout << "Numbers are not sorted." << endl;
        }

    } while (true);

    return 0;
}