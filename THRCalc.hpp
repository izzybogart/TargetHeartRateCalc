#include <iostream>
using namespace std;

class HeartRates {
        private:
                string firstName;
                string lastName;
                int dayOFbirth;
                int monthOFbirth;
                int yearOFbirth;
        public:
                //constructors and destructors
                HeartRates();
                HeartRates(string first_name, string last_name, int day, int month, int year);
                void FirstName(string first_name);
                void LastName(string last_name);
                void DOB(int day);
                void MOB(int month);
                void YOB(int year);

                //get functions
                string get_FirstName() const;
                string get_LastName() const;
                int get_day() const;
                int get_month() const;
                int get_year() const;

                //functions
                int getAge();
                int getMaximumHeartRate(int);
                void getTargetHeartRate(int);
                void displayData(int) const;
};

