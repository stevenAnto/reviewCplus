#include <iostream>
#include "Time.h"
using namespace std;

int main(){
  Time sunset;
  Time arrayOfTimes;
  Time &dinnerTime=sunset;
  Time *timePtr = &dinnerTime;
  cout<<"the initial is"<<endl;sunset.printStandard();
  sunset.setTime(13,27,6);
  cout<<"\nUniversal is "<<endl;sunset.printUniversal();
}
