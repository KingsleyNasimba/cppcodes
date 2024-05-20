#include "Pupil.H"

void Pupil::initialize(){
    fName = "";
    lName = "";
    programOfstudy = "";
    yearOfStudy = 0;
}
void Pupil::CalculateYear(int yearAdmitted, int currentYear){
    yearOfStudy = currentYear - yearAdmitted;
}