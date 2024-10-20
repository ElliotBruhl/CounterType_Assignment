//implementation of functions in counterType.hpp
#include "counterType.hpp"
#include <limits.h>

CounterType::CounterType() {
  counter = 0;
}
CounterType::CounterType(int value) {
  counter = value;
}
void CounterType::resetCounter() {
  counter = 0;
}
void CounterType::setCounter(int value) {
  if (value >= 0 && value <= INT_MAX)
    counter = value;
}
void CounterType::incrementCounter() {
  if (counter != INT_MAX)
    counter++;
}
void CounterType::decrementCounter() {
  if (counter != 0)
    counter--;
}
int CounterType::getCount() {
  return counter;
}