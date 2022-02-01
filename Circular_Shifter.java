public interface Circular_Shifter {
    //Input: None
    //Output: None
    //Effects: Compute circular shift of all lines in line holder storage
    void circular_shift_setup();

    //Input: None
    //Output: Array of indexes of all circularly shifted lines
    //Effects: None
    int[] circular_shift_lines();

}
