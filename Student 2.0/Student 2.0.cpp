#include "Student.h"

Student::Student() : Student(22,"Vladyslav", "Skalozub") {}

Student::Student(int age, string name, string surname)
{
	SetAge(age);
	SetName(name);
	SetSurName(surname);
}

void Student::SetAge(unsigned int Yage)
{
	if (age >= 18 || age < 100)
		age = Yage;
	else
		throw  "incorrect age!";
}

void Student::SetName(string Yname)
{
	name = Yname;
}

void Student::SetSurName(string Ysurname)
{
	surname = Ysurname;
}

int Student::GetAge() const
{
	return age;
}

string Student::GetName() const
{
	return name;
}

string Student::GetSurName() const
{
	return surname;
}


void Student::Print()
{
	cout << "Name - " << GetName() << " " << GetSurName() << "\n";
	cout << "Age - " << GetAge() << "\n";
}

