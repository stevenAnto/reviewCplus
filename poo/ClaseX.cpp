#include <iostream>
struct Date {
  int y, m, d; // year, month, day
  Date(int y, int m, int d){ // check for valid date and initialize
    this->y=y;
    this->m=m;
    this->d=d;
  }
  void add_day(int n); // increase the Date by n days
};

int main(){
  Date today {12,24,2007}; // oops! run-time error
  Date last {2000,12,31}; // OK (colloquial style)
  Date next = {2014,2,14}; // also OK (slightly verbose)
  Date christmas = Date{1976,12,24};
  return 0;
}
