#include <iostream>
#include "StringPrint.h"

using namespace std;

void firstStrPrint() 
{	
	cout << "Come up and C++ me some time.";
	cout << endl;
	cout << "You won't regret it" << endl;
	
	return;
}

void carrots() {
	int carrots;

	carrots = 25;
	cout << "I have ";
	cout << carrots;
	cout << " carrots.";
	cout << endl;
	carrots = carrots - 1;
	cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;

	return;
}

void getinfo() {
	int carrots;

	cout << "How many carrots do you have?" << endl;
	cin >> carrots;
	cout << "Here are two more. ";
	carrots = carrots + 2;
	cout << "Now you have " << carrots << " carrots." << endl;

	return;
}

void unitTrans() {
	double dis;

	cout << "Please enter the distance with long as unit. How long?" << endl;
	cin >> dis;

	cout << "Distance := " << dis * 220.0 << "mile." << endl;
}