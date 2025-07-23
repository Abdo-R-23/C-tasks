#include <iostream>
using namespace std;
void main(){
	float grads;
	cout << "plase enter the grads : "<<endl;
	cin >> grads;
	if (grads >= 85 && grads <= 100) {
		cout << "exllent";

	}
	if (grads >= 75 && grads <= 84) {
		cout << "very good";
	}
	if (grads >= 65 && grads <= 74) {
		cout << "good";
	}
	if (grads >= 50 && grads <= 64) {
		cout << "fair";
	}
	else
	{
		cout << "numberd youer enterd is fales";
	}
}

