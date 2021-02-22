#include <iostream>
using namespace std;

class HeartRates {
	private:
		string first_name;
		string last_name;
		int day;
		int month;
		int year;
	public:
		//constructors and destructors
		HeartRates();
		void FirstName(string first_name);
		void LastName(string last_name);
		void day(int day);
		void month(int month);
		void year(int year);
		
		//get functions
		string get_FirstName() const;
		string get_LastName() const;
		int get_day() const;
		int get_month() const;
		int get_year() const;

		//functions
		int getAge();
		int getMaximumHeartRate(int);
		int getTargetHeartRate(int);
		int displayData(int) const;
};


