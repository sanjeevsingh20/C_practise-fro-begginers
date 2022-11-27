// 21.  Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd. Print even if the number is 0.
/*#include <stdio.h>

int main()
{
   int num;
   printf("Enter an integer: ");
   scanf("%d", &num);

   if (num > 0 && num % 2 == 0)
   {
      printf("%d is positive even", num);
   }
   else if (num > 0 && num % 2 != 0)
   {
      printf("%d is positive odd", num);
   }
   else if (num < 0 && num % 2 == 0)
   {
      printf("%d is negative even", num);
   }
   else if (num < 0 && num % 2 != 0)
   {
      printf("%d is negative odd", num);
   }
   else if (num == 0)
   {
      printf("Even number");
   }

   return 0;
}
*/

// 22. Write a C program to print all numbers between 1 to 100 which divided by a specified number and the remainder will be 3

/*#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i < 101; i++)
    {
        if (i % n == 3)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}*/

// 23.Write a C program that accepts some integers from the user and find the highest value and the input position

/*#include <stdio.h>

int main()
{
    int numbers[5], max = 0, pos = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
            pos = i + 1;
        }
    }
    printf("The highest number is %d\n", max);
    printf("Position of highest number is %d\n", pos);

    return 0;
}*/

// 24. Write a C program to read a password until it is correct. For wrong password print "Incorrect password" and for correct password print "Correct password" and quit the program.

/*#include <stdio.h>
#include <string.h>

int main()
{
    char password[20] = "Sanjeev@123";
    int x = 1;
    char input[20];

    while (x != 0)
    {
        printf("Enter your password please: ");
        gets(input);
        int compare=strcmp(password,input);
        if (compare==0)
        {
            printf("Correct password");
            x = 0;
        }
        else
        {
            printf("Wrong password ! please try again");
        }
        printf("\n");
    }

    return 0;
}*/

// 25. Write a C program to read the coordinates(x, y) (in Cartesian system) and find the quadrant to which it belongs (Quadrant -I, Quadrant -II, Quadrant -III, Quadrant -IV)

/*#include <stdio.h>

int main()
{
    float x, y;
    printf("Enter the coordinates of x: ");
    scanf("%f", &x);
    printf("Enter the coordinates of y: ");
    scanf("%f", &y);

    if (x > 0 && y > 0)
    {
        printf("%.2f and %.2f lies in 1st Quadrant", x, y);
    }
    else if (x < 0 && y > 0)
    {
        printf("%.2f and %.2f lies in 2nd Quadrant", x, y);
    }
    else if (x < 0 && y < 0)
    {
        printf("%.2f and %.2f lies in 3rd Quadrant", x, y);
    }
    else if (x > 0 && y < 0)
    {
        printf("%.2f and %.2f lies in 4th Quadrant", x, y);
    }

    return 0;
}*/

// 26. Write a C program to calculate the sum of all number not divisible by 17 between two given integer numbers

/*#include <stdio.h>

int main()
{
    int num1, num2, sum = 0;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("The number are:-\n");
    printf("(");
    for (int i = num1; i < num2 + 1; i++)
    {
        if (i % 17 != 0)
        {
            printf("%d ", i);
            sum += i;
        }
    }
    printf(")\n");
    printf("Sum of these numbers are: %d", sum);

    return 0;
}*/

// 27. Write a C program to print 3 numbers in a line, starting from 1 and print n lines. Accept number of lines (n, integer) from the user.

/*#include <stdio.h>

void main()
{
    int rows, num = 1;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i < rows + 1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}*/

// 28. Write a C program to print a number, it’s square and cube in a line, starting from 1 and print n lines. Accept number of lines (n, integer) from the user.

/*#include <stdio.h>
#include <math.h>

int main()
{

    int n, num = 1;
    printf("Enter the nth term of the series: ");
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            printf("%d %.0f %.0f", num, pow(num, 2), pow(num, 3));
            num++;
        }

        printf("\n");
    }

    return 0;
}*/

// 29. Write a C program to calculate the average marks of mathematics of some students. Input 0 (excluding to calculate the average) or negative value to terminate the input process.

/*#include <stdio.h>
float average(float marks[20])
{
}

int main()
{
    float marks[20];
    float sum = 0, average;
    int i;
    printf("Enter -1 to terminate the process\n");
    for (i = 0;; i++)
    {

        printf("Enter marks of student %d: ", i+1);
        scanf("%f", &marks[i]);
        sum += marks[i];
        if (marks[i] <= 0)
        {
            break;
        }
    }

    average = sum / (i);
    printf("Average of numbers will be %.3f", average);

    return 0;
}*/

// 30. Write a C program to calculate the value of S where S = 1 + 1/2 + 1/3 + … + 1/50

/*#include <stdio.h>

int main()
{
    float sum = 0;
    for (int i = 1; i < 51; i++)
    {
        sum += (float)1 / i;
    }
    printf("%.3f", sum);
    return 0;
}*/

// 31.  Write a C program to calculate the value of S where S = 1 + 3/2 + 5/4 + 7/8.

/*#include <stdio.h>

int main() {
    float sum=0,j=1;
    for (int i = 1; i < 8; i+=2)
    {
        sum+=i/j;
        j=j*2;
    }
    printf("%.3f",sum);
    return 0;
}*/

// 32. Write a C program that reads an integer and find all its divisor.

/*#include <stdio.h>

int main()
{
    int integer;
    printf("Enter an positive integer: ");
    scanf("%d", &integer);
    printf("The divisors of %d are:\n", integer);
    for (int i = 1; i < integer + 1; i++)
    {
        if (integer % i == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}*/

// 33. Write a C program to read and print the elements of an array of length 7, before print replace every negative number, zero with 100.

/*#include <stdio.h>

int main()
{
    int array[7] = {21, 34, -43, 65, 0, -21, 54};

    printf("The declared array is\n{");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", array[i]);
    }
    printf("}\n\n");
    for (int i = 0; i < 7; i++)
    {
        if (array[i] <= 0)
        {
            array[i] = 100;
        }
    }
    printf("The updated array will be:\n{");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", array[i]);
    }
    printf("}");
    return 0;
}*/

// 34. Write a C program to read and print the elements of an array of length 7, before print, put the triple of the previous position starting from the second position of the array.

/*#include <stdio.h>

int main()
{
    int array[7], number;
    printf("Enter a number: ");
    scanf("%d", &number);
    array[0] = number;
    for (int i = 1; i < 7; i++)
    {
        array[i] = array[i - 1] * 3;
    }
    printf("The array will be:\n{");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", array[i]);
    }
    printf("}");

    return 0;
}*/

// 35.  Write a C program to read an array of length 5 and print the position and value of the array elements of value less than 5.

/*#include <stdio.h>

int main()
{
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (array[i] < 5)
        {
            printf("array[%d]= %d\n", i, array[i]);
        }
    }

    return 0;
}*/

//36. Write a C program to read an array of length 6, change the first element by the last, the second element by the fifth and the third element by the fourth. Print the elements of the modified array.

#include <stdio.h>

int main() {
    int array[5],j=4;
    for (int i = 0; i < 5; i++)
    {
        printf("enter the value of element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    
    printf("The modified array will be:-\n");
    printf("{");
    for (int i = 0; i <5; i++)
    {
        
        array[j]=array[i];
        j--;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",array[i]);
    }
    printf("}");
    
    return 0;
}