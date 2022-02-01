public interface Alphabetizer {
    //Input: Arrays produced by input and circular shift module
    //Output: None
    //Effects: Place all circular shifts in line storage into alphabetical order
    void alphabetize(int[] inputLineIndexes);


    //Input: Integer 'i' describing position in order of desired circular shit
    //Output: Index of circular shift which comes 'ith' in aplhabetical ordering
    //Effects: None
    int ith(int i);
}
