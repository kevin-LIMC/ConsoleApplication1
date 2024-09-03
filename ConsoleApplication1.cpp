#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<string> aves = { "Loro gris", "Paloma de diamante", "Coctel" };

	cout << "Los valores del vector antes de insertar:\n";

	for (int i = 0; i < aves.size(); ++i) {

		cout << aves[i] << " ";
	}
	cout << endl << endl;

	aves.push_back("Mayna");
	aves.push_back("Periquitos");
	aves.push_back("Cacatua");

	cout << "Los valores del vector despues de insertar:\n";

	for (int i = 0; i < aves.size(); ++i) {

		cout << aves[i] << " ";

	}
	cout << endl;
	return 0;



}