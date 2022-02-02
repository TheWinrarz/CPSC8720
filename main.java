
class main {
    public static void main(String[] args) {
        Calendar cal = new Calendar();
        System.out.println(cal.getActiveDay());
        cal.addNoteToActiveDay("Hello world");
        cal.printNoteFromDay(cal.getActiveDay());

        cal.advanceCurrentDay(1);
        System.out.println(cal.getActiveDay());
        cal.addNoteToActiveDay("Hello world again");
        cal.printNoteFromDay(cal.getActiveDay());

        cal.advanceCurrentMonth(1);
        System.out.println(cal.getActiveDay());
        cal.addNoteToActiveDay("Hello world next month");
        cal.printNoteFromDay(cal.getActiveDay());

        cal.advanceCurrentYear(1);
        System.out.println(cal.getActiveDay());
        cal.addNoteToActiveDay("Hello world next year");
        cal.printNoteFromDay(cal.getActiveDay());

        cal.returnToToday();
        System.out.println(cal.getActiveDay());
        cal.printNoteFromDay(cal.getActiveDay());
        cal.removeNoteFromDay(cal.getActiveDay());
        cal.printNoteFromDay(cal.getActiveDay());
    }
}