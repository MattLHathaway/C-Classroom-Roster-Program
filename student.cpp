#include <iostream>
using namespace std;
#include "student.h"
#include <vector>


//CONSTRUCTOR
Student::Student() {
	studentID = "NoID";
	firstName = "NoFirstName";
	lastName = "NoLastName";
	emailAddress = "noEmail";
	age = "noAge";
	daysToComplete[0] = "-1";
	daysToComplete[1] = "-1";
	daysToComplete[2] = "-1";
	degreeProgram = "noDegree";
}

//DESTRUCTOR
Student::~Student() {}

//SETTERS
void Student::SetStudentInfo(string studentInfo) {
	int i;
	int j;
	j = 0;
	fillerString = "";
	// Loops through the string and assigns each part to an array
	for (i = 0; i <= studentInfo.size(); i++) {
		if (studentInfo[i] != ',' && i != studentInfo.size()) {
			fillerString.push_back(studentInfo[i]);
		}
		else {
			fillerArray[j] = fillerString;
			fillerString = "";
			j++;
		}
	}
	//Assigning the array info to studentID, firstName, etc...
	studentID = fillerArray[0];
	firstName = fillerArray[1];
	lastName = fillerArray[2];
	emailAddress = fillerArray[3];
	age = fillerArray[4];
	//loop to set array of daysToComplete
	for (i = 0; i <= 2; i++) {
		daysToComplete[i] = fillerArray[i + 5];
	}
	degreeProgram = fillerArray[8];
}

void Student::SetStudentID(string inputString) {
	this->studentID = inputString;
}

void Student::SetFirstName(string inputString) {
	this->firstName = inputString;
}

void Student::SetLastName(string inputString) {
	this->lastName = inputString;
}

void Student::SetEmailAddress(string inputString) {
	this->emailAddress = inputString;
}

void Student::SetAge(string inputString) {
	this->age = inputString;
}

void Student::SetDaysToComplete() {

}

void Student::SetDegreeProgram(string inputString) {
	this->degreeProgram = inputString;
}


//GETTERS
string Student::GetStudentID() const {
	return studentID;
}

string Student::GetFirstName() const {
	return firstName;
}

string Student::GetLastName() const {
	return lastName;
}

string Student::GetEmailAddress() const {
	return emailAddress;
}

string Student::GetAge() const {
	return age;
}

string Student::GetDaysToComplete1() const {
	return daysToComplete[0];
}

string Student::GetDaysToComplete2() const {
	return daysToComplete[1];
}

string Student::GetDaysToComplete3() const {
	return daysToComplete[2];
}

string Student::GetDegreeProgram() const {
	return degreeProgram;
}

void Student::Print() const {
	int i;
	cout << studentID << "  First Name: " << firstName;
	cout << "    Last Name: " << lastName << "   Age: ";
	cout << age << "     daysInCourse: " << "   {" << daysToComplete[0];
	cout << ", " << daysToComplete[1] << ", " << daysToComplete[2] << "}";
	cout << "   Degree Program: " << degreeProgram << endl;
}