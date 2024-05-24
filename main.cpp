#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;

int main() {

	list<const char*> station { 
		"Komagome", "Tabata", "Nippri", "Uguisudani", "Ueno", 
		"Okachimachi", "Akihabara", "Kanda", "Tokyo", "Yurakucho", 
		"Shimbashi", "Hamamastucho", "Tamachi", "Shinagawa"
	};

	for (list<const char*>::iterator itr = station.begin(); itr != station.end(); itr++) {
		cout << *itr << endl;
	}

	cout << endl;
	
	for (list<const char*>::iterator itr = station.begin(); itr != station.end(); itr++) {
		if (strcmp(*itr, "Nippri") == 0) {
			itr = station.insert(itr, "Nishi-Nippri");
			++itr;
		}
	}

	for (list<const char*>::iterator itr = station.begin(); itr != station.end(); itr++) {
		cout << *itr << endl;
	}

	cout << endl;

	for (list<const char*>::iterator itr = station.begin(); itr != station.end(); itr++) {
		if (strcmp(*itr, "Shinagawa") == 0) {
			itr = station.insert(itr, "Takanawa_Gateway");
			++itr;
		}
	}

	for (list<const char*>::iterator itr = station.begin(); itr != station.end(); itr++) {
		cout << *itr << endl;
	}

	return 0;
}