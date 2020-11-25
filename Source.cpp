#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <bits1_5.h>

using namespace std;

bool isPrime(int& a) {
	int c = 0;
	for (int i = 1; i <= a; i++) {
		if (a % i == 0)
			c++;
	}
	return (c == 2);
}

string VowelUp(string& a) {
	int x = a.length();
	string c = "AEIOU";
	for (int i = 0; i < x; i++) {
		if ((a[i] == 'a') || (a[i] == 'e') || (a[i] == 'i') || (a[i] == 'o') || (a[i] == 'u'))
			a[i] = a[i] - 'a' + 'A';
	}
	return a;
}

void FactorDisplay(int& a) {
	cout << "The factors of" << a << "are: \n";
	for (int i = 1; i <= a; i++) {
		if (a % i == 0)
			cout << i << " ,";
	}
}

void ConVowNum(string& line) {
	int x = 0, y = 0;
	for (int i = 0; i < line.length(); i++) {
		if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||line[i] == 'U') {
			++x;
		}
		else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
			++y;
		}
	}
	cout << "The number of consonants is: " << y+1 << "\nThe number of vowels is: " << x;
}

void RepNonRep(string& a) {
	int c = 0;
	for (int i = 0; i < a.length(); ) {
		for (int j = 0; j < a.length(); j++) {
			if (a[i] == a[j])
				c++;

		}
		if (c > 1)
			cout << a[i] << "is repeated " << c << "times.\n";
		c = 0;
		i++;
	}
}

int main(void) {
	int a;
	cout << "----------------MENU-------------------\n Press 1 to find if the entered num is prime or not\n Press 2 to convert the vowels to upper case\n Press 3 to display allthe factors of a number\n Press 4 to find the num of consonants and vowels\n Press 5 to find the repititive characters of a string\n ----------------------------------------------\n";
	cin >> a;
	if (a == 1) {
		cout << "Enter a number:\n ";
		int b;
		cin >> b;
		if (isPrime(b))
			cout << "Prime NUmber\n";
		else
			cout << "Not Prime Number\n";
	}
	else if (a == 2) {
		cout << "Enter a string\n";
		string sen;
		cin >> sen;
		cout << VowelUp(sen);
	}
	else if (a == 3) {
		cout << "Enter a number: \n";
		int c;
		cin >> c;
		FactorDisplay(c);
	}
	else if (a == 4) {
		cout << "Enter a string\n";
		string se;
		cin >> se;
		ConVowNum(se);
	}
	else if (a == 5) {
		cout << "Enter a string\n";
		string s;
		cin >> s;
		RepNonRep(s);
	}
	else
		cout << "INVALID INPUT\n";
}