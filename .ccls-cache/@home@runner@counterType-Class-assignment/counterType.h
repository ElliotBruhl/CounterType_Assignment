class CounterType {
  private:
    int counter;
  public:
    CounterType();
    CounterType(int value);
    void resetCounter();
    void incrementCounter();
    void decrementCounter();
    int getCounter();
};