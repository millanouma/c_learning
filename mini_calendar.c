include <stdio.h>
#include <stdbool.h>
bool is_leap_year(int year){
  return (year % 4 == 0 && (year % 100 || year % 400 == 0));
}

int days_in_month [13]= {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void add_days_to_date(int* mm, int* dd, int* yy, int days_left_to_add){

  int days_left_in_month = days_in_month[*mm] - *dd;
  while(days_left_to_add > 0){
    if (days_in_month[2] && is_leap_year(*yy) == true){// // if more days left than can be added in a month
      days_left_in_month++;
      }
    }
  
  if(days_left_to_add > days_left_in_month){
      days_left_to_add -= days_left_in_month + 1;
      *dd = 1;  //we are on the first day of the next month, but what is the next month?

       if (*mm == 12) { // if last month was December
    *mm = 1; // next month is January
    *yy = *yy + 1; // and we are in a new year so increase by 

    }else
      { *mm = *mm + 1; // if some other month, just increase by 1
        *dd = *dd + days_left_to_add; // simply add the days
  days_left_to_add = 0; // no more days to add!
}
  } 
}
  




int main() {
  int mm, dd, yy, days_left_to_add;
  printf("Please enter a date between the years 1800 and 10000 in the format mm dd yy and provide the number of days to add to this date:\n");

scanf("%i%i%i%i", &mm, &dd, &yy, &days_left_to_add);
add_days_to_date(&mm, &dd, &yy, days_left_to_add);
printf("%i %i %i\n", mm, dd, yy);
/*int year;
printf("Input a year between 1800 and 10000:\n");
scanf("%i", &year);
is_leap_year(year);
if(is_leap_year(year) == true){
  printf("Leap year\n");
}else{
  printf("Not Leap Year\n");*/
  }
