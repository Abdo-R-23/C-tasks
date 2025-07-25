#include <iostream>
using namespace std;

int main() {
    int height;

    // 1. Read height from user
    cout << "Enter the height of the pyramid: ";
    cin >> height;
  int   space = height - 1;
  int stars = 1;



    // 2. Draw pyramid
    for (int i = 0; i < height; i++) {
        // Print spaces
        for (int j = 0; j <space; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 0; j < stars; j++) {
            cout << "*";
        }

        // Move to next line
        cout << endl;
        stars += 2;
        space --;

    }

    return 0;
}
