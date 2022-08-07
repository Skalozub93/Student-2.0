#pragma once
#include "Student.h"

class Aspirant : public Student
{
protected:
	string CandidateTopic;

public:

	Aspirant();
	Aspirant(unsigned int age, string name, string surname, string topic);

	void SetCandidateTopic(string work);
	string GetCandidateTopic() const;

	void Print();


};

