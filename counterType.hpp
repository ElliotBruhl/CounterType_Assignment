//header file for counterType class
class CounterType {
  private:
    int counter;
  public:
    CounterType(); //default constructor
    CounterType(int value); //constructor with 1 arg
    void setCounter(int value); //set counter to value
    void resetCounter(); //reset counter to 0
    void incrementCounter(); //increment counter by 1
    void decrementCounter(); //decrement counter by 1
    int getCount(); //return counter
};