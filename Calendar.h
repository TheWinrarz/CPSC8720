#pragma once
#include <ctime>
#include <string>
#include <unordered_map>
#include <tuple>
#include <sstream>
#include <iostream>




struct Date {
	int day, month, year;
};

class Calendar {
	Date today;
	Date currentActiveDay;
	std::unordered_map<std::string, std::string> notes;
public:
	//Constructor
	//Input: None
	//Output: Instance of calendar class with today and currentActiveDate fields set to the system date upon launching of application
	Calendar();

	//Input: None
	//Output: None
	//Effects: currentActiveDay = today;
	void returnToToday();
	
	//Input: numDays: an Integer representing number of days to advance 
	//Output:
	//Effects: current active day advanced by numDays. If advanced day is in next month, advanceCurrentMonth(1) is called
	void advanceCurrentDay(int numDays);

	//Input: numMonths: integer representing number of months to advance
	//Output: None
	//Effects: current active day's month advanced by numMonths. If advanced month is in next year, advanceCurrentYear(1) is called
	void advanceCurrentMonth(int numMonths);

	//Input: numYears: integer representing number of years to advance 
	//Output: None
	//Effects: current active day's year advanced by numYears
	void advanceCurrentYear(int numYears);

	//Input: None
	//Output: Date struct representing active day
	//Effects: None
	Date getActiveDay();

	//Input: None
	//Output: None
	//Effects: Note is created and associated with current active day
	void addNoteToActiveDay(std::string note);

	//Input: day: integer representing day
	//		 month: integer representing month
	//		 year: integer representing year
	//Output: None
	//Effects: Print any associated note to stdout
	void printNoteFromDay(int day, int month, int year);

private:
	std::string getNoteFromDay(int day, int month, int year);
	void addNoteToDay(std::string note, int day, int month, int year);
};

