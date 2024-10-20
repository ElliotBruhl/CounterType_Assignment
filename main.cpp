#include <iostream>
#include "counterType.hpp"
using namespace std;

int main() {
  
  CounterType counter = CounterType();
  cout << "Initial counter value (no arg constructor): " << counter.getCount() << endl;
  
  CounterType counter2 = CounterType(5);
  cout << "Initial counter value (1 arg constructor): " << counter2.getCount() << endl;
  
  counter2.incrementCounter();
  cout << "After incrementing counter value: " << counter2.getCount() << endl;
  
  counter2.decrementCounter();
  cout << "After decrementing counter value: " << counter2.getCount() << endl;

  counter2.resetCounter();
  cout << "After resetting counter value: " << counter2.getCount() << endl;

  counter2.decrementCounter();
  cout << "After decrementing counter value: " << counter2.getCount() << endl;
  
  counter2.setCounter(10);
  cout << "After setting counter value to 10: " << counter2.getCount() << endl;

  return 0;
}