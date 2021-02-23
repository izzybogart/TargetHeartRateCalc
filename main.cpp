#include<iostream>
#include "THRCalc.hpp"
using namespace std;

int main() {
        string fname, lname;
        int day, month, year;
        HeartRates data;

        cout<< "Enter in your first name: ";
        cin>>fname;
        data.FirstName(fname);
        cout<<"Enter in your last name: ";
        cin>>lname;
        data.LastName(lname);
        cout<<"Enter in the year you were born: ";
        cin>>year;
        data.YOB(year);
        cout<<"Enter in the month you were born: ";
        cin>>month;
        data.MOB(month);
        cout<<"Enter in the day you were born: ";
        cin>>day;
        data.DOB(day);

        int age = data.getAge();
        int maxHR = data.getMaximumHeartRate(age);
        data.displayData(age);
        data.getTargetHeartRate(maxHR);
}
