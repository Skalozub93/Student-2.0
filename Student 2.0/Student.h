#pragma once

#include <iostream>
using namespace std;

class Student
{
protected:
	int age;
	string name;
	string surname;
	string phone_number;
	
public:
	Student();
	Student(int age, string name, string surname);

	void SetAge(unsigned int age);
	void SetName(string name);
	void SetSurName(string surname);

	int GetAge() const;
	string GetName() const;
	string GetSurName() const;

	void Print();
};

