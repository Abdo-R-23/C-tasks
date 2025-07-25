#include <iostream>
using namespace std;

int main() {
    int height;

    // 1. Read height from user
    cout << "Enter the height of the pyramid: ";
    cin >> height;

    int space = height - 1;
    int stars = 1;

    // 2. Draw hollow pyramid
    for (int i = 0; i < height; i++) {
        // Print leading spaces
        for (int j = 0; j < space; j++) {
            cout << " ";
        }

        // Print stars and inner spaces
        for (int j = 0; j < stars; j++) {
            // Always print star at beginning or end
            if (j == 0 || j == stars - 1 || i == height - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl;
        stars += 2;
        space--;
    }

    return 0;
}
