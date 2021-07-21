
#pragma once
#ifndef DERIVEDCLASS
#define DERIVEDCLASS


#include <string>
	using namespace std;


namespace derivedclass
{

	

	class people
	{
	

	public:

		people( string n = "", int a = 0, string s = "", double h = 0, double w = 0, double ac = 0, double i = 0){
			name = n;
			age = a;
			SSN = s;
			height = h;
			weight = w;
			activity = ac;
			intake = i;


		}
		void setName(string value){
			name = value;
		}
		string getName(){
			return name;
		}
		void setAge(int num){
			age = num;
		}
		int getAge(){
			return age;
		}
		void setSSN(string num){
			SSN = num;
		}
		string getSSN(){
			return SSN;
		}
		void setWeight(double num){
			weight = num;
		}
		double getWeight(){
			return weight;
		}
		void setHeight(double num){
			height = num;
		}
		double getHeight(){
			return height;
		}
		void setActivity(double num){
			activity = num;
		}
		double getActivity(){
			return activity;
		}
		void setIntake(double num){
			intake = num;
		}
		double getIntake(){
			return intake;
		}

		virtual double bmr(){
			return 0;
		}

	protected:
		string name; int age; string SSN; double weight; double height; double activity; double intake;
	};

	class male: public people
	{
	public:

		male( string n = "", int a = 0, string s = "", double h = 0, double w = 0, double ac = 0, double i = 0){
			name = n;
			age = a;
			SSN = s;
			height = h;
			weight = w;
			activity = ac;
			intake = i;


		}
		double bmr(){

			
			 return( 66+(30.14 * weight) + (1.97*height) - 6.8*age);

		}
	};

	class female: public people{
	public:

		female( string n = "", int a = 0, string s = "", double h = 0, double w = 0, double ac = 0, double i = 0){
			name = n;
			age = a;
			SSN = s;
			height = h;
			weight = w;
			activity = ac;
			intake = i;


		}
		double bmr(){

			
			 return( 65.5+(21.12 * weight) + (0.71*height) - 4.7*age);

		}
	};
}
#endif
