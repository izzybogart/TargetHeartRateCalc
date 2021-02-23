#include <iostream>
#include "THRCalc.hpp"
using namespace std;

//CONSTRUCTORS
//default
HeartRates::HeartRates() {
        firstName = "unknown";
        lastName = "unknown";
        dayOFbirth = 0;
        monthOFbirth = 0;
        yearOFbirth = 0;
}
//initializers
HeartRates::HeartRates(string first_name, string last_name, int day, int month, int year) {
        FirstName(first_name);
        LastName(last_name);
        DOB(day);
        MOB(month);
        YOB(year);
}

void HeartRates::FirstName(string first_name){
        firstName = first_name;
}
void HeartRates::LastName(string last_name){
        lastName = last_name;
}
void HeartRates::DOB(int day){
        dayOFbirth = day;
}
void HeartRates::MOB(int month){
        monthOFbirth = month;
}
void HeartRates::YOB(int year){
        yearOFbirth = year;
}

//GET FUNCTIONS
string HeartRates::get_FirstName() const {
        return firstName;
}
string HeartRates::get_LastName() const {
        return lastName;
}
int HeartRates::get_day() const {
        return dayOFbirth;
}
int HeartRates::get_month() const {
        return monthOFbirth;
}
int HeartRates::get_year() const {
        return yearOFbirth;
}

int HeartRates::getAge() {
        int age, Year;

        cout<<"Enter the current year (YYYY): ";
        cin>>Year;

        age = Year - get_year();
        return age;
}

int HeartRates::getMaximumHeartRate(int age) {
        int maxHR = 220 - age;
        return maxHR;
}

void HeartRates::getTargetHeartRate(int maxHR) {
        cout<<"Maximum Heart Rate: "<<maxHR<<endl;
        cout<<"Target Heart Rate: "<<maxHR*0.5<<"-"<<maxHR *0.85<<" bpm."<<endl;
}

void HeartRates::displayData(int age) const {
        cout<<"First Name: "<<get_FirstName()<<"\nLastName: "<<get_LastName()<<endl;
        cout<<"Date of Birth: "<<get_day()<<"/"<<get_month()<<"/"<<get_year()<<endl;
        cout<<"Age: "<<age<<" years"<<endl;
}

