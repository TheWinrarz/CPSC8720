import java.time.*;
import java.util.Hashtable;

public class Calendar {

    private LocalDate today;
    private LocalDate currentActiveDay;
    private Hashtable<LocalDate, String> notes = new Hashtable<LocalDate, String>();

    //Calendar Constructor
    //Input: None
    //Output: New calendar instance with today and currentActiveDay set to current date
    public Calendar()
    {
        today = LocalDate.now();
        currentActiveDay = today;
    }

    //Input: None
    //Output: None
    //Sets 'currentActiveDay' field equal to 'today' field
    public void returnToToday()
    {
        currentActiveDay = today;
    }

    //Input: Integer representing number of days to advance
    //Output: None
    public void advanceCurrentDay(int numDays)
    {
        currentActiveDay = currentActiveDay.plusDays(numDays);
    }


    //Input: Integer representing number of months to advance
    //Output: None
    public void advanceCurrentMonth(int numMonths)
    {
        currentActiveDay = currentActiveDay.plusMonths(numMonths);
    }


    //Input:
    //       NumYears: Integer representing number of years to advance
    //Output: None
    public void advanceCurrentYear(int numYears)
    {
        currentActiveDay = currentActiveDay.plusYears(numYears);
    }

    //Input: None
    //Output: Returns current active day
    public LocalDate getActiveDay()
    {
        return this.currentActiveDay;
    }

    //Input:
    //       Note: string representing a user-written note
    //       Day: LocalDate data type representing the 'day' the note is associated with
    //Output: None
    public void addNoteToDay(String note, LocalDate day)
    {
        notes.put(day, note);
    }

    //Input:
    //       Note: string representing a user-written note
    //Output: None
    public void addNoteToActiveDay(String note)
    {
        addNoteToDay(note, this.getActiveDay());
    }

    //Input:
    //      Day: LocalDate representing day associated with note
    //Output:
    //      String if given date has associated note, otherwise returns null
    public String getNoteFromDay(LocalDate day)
    {
        return notes.get(day);
    }

    //Input:
    //      Day: LocalDate representing day associated with note
    //Output: none
    //Effects: print note associated with day to System.out
    public void printNoteFromDay(LocalDate day)
    {
        System.out.println(getNoteFromDay(day));
    }

    //Input:
    //      Day: LocalDate representing day associated with note
    //Output: none
    //Effects: removes associated note from day
    public void removeNoteFromDay(LocalDate day)
    {
        notes.remove(day);
    }
}

