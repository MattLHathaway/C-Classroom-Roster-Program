#ifndef ROSTER_H
#define ROSTER_H
#include <vector>
#include "student.h"
#include "degree.h"

class Roster {
public:
    void fillRoster(Student classRoster[5], Student currentStudent);
    void Print();
    void printAllDaysAvg();
    void StudentDestruct();
    //Functions outlined in Step E-3 of the Task 1 Requirements:
    void add(string studentID, string firstName, string lastName, string emailAddress, string age, string daysInCourse1, string daysInCourse2, string daysInCourse3, string degreeProgram);
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);
private:
    Student currentStudent;
    Student classRoster[5];
    const string studentData[5] = { "A1,John,Smith,John1989@gma il.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Matthew,Hathaway,mhath14@my.wgu.edu,28,25,22,32,SOFTWARE" };
};

#endif