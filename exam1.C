#include <stdio.h>
#include <conio.h>

int main()
{
    int age, class_;

    int sub1, sub2, sub3;
    float avg;
    avg = sub1 + sub2 + sub3 / 100;
    printf("Enter The Age: \t");
    scanf("%d", &age);
    if (age > 5 && age < 18)
    {
        printf("Enter Your Class : \t");
        scanf("%d", &class_);
        printf("Marks You Got in 3 Subjects:: \n");
        scanf("%d %d %d", &sub1, &sub2, &sub3);
        avg = (sub1 + sub2 + sub3) / 3;
        if (avg >= 50)
        {
            printf("Student age : %d \n", age);
            printf("Average : %.2f \n", avg);
            printf("class: %d \n", class_);
            printf("Congrates youre permoted to %d class ", ++class_);
        }
        else
            printf("Sorry youre staying in same class %d", class_);
    }
    else
    {
        printf("Student Is Not Allowed In School");
    }
}
