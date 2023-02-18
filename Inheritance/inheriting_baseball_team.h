#pragma once
#include <string>

class Person {
private:
	std::string m_name{};
	int m_age{};

public:
	Person(const std::string name, int age);
	const std::string& getName() const;
	int getAge();
};

class BaseballPlayer : public Person {
private:
	double m_battingAverage{};
	int m_homeRuns{};

public:
	BaseballPlayer(const std::string name, int age, double battingAverage, int homeRuns);
	int getHomeRuns();
	void printNameAndBattingAverage();

};

class Employee : public Person {
public:
	double m_hourlsalary{};
	long m_employeeID{};

	Employee(const std::string name, int age, double hourlysalary, long employeeID);

	void printNameAndSalary();

};

class Supervisor : public Employee {
public:
	//Array of Long int IDs that work underneath the supervisor
	long m_overseenIDs[5]{};

	Supervisor(long employees[]);
};

void RunInheritance_BaseballTeam();