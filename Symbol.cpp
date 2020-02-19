/*
Ömer ALTUNTAŞ
14.02.2020

Bu kod SoloLearn uygulamasındaki CodeCoach bölümündeki
'symbol' probleminin çözümüdür.
Sembol içeren kelimeyi ya da cümleyi semboller olmadan ekrana yazar. 


This code is in the CodeCoach section of the SoloLearn application.
It is the solution to the 'symbol' problem.
Writes the word or sentence containing symbols on the screen 
without symbols.
*/
#include <iostream>
#include <string>
using namespace std;


int main() {
	
	string words,symbol="@#€%*$/-+&!=?\<>|é";
	int size;
	
	cout << "Enter" << endl;
	getline(cin,words);
	
	size = words.size();
	

	for (int i = 0; i < size; i++) {

		int a=0;
			
		for (int j = 0; j < 6; j++) {

			if (words[i] == symbol[j])
				a++;
		}
		
		if (a == 0)
			cout << words[i];
	}


	return 0;
}