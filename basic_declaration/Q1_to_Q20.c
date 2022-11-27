// 1. Write a C program to print your name, date of birth. and mobile number.

/*#include <stdio.h>

int main() {
    printf("Name: Sanjeev singh\n");
    printf("DOB: 7th may 2003\n");
    printf("Address: west kamal vihar delhi\n");
    return 0;
}*/

/*2. Write a C program to print a block F using hash (#), where the F has a height of six characters and width of five and four characters. And also to print a big 'C'. Go to the editor
Expected Output:

note:- please ignore this question if you dont undrstand

######
#
#
#####
#
#
#
*/

/*#include <stdio.h>

int main()
{
    // for printing letter F
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || i == 3)
            {
                printf("#");
            }
            else
            {
                printf("#");
                break;
            }
        }
        printf("\n");
    }
    return 0;
}*/

/*3.Write a C program to print the following characters in a reverse way.
Test Characters: 'X', 'M', 'L'

/*#include <stdio.h>

int main() {
    char char1='X',char2='M',char3='L';
    printf("The resrve of %c%c%c is %c%c%c",char1,char2,char3,char3,char2,char1);
    return 0;
}
*/

/*4. Write a C program to compute the perimeter and area of a rectangle with a length of 7 inches. and width of 5 inches.

/*#include <stdio.h>

int main() {
    int height=7,width=5;
    printf("Perimeter of a rectangle is %d inches\n",2*(height+width));
    printf("Area of a rectangle is %d inches square\n",height*width);

    return 0;
}
*/

/*5.Write a C program to compute the perimeter and area of a circle with a given radius.

/*#include <stdio.h>

int main() {
    const float pie=3.14;
    int radius=6;
    // for perimeter of circle
    printf("Perimeter of circle is %.3f\n",2*pie*radius);
    //for area of a circle
    printf("Area of circle is %.3f\n",pie*radius*radius);
    return 0;
}
*/
/*6.Write a C program to convert specified days into years, weeks and days.
Note: Ignore leap year.

Test Data :
Number of days : 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3

/*#include <stdio.h>

int main() {
    int days=15260;
    int years=days/365;
    int weeks=(days%365)/7;
    int day=(days%365)%7;
    printf("Years = %d\n",years);
    printf("weeks = %d\n",weeks);
    printf("days = %d\n",day);
    return 0;
}
*/

/*7.Write a C program that accepts two integers from the user and calculate the sum and product of the two integers.

/*#include <stdio.h>

int main() {
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Sum of %d and %d is %d\n",a,b,a+b);
    printf("product of %d and %d is %d\n",a,b,a*b);

    return 0;
}
*/

/*8.Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.

/*#include <stdio.h>

int main() {
    float weight1,weight2,purchase1,purchase2;
    printf("Enter the weight of item 1: ");
    scanf("%f",&weight1);
    printf("Enter the purchase of item 1: ");
    scanf("%f",&purchase1);
    printf("Enter the weight of item 2: ");
    scanf("%f",&weight2);
    printf("Enter the purchase of item 2: ");
    scanf("%f",&purchase2);
    float average=(weight1*purchase1 + weight2*purchase2)/(purchase1+purchase2);
    // calculating average value of item
    printf("The average value of items is %f",average);
    return 0;
}
*/

/*9.Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month

/*#include <stdio.h>

int main() {
    int id;
    float hours,amount;
    printf("Enter the employee id: ");
    scanf("%d",&id);
    printf("Enter the hours worked in a month: ");
    scanf("%f",&hours);
    printf("Enter the salary per hour: ");
    scanf("%f",&amount);

    float total_salary=hours*amount;
    printf("Employee id: %d\n",id);
    printf("Total salary will be: %.2f",total_salary);
    return 0;
}
*/

/*10. Write a C program to calculate the distance between the two points.

/*#include <stdio.h>
#include <math.h>

int main() {
    int x1=25,x2=35,y1=15,y2=10;
    float distance = pow((x2-x1),2) + pow((y2-y1),2);
    printf("Distance between points is: %.2f",sqrt(distance));
    return 0;
}
*/

/*11.Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes.
/*#include <stdio.h>

int main() {
    int amount;
    printf("Enter the amount: ");
    scanf("%d",&amount);
    printf("100 rs. note: %d\n",amount/100);
    printf("50 rs. note: %d\n",(amount%100)/50);
    printf("20 rs. note: %d\n",((amount%100)%50)/20);
    printf("10 rs. note: %d\n",(((amount%100)%50)%20)/10);
    printf("5 rs. note: %d\n",((((amount%100)%50)%20)%10)/5);
    return 0;
}
*/

/*12.Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

/*#include <stdio.h>

int main() {
    int seconds,minutes,hours,second;
    printf("Enter the time in seconds: ");
    scanf("%d",&seconds);
    // minutes=seconds/60;
    hours=seconds/3600;
    minutes=(seconds%3600)/60;
    second=(seconds%3600)%60;
    printf("Hours:minutes:seconds- %d:%d:%d",hours,minutes,second);
    return 0;
}
*/

/*13.Write a C program to convert a given integer (in days) to years, months and days, assumes that all months have 30 days and all years have 365 days.

/*#include <stdio.h>

int main() {
    int days,years,months,day;
    printf("Enter the number of days: ");
    scanf("%d",&days);

    years=days/365;
    months=(days%365)/30;
    day=(days%365)%30;
    printf("%d years\n%d months\n%d days\n",years,months,day);
    return 0;
} */

/*14.Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots.
/*#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,root1,root2,desc;
    printf("Enter the coefficeint of a: ");
    scanf("%f",&a);
    printf("Enter the coefficeint of b: ");
    scanf("%f",&b);
    printf("Enter the coefficeint of c: ");
    scanf("%f",&c);
    desc=(b*b)-(4*a*c);
    if (desc<0)
    {
        printf("It is not posiible to find roots");
    }
    else if (desc==0)
    {
        root1= (-b)/(2*a);
        root2= (-b)/(2*a);
        printf("%.3f %.3f",root1,root2);
    }
    else if ( desc>0)
    {
       // finding roots of equation
        root1= (-b + sqrt(desc))/(2*a);
        root2= (-b - sqrt(desc))/(2*a);
        printf("The roots will be: %.3f and %.3f",root1,root2);
    }

    return 0;
}
*/

// 15.  Write a C program that read 5 numbers and sum of all odd values between them.

/*#include <stdio.h>

int main()
{
    int numbers[5], sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    // for printing the numbers

    printf("\n");
    printf("Your numbers are: \n");
    printf("{ ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("}\n");

    // now adding the odd values of n array

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] % 2 != 0)
        {
            sum += numbers[i];
        }
    }
    printf("The sum of odd numbers in an array is %d", sum);

    return 0;
}
*/

// 16.Write a C program that reads three floating values and check if it is possible to make a triangle with them. Also calculate the perimeter of the triangle if the said values are valid.
/*#include <stdio.h>

int main() {
    float side1,side2,side3,perimeter;
    printf("Enter the length of side 1: ");
    scanf("%f",&side1);
    printf("Enter the length of side 2: ");
    scanf("%f",&side2);
    printf("Enter the length of side 3: ");
    scanf("%f",&side3);

    // checking for condition for making a triangle

    if (side1+side2>side3 && side1+side3>side2 && side2+side3>side1)
    {
        printf("Sides are valid and making of triangle is possible \n\n");
        printf("The perimeter of triangle is %.2f",side1+side2+side3);
    }
    else{
        printf("The sides are not valid for making a triangle");
    }

    return 0;
}
*/

// 17. Write a C program that reads an integer between 1 and 12 and print the month of the year in English

/*#include <stdio.h>

int main() {
    int month;
    printf("Enter between 1-12 to get name of month: ");
    scanf("%d",&month);
    switch (month)
    {
    case 1:
        printf("JANUARY");
        break;
    case 2:
        printf("FEBRUARY");
        break;
    case 3:
        printf("MARCH");
        break;
    case 4:
        printf("APRIL");
        break;
    case 5:
        printf("MAY");
        break;
    case 6:
        printf("JUNE");
        break;
    case 7:
        printf("JULY");
        break;
    case 8:
        printf("AUGUST");
        break;
    case 9:
        printf("SEPTEMBER");
        break;
    case 10:
        printf("OCTOBER");
        break;
    case 11:
        printf("NOVEMBER");
        break;
    case 12:
        printf("DECEMBER");
        break;
    default:
        printf("WRONG INPUT");
        break;
    }
    return 0;
}
*/

// 18. Write a C program that prints all even numbers between 1 and 50 (inclusive).

/*#include <stdio.h>

int main() {
    for (int i = 1; i < 51; i++)
    {
        if (i%2==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
*/

// 19. Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers.

/*#include <stdio.h>

int main()
{
    int numbers[5], positive = 0, negative = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    // checking the number is either positive or negative

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] >= 0)
        {
            positive++;
        }
        if (numbers[i] < 0)
        {
            negative++;
        }
    }

    printf("Positive numbers in array: %d\n", positive);
    printf("negative numbers in array: %d\n", negative);

    return 0;
}
*/

// 20. Write a C program to find and print the square of each one of the even values from 1 to a specified value

/*#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter the nth term of series: ");
    scanf("%d", &n);
    for (int i = 0; i < n+1; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d^2 = %.0f\n", i, pow(i, 2));
        }
    }
    return 0;
}*/

