#ifndef STUDENT_H
#define STUDENT_H
#include <vector>

class Student {
public:
	//CONSTRUCTOR
	Student();
	void StudentDest();
	//DESTRUCTOR
	~Student();
	//SETTERS
	void SetStudentInfo(string studentInfo);
	void SetStudentID(string inputString);
	void SetFirstName(string inputString);
	void SetLastName(string inputString);
	void SetEmailAddress(string inputString);
	void SetAge(string inputString);
	void SetDaysToComplete();
	void SetDegreeProgram(string inputString);
	//GETTERS
	string GetStudentID() const;
	string GetFirstName() const;
	string GetLastName() const;
	string GetEmailAddress() const;
	string GetAge() const;
	string GetDaysToComplete1() const;
	string GetDaysToComplete2() const;
	string GetDaysToComplete3() const;
	string GetDegreeProgram() const;
	void Print() const;
private:
	//Variables used to identify each student
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	string age;
	string daysToComplete[3];
	string degreeProgram;
	//Variables for mutation
	string studentInfo;
	int arrSize;
	string fillerArray[9];
	string fillerString;
};

#endif