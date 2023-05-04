#include <iostream>
class Date{
  public:
    Date(int y,int m, int d);
    void add_day(int n);
    int month();
  private:
      int y,m,d;
};
Date::Date(int yy,int mm,int dd)
  :y{yy},m{mm},d{dd}{}
void Date::add_day(int n){
  d++;
}
int Date:: month(){
  return m;
}
int main(){
  Date today {12,24,2007}; // oops! run-time error
  Date last {2000,12,31}; // OK (colloquial style)
  Date next = {2014,2,14}; // also OK (slightly verbose)
  Date christmas = Date{1976,12,24};
  return 0;
}
