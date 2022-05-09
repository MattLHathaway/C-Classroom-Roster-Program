#include <iostream>
using namespace std;
#include <sstream>
#include "roster.h"
#include "student.h"
#include <vector>


void Roster::fillRoster(Student classRoster[5], Student currentStudent) {
    int i;
    for (i = 0; i < 5; i++) {
        currentStudent.SetStudentInfo(studentData[i]);
        this->classRoster[i] = currentStudent;
    }
}

void Roster::printAllDaysAvg() {
    int i;
    int days1;
    int days2;
    int days3;
    int avg;
    cout << endl << "Average Days to Complete: " << endl;

    for (i = 0; i < 5; i++) {
        days1 = stoi(classRoster[i].GetDaysToComplete1());
        days2 = stoi(classRoster[i].GetDaysToComplete2());
        days3 = stoi(classRoster[i].GetDaysToComplete3());
        avg = (days1 + days2 + days3) / 3;
        cout << classRoster[i].GetStudentID() << ": " << avg << " days average" << endl;
    }
    cout << endl;
}

void Roster::StudentDestruct() {
    cout << endl << "The destructor has activated." << endl;
}

void Roster::Print() {
    classRoster[4].Print();
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, string age, string daysInCourse1, string daysInCourse2, string daysInCourse3, string degreeProgram) {
    int i;
    string infoToAdd;
    infoToAdd = "";
    infoToAdd.append(studentID);
    infoToAdd.append(",");
    infoToAdd.append(firstName);
    infoToAdd.append(",");
    infoToAdd.append(lastName);
    infoToAdd.append(",");
    infoToAdd.append(emailAddress);
    infoToAdd.append(",");
    infoToAdd.append(age);
    infoToAdd.append(",");
    infoToAdd.append(daysInCourse1);
    infoToAdd.append(",");
    infoToAdd.append(daysInCourse2);
    infoToAdd.append(",");
    infoToAdd.append(daysInCourse3);
    infoToAdd.append(",");
    infoToAdd.append(degreeProgram);

    for (i = 0; i < 5; i++) {
        if (classRoster[i].GetStudentID() == "NoID") {
            currentStudent.SetStudentInfo(infoToAdd);
            this->classRoster[i] = currentStudent;
        }
    }
}

void Roster::remove(string studentID) {
    int i;
    bool found = 0;
    for (i = 0; i < 5; i++) {
        if (studentID == this->classRoster[i].GetStudentID()) {
            this->classRoster[i] = Student();
            found = 1;
        }
    }
    if (found == 0) {
        cout << "Error: Student not found!" << endl;
    }
}

void Roster::printAll() {
    int i;
    cout << "All Students: " << endl;
    for (i = 0; i < 5; i++) {
        if (classRoster[i].GetStudentID() != "NoID") {
            classRoster[i].Print();
        }
        else {
            cout << "ERROR: This student could not be found." << endl;
        }
    }
}

void Roster::printAverageDaysInCourse(string studentID) {
    int i;
    int daysInCourse1 = 0;
    int daysInCourse2 = 0;
    int daysInCourse3 = 0;
    int averageDaysInCourse = 0;


    for (i = 0; i < 5; i++) {
        if (classRoster[i].GetStudentID() == studentID) {
            daysInCourse1 = stoi(classRoster[i].GetDaysToComplete1());
            daysInCourse2 = stoi(classRoster[i].GetDaysToComplete2());
            daysInCourse3 = stoi(classRoster[i].GetDaysToComplete3());
        }
    }

    averageDaysInCourse = (daysInCourse1 + daysInCourse2 + daysInCourse3) / 3;
    if (averageDaysInCourse != 0) {
        cout << "Average days in course: " << averageDaysInCourse << endl;
    }
    else {
        cout << "Error: student not found." << endl;
    }
}

void Roster::printInvalidEmails() {
    int i, j;
    bool hasSpace = 0;
    bool hasAt = 0;
    bool hasPeriod = 0;
    string fillerEmail;

    cout << endl << "Invalid Emails: " << endl;

    for (i = 0; i < 5; i++) {

        fillerEmail = classRoster[i].GetEmailAddress();

        for (j = 0; j < fillerEmail.length(); j++) {
            if (fillerEmail.at(j) == ' ') {
                hasSpace = 1;
            }
            else if (fillerEmail.at(j) == '@') {
                hasAt = 1;
            }
            else if (fillerEmail.at(j) == '.') {
                hasPeriod = 1;
            }
        }
        if (hasSpace == 1) {
            cout << fillerEmail << endl;
        }
        else if (hasAt != 1) {
            cout << fillerEmail << endl;
        }
        else if (hasPeriod != 1) {
            cout << fillerEmail << endl;
        }
        hasSpace = 0;
        hasAt = 0;
        hasPeriod = 0;
    }
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    int i, j;
    string fillerDegree;
    string chosenDegree;
    cout << "Sorted by Degree Program: " << endl;

    if (degreeProgram == 0) {
        chosenDegree = "SECURITY";
    }
    else if (degreeProgram == 1) {
        chosenDegree = "NETWORK";
    }
    else {
        chosenDegree = "SOFTWARE";
    }

    for (i = 0; i < 5; i++) {
        fillerDegree = classRoster[i].GetDegreeProgram();
        if (fillerDegree == chosenDegree) {
            classRoster[i].Print();
        }
    }
    cout << endl;
}
