/*
Ömer ALTUNTAŞ
19.02.2020

Bu kod SoloLearn uygulamasındaki CodeCoach bölümündeki
'Deja Vu' probleminin çözümüdür.
Bu kod bir cümlede arka arkaya gelen harflerin aynı olup olmadığını bulur.

This code is in the CodeCoach section of the SoloLearn application.
It is the solution to the 'Deja Vu' problem.
This code finds whether the letters in a line are the same in a sentence.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

	string words;
	cout << "Enter" << endl;

	getline(cin, words);
	
	int size = words.length();
	bool DU = false;
	
	for (int i = 1; i < size; i++) {

		if (words[i] == words[i - 1]) {

			cout << "Deja Vu" << endl;
			DU = true;
			break;
		}
	}
	
	if (DU != true)
		cout << "Unique" << endl;

	return 0;
}
