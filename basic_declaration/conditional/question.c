// #include <stdio.h>
// void main()
// {
//     int a, b;

//     printf("Input the values for Number1 and Number2 : ");
//     scanf("%d %d", &a, &b);
//     if (a == b)
//         printf("Number1 and Number2 are equal\n");
//     else
//         printf("Number1 and Number2 are not equal\n");
// }

// #include <stdio.h>
// void main()
// {
//     int num;

//     printf("entre an number : ");
//     scanf("%d", &num);

//     if (num % 2 == 0)
//         printf("%d is an even number\n", num);
//     else
//         printf("%d is an odd number\n", num);
// }

// 3.

// #include <stdio.h>
// void main()
// {
//     int num;

//     printf("enter a number :");
//     scanf("%d", &num);
//     if (num >= 0)
//         printf("%d is a positive number \n", num);
//     else
//         printf("%d is a negative number \n", num);
// }

// 4.

// #include <stdio.h>
// void main()
// {
//     int year;

//     printf("Enter the year :");
//     scanf("%d", &year);
//     if ((year % 400) == 0)
//         printf("%d is a leap year.", year);
//     else if ((year % 100) == 0)
//         printf("%d is a not leap year.", year);
//     else if ((year % 4) == 0)
//         printf("%d is a leap yearn", year);
//     else
//         printf("%d is not a leap year", year);
// }

// 5.

// #include <stdio.h>
// void main()
// {
//   int age;

//   printf("Input the age of the candidate : ");
//   scanf("%d",&age);
//   if (age<18)
//      {
//        printf("You are not eligible to  vote");
//         }
//   else
//      printf("You are eligible for your vote");
// }

// 6.

// #include <stdio.h>
// void main()
// {
//    int a,b;
//    printf("enter the  value of m :");
//    scanf("%d",&a);

//    if(a>0){
//         b=1;
//         printf("b=%d",b);
//         }
//    else if (a<0)
//    {
//     b=-1;
//     printf("b=%d",b);
//    }
//    else if (a==0)
//    {
//     b=0;
//     printf("b=%d",b);
//    }

// }

// 8.

// #include <stdio.h>
// void main() {
//     int a, b, c;

//     printf("Enter the values of firat numbers : ");
//     scanf("%d", &a);
//     printf("Enter the values of second numbers : ");
//     scanf("%d", &b);
//     printf("Enter the values of third numbers : ");
//     scanf("%d", &c);

//    if ((a > b) && (a > c))
//             printf("The 1st Number is the greatest ");

//    if ((b > c) && (b > a))
//         printf("The 2nd Number is the greatest");

//    if ((c > a) && (c > b))
//            printf("The 3rd Number is the greatest ");

// }

// 9.

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

// 10.

// #include <stdio.h>
// void main()
// {
//     int physics, chemistry, maths, t, mp;

//     printf("enter the marks obtained in Physics :");
//     scanf("%d", &physics);
//     printf("enter the marks obtained in Chemistry :");
//     scanf("%d", &chemistry);
//     printf("enter the marks obtained in Mathematics :");
//     scanf("%d", &maths);
//     printf("Total marks of Maths, Physics and Chemistry : %d\n", maths + physics + chemistry);
//     printf("Total marks of Maths and  Physics : %d\n", maths + physics);

//     if (maths >= 65)
//     {
//         if (physics >= 55)
//         {
//             if (chemistry >= 50)
//                 if ((maths + physics + chemistry) >= 190 || (maths + physics) >= 140){
//                     printf("The  candidate is eligible for admission.\n");
//                     }
//                 else{
//                     printf("The candidate is not eligible.\n");
//                     }
//             else{
//                 printf("The candidate is not eligible.\n");
//             }
//         }  
//         else
//         {
//             printf("The candidate is not eligible.\n");
//         }
//     }
//     else
//         printf("The candidate is not eligible.\n");
// }

//14.

// #include <stdio.h>
// int main()  
// {  
//     int side1, side2, side3; //are three sides of a triangle  
  

//     printf("enter first sides of triangle: ");  
//     scanf("%d", &side1);  
//     printf("enter second sides of triangle: ");  
//     scanf("%d", &side2);  
//     printf("enter third sides of triangle: ");  
//     scanf("%d", &side3);  
  
//     if(side1==side2 && side2==side3)   
//     {  
//         printf("equilateral triangle");  
//     }  
//     else if(side1==side2 || side1==side3 || side2==side3)  
//     {  
//         printf("isosceles triangle");  
//     }  
//     else  
//     {  
//         printf("scalene triangle");  
//     }  
  
//     return 0;  
// } 
