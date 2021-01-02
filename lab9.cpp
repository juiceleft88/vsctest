#include <iostream>
#include <fstream>
using namespace std;

void tomorrow(int& day, int& month, int& date, int& year)
{
  if (month==2){ //if the month is February
    if (date<29){ //and not a leap year
      date=date+1; //then it becomes next date
      day=(day%6)+1; //and next day
    }
    else{
      if(date==29){ //if
       the date is the 29th of Feb
        if(year%4==0){ // it is leap year (divisible by 4)
          date=1; //so next day becomes 1st date of the next month
          month=3;
          day=(day%6)+1;
        }
    else{
      cout<<"Invalid Year\n"; //because not leap year or wrong date
    }
      }
    else{
      cout<<"Invalid Date\n";
    }
    }
  }
  else if ((month==4)|(month==6)|(month==9)|(month==11)){
    if (date==31){
      cout<<"Invalid Date\n"; //because these months do not have 31st day
    }
  else if(date==30){
    date=1;
    month=month+1;
    day=(day%6)+1; //new month , date, day on months with 30 days
  }
  else{
    date=date+1;
    day=(day%6)+1; //date and day change only
  }
  }
  else if(month==12){ // if month of December
    if(date==31){
      date=1; //date goes back to 1
      month=(month%12)+1; //month goes back to 1
      day=(day%6)+1;
      year=year+1; // if 31st, pretty much everything changes: date, day, month, year
    }
    else{
      date=date+1;
      day=(day%6)+1; //otherwise only day and date change with other Dec date
    }
  }
    else{
      date=date+1;
      day=(day%6)+1;
    }
}

int main()

{
    int day=0, month=12, date=31, year=2015; //testing with random dates
    cout<<day<<'\t'<<month<<'\t'<<date<<'\t'<<year<<'\n';
    tomorrow(day, month, date, year);
    cout<<day<<'\t'<<month<<'\t'<<date<<'\t'<<year<<'\n';
    return 0;
}
