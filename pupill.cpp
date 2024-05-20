#include "pupill.h"

Pupil::Pupil(){
    fname = "";
    lname = "";
    programOfstudy = "";
    yearAdmitted = 0;
    currentYear = 0;
}

Pupil::~Pupil(){

}
void Pupil::setFname(string fn){
    fname = fn;
}
void Pupil::setLname(string ln){
    lname = ln;
}
void Pupil::setProgramOfstudy(string pg){
    programOfstudy = pg;
}
void Pupil::setYearAdmitted(int ya){
    yearAdmitted = ya;
}
void Pupil::setCurrentYear(int cy){
    currentYear = cy;
}
void Pupil::getFname()const{
     fname;
}
void Pupil::getLname()const{
     lname;
}
void Pupil::getProgramOfstudy()const{
     programOfstudy;
}
int Pupil::getYearAdmitted()const{
    return yearAdmitted;
}
int Pupil::getCurrentYear()const{
    return currentYear;
}

int Pupil::calculateYearOfStudy(int yearAdmitted, int currentYear)const{
    return currentYear - yearAdmitted;
}