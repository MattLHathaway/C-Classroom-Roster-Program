#include <iostream>
using namespace std;
#include <vector>
#include "student.h"
#include "roster.h"


int main()
{
    //INTRODUCTION AND TITLE
    cout << "Course C867 - Matthew Hathaway ID# 007284576" << endl;
    cout << "Class Roster Project - Made in C++" << endl << endl;

    //DECLARING VARIABLES, SETTING STUDENTS
    Student classRoster[5];
    Student currentStudent;
    int i;
    DegreeProgram network = NETWORK;
    DegreeProgram software = SOFTWARE;
    DegreeProgram security = SECURITY;
    Roster classRosterArray;
    classRosterArray.fillRoster(classRoster, currentStudent);

    // DEMONSTRATING THE FUNCTION CALLS
    classRosterArray.printAll();

    classRosterArray.printInvalidEmails();

    classRosterArray.printAllDaysAvg();

    classRosterArray.printByDegreeProgram(software);

    classRosterArray.remove("A3");

    classRosterArray.printAll();

    classRosterArray.StudentDestruct();

    return 0;
}