#pragma once
#include "Calendar.h"
using namespace std;

Calendar::Calendar()
{
	struct tm newTime;
	time_t now = time(0);
	localtime_s(&newTime, &now);
	today.day = newTime.tm_mday;
	today.month = newTime.tm_mon + 1;
	today.year = newTime.tm_year + 1900;
	currentActiveDay = today;
}

void Calendar::returnToToday()
{
	currentActiveDay = today;
}


void Calendar::advanceCurrentDay(int numDays)
{
	currentActiveDay.day += numDays;
	//Current month is February
	while (currentActiveDay.day > 31)
	{
		if (currentActiveDay.month == 2 && currentActiveDay.day > 28)
		{
			currentActiveDay.day -= 28;
			advanceCurrentMonth(1);
		}
		//Current month has 31 days
		else if (currentActiveDay.month == 1 || currentActiveDay.month == 3 || currentActiveDay.month == 5 || currentActiveDay.month == 7 || currentActiveDay.month == 8 || currentActiveDay.month == 10 || currentActiveDay.month == 12)
		{
			if (currentActiveDay.day > 31)
			{
				currentActiveDay.day -= 31;
				advanceCurrentMonth(1);
			}
		}

		//Current month has 31 days
		else if (currentActiveDay.month == 4 || currentActiveDay.month == 6 || currentActiveDay.month == 9 || currentActiveDay.month == 11)
		{
			if (currentActiveDay.day > 30)
			{
				currentActiveDay.day -= 30;
				advanceCurrentMonth(1);
			}
		}
	}
}

void Calendar::advanceCurrentMonth(int numMonths)
{
	currentActiveDay.month += numMonths;
	while (numMonths > 12)
	{
		numMonths -= 12;
		advanceCurrentYear(1);
	}
}

void Calendar::advanceCurrentYear(int numYears)
{
	currentActiveDay.year += numYears;
}

Date Calendar::getActiveDay()
{
	return currentActiveDay;
}

void Calendar::addNoteToDay(std::string note, int day, int month, int year)
{
	std::string dateString = std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);
	std::pair<std::string, std::string> noteDayPair(dateString, note);
	notes.insert(noteDayPair);
}

void Calendar::addNoteToActiveDay(std::string note)
{
	Calendar::addNoteToDay(note, currentActiveDay.day, currentActiveDay.month, currentActiveDay.year);
}

std::string Calendar::getNoteFromDay(int day, int month, int year)
{
	std::string dateString = std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);
	std::string note = notes.at(dateString);
	return note;
}

void Calendar::printNoteFromDay(int day, int month, int year)
{
	
	std::cout << Calendar::getNoteFromDay(day, month, year) << std::endl;

}