// CalendarProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma once
#include "Calendar.h"

int main()
{
    Calendar* cal = new Calendar();
    std::cout << cal->getActiveDay().year << "-" << cal->getActiveDay().month << "-" << cal->getActiveDay().day << std::endl;
    cal->addNoteToActiveDay("Hello world");
    cal->printNoteFromDay(cal->getActiveDay().day, cal->getActiveDay().month, cal->getActiveDay().year);

    cal->advanceCurrentDay(1);
    std::cout << cal->getActiveDay().year << "-" << cal->getActiveDay().month << "-" << cal->getActiveDay().day << std::endl;
    cal->addNoteToActiveDay("Hello world again");
    cal->printNoteFromDay(cal->getActiveDay().day, cal->getActiveDay().month, cal->getActiveDay().year);


    cal->advanceCurrentMonth(1);
    std::cout << cal->getActiveDay().year << "-" << cal->getActiveDay().month << "-" << cal->getActiveDay().day << std::endl;
    cal->addNoteToActiveDay("Hello world next month");
    cal->printNoteFromDay(cal->getActiveDay().day, cal->getActiveDay().month, cal->getActiveDay().year);


    cal->advanceCurrentYear(1);
    std::cout << cal->getActiveDay().year << "-" << cal->getActiveDay().month << "-" << cal->getActiveDay().day << std::endl;
    cal->addNoteToActiveDay("Hello world next year");
    cal->printNoteFromDay(cal->getActiveDay().day, cal->getActiveDay().month, cal->getActiveDay().year);

    cal->returnToToday();
    std::cout << cal->getActiveDay().year << "-" << cal->getActiveDay().month << "-" << cal->getActiveDay().day << std::endl;
    cal->printNoteFromDay(cal->getActiveDay().day, cal->getActiveDay().month, cal->getActiveDay().year);



}
