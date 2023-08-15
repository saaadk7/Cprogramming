// Electricity Bill Using Slab System
#include <stdio.h>
#include <conio.h>

int main()
{
  char cons_name[20];
  long cons_id;
  float bill;
  int units;
  long cur_bill, prev_bill;
  printf("Enter Consumer Name :");
  scanf("%s", cons_name);
  printf("Enter The consumer ID :");
  scanf("%d", &cons_id);
  printf("Enter previous month reading  :");
  scanf("%ld", &prev_bill);
current:
  printf("Enter current month reading : ");
  scanf("%ld", &cur_bill);
  if (cur_bill < prev_bill)
  {
    puts("\aCheck current month reading");
    goto current;
  }

  units = cur_bill - prev_bill;
  if (cons_id >= 0 && cons_id <= 9999)
  {

    if (units < 50)
      bill = units * 1.45;
    else if (units > 50 && units <= 100)
      bill = 50 * 1.45 + (units - 50) * 2.8;
    else if (units > 100 && units <= 200)
      bill = 50 * 1.45 + 50 * 2.80 + (units - 100) * 3.05;
    else if (units > 200 && units <= 300)
      bill = 50 * 1.45 + 50 * 2.80 + 100 * 3.05 + (units - 200) * 4.75;
    else if (units > 300 && units <= 500)
      bill = 50 * 1.45 + 50 * 2.80 + 100 * 3.05 + 100 * 4.75 + (units - 300) * 6.00;
    else
      bill = 50 * 1.45 + 50 * 2.80 + 100 * 3.05 + 100 * 4.75 + 200 * 6.00 + (units - 500) * 6.25;
    if (bill < 67)
      bill = 67;
    puts("---------------------------------------------------------------------------");
    printf("Name OF consumer : %s \n", cons_name);
    printf("Consumer Id : %d \n", cons_id);
    printf("Total Bill : %.2f \n", bill);
    puts("----------------------------------------------------------------------------");
  }
}
