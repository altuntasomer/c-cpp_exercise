/*
Ömer ALTUNTAŞ
12.02.2020

Bu kod SoloLearn uygulamasındaki CodeCoach bölümündeki 
'Thats odd' probleminin çözümüdür.
Çift sayıları toplar. Öncelikle girilecek sayıların sayısını girmelisin.

This code is in the CodeCoach section of the SoloLearn application.
It is the solution to the 'Thats odd' problem.
It adds even numbers. Firstly you must enter number of numbers to enter. 
*/

#include <iostream>
using namespace std;


int main() {
	
	int size, toplam = 0;
	
	cin >> size; //number of numbers to enter - Girilecek sayıların Sayısı

	

	for (int i = 0; i < size; i++) {
		
		int temp;
		cin >> temp;

		if (temp % 2 == 0)
			toplam += temp;

	}

	cout << toplam << endl;

	return 0;
}