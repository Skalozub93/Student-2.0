#include "Aspirant.h"

Aspirant::Aspirant() : Aspirant(21, "Vladymir", "Zaytsev", "OOP Paradigm") {}

Aspirant::Aspirant(unsigned int age, string name, string surname, string topic) : Student(age, name, surname)
{
	SetCandidateTopic(topic);
}

void Aspirant::SetCandidateTopic(string work)
{
	CandidateTopic = work;
}
string Aspirant::GetCandidateTopic() const
{
	return CandidateTopic;
}

void Aspirant::Print()
{
	Student::Print();
	cout << "Candidate topic - " << GetCandidateTopic() << "\n";
}
