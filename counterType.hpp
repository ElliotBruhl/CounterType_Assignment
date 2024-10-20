//header file for counterType class
class CounterType {
  private:
    int counter;
  public:
    CounterType(); //pre: enough memory. post: object is created
    CounterType(int value); //pre: enough memory. post: object is created with initial value
    void setCounter(int value); //pre: value is in domain (0 - MAX). post: counter is value
    void resetCounter(); //pre: none. post: counter is 0
    void incrementCounter(); //pre: counter is not MAX. post: counter is one greater
    void decrementCounter(); //pre: counter is not 0. post: counter is one less
    int getCount(); //pre: none. post: none.
};
