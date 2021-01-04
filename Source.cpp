#include<iostream>
using namespace std;

int main() {

	int a = 3;  // size of cell

	for (int i = 0; i < 6; i++) {

		for (int j = 0; j < 6; j++) {

			for (int z = 0; z < a; z++) {

				cout << "*";

			}

			for (int z = 0; z < a; z++) {

				cout << "-";

			}

		}
		cout << endl;

	}








	return 0;
}