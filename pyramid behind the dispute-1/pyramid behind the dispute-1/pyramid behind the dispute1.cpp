#include <iostream>
using namespace std;
void main() {
    int height;

    cout << "Enter the height of the pyramids: ";
    cin >> height;

    int space = height - 1;
    int stars = 1;

    
    for (int i = 0; i < height; i++) {
        
        for (int j = 0; j < space; j++) {
            cout << " ";
        }

         
        for (int j = 0; j < stars; j++) {
            cout << "*";
        }

        cout << endl;
        space--;
        stars += 2;
    }

    
    space = 0;
    stars -= 2;  

    for (int i = 0; i < height; i++) {
        
        for (int j = 0; j < space; j++) {
            cout << " ";
        }

        
        for (int j = 0; j < stars; j++) {
            cout << "*";
        }

        cout << endl;
        space++;
        stars -= 2;
    }

    
}
