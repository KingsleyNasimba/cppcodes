#ifndef PUPIL_H
#define PUPIL_H

#include <string>

using namespace std;

class Pupil{
    
    public: 
    //member variables declaration 
    string fName;
    string lName;
    string programOfstudy;
    unsigned int yearOfStudy;

    //member function declaration
    void initialize();
    void CalculateYear(int yearAdmitted, int currentYear);

};

#endif