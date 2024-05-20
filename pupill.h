#ifndef PUPIL_H
#define PUPIL_H

#include <string>

using namespace std;

class Pupil{
    
    public: 
    Pupil();
    ~Pupil();
    //member variables declaration 
    string fname;
    string lname;
    string programOfstudy;
    int yearAdmitted;
    int currentYear;

    //member function declaration

    void setFname(string fn);
    void setLname(string ln);
    void setProgramOfstudy(string pg);
    void setYearAdmitted(int ya);
    void setCurrentYear(int cy); 
    void getFname() const;
    void getLname() const;
    void getProgramOfstudy() const;
    int getYearAdmitted() const;
    int getCurrentYear() const;
    int calculateYearOfStudy(int yearAdmitted, int currentYear) const;

};

#endif