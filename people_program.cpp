#include <iostream>
using namespace std;

#include "peopleClass.h"
using namespace derivedclass;



int main(){
	
	people *p[5];

	cout << "main \t menu"<< endl;
	for (int i = 0; i < 5; i++)
	{
		string name; int age; string SSN; double weight; double height; double activity; double intake;char gender;

		cout << "Enter the person " << i + 1 << "'s name: ";
		cin >> name;

		cout << "How old is the person: ";
		cin >> age;

		cout << "Enter the SSN: ";
		cin >> SSN;

		cout << "Height: ";
		cin >> height;

		cout << "Weight: ";
		cin >> weight;

		cout << "Enter one of the following: sedentary (1.2); moderately active (1.55); lightly active (1.35); and highly active (1.725)";
		cin >> activity;

		cout << "What is your calorie intake: ";
		cin >> intake;

		cout << "What is the gender? m for male and f for female:";
		cin >> gender;
		if (gender == 'm')
			p[i] = new male(name, age, SSN, height, weight, activity, intake);
		else
			p[i] = new female(name, age, SSN, height, weight, activity, intake);
	}

	cout << "Name /t Calorie Intake /t Suggested Intake /t Difference " << endl;
	cout << "---------------------------------------------------------" << endl;

	for (int i = 0; i < 5; i++)
	{

		double suggested = p[i]->bmr() * p[i]->getActivity();

		cout << p[i] ->getName() << " \t " << p[i]->getIntake() << 
			"\t " << suggested << "\t" << p[i] ->getIntake() - suggested << endl;
	}

	system("pause");
	return 0;


}


