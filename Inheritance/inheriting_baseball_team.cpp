#include "inheriting_baseball_team.h"
#include <iostream>

//Person Implementation
Person::Person(const std::string name = "", int age = 0)
	: m_name{ name }, m_age{ age } {}
const std::string& Person::getName() const { return m_name; }
int Person::getAge() { return m_age; }

//Baseball Player Implementation
BaseballPlayer::BaseballPlayer(const std::string name = "", int age = 0, double battingAverage = 0, int homeRuns = 0)
	: Person{ name, age }, m_battingAverage{ battingAverage }, m_homeRuns{ homeRuns } {}
int BaseballPlayer::getHomeRuns() { return m_homeRuns; }

void BaseballPlayer::printNameAndBattingAverage() {
	std::cout << getName() << ": " << m_battingAverage << "\n";
}

//Employee Implementation
Employee::Employee(const std::string name = "", int age = 0, double hourlysalary = 0.0, long employeeID = 0)
	: Person{ name, age },
	m_hourlsalary{ hourlysalary }, m_employeeID{ employeeID } {}

void Employee::printNameAndSalary() {
	std::cout << getName() << ": " << m_hourlsalary << "\n";
}

Supervisor::Supervisor(long employees[] = {})
	: m_overseenIDs{ *employees } {}



void RunInheritance_BaseballTeam() {
	Employee frank{ "Frank Billings", 56, 20.25, 12345 };
	frank.printNameAndSalary();

	BaseballPlayer Ken{ "Ken Griffery", 25, .452, 63 };
	Ken.printNameAndBattingAverage();

	long overseenIDs[]{ 54234, 13535, 12367, 76843, 75457 };
	Supervisor Richard{ overseenIDs };
}