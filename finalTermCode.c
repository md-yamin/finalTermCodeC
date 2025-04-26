// /*
// 1) Write a C program to check whether a given number is odd or even using an if-else statement.
// */

//  #include <stdio.h>
//  int main(){
//      int n;
//      scanf("%d", &n);
//      if(n%2==0){
//          printf("Even\n");
//      }
//      else{
//          printf("Odd\n");
//      }
//  }

// /*
// 2) Write a program that takes a year as input and checks whether it is a leap year or
// not using if-else conditions.
// */

//  #include <stdio.h>
//  int main(){
//     int n;
//     scanf("%d", &n);
//     if(n%400==0 || (n%4==0 && n%100!=0)){
//           printf("%d is a leap year\n", n);
//     }
//     else{
//        printf("%d is not leap year\n",n);
//     }
//     return 0;
//  }

// /*
// 3) Write a C program to find the largest of three numbers using nested if-else conditions.
// */

//  #include <stdio.h>
//  int main(){
//      int a,b,c;
//      scanf("%d %d %d", &a, &b, &c);

//      if(a>b){
//          if(a>c){
//              printf("%d is the greatest number\n", a);
//          }
//          else{
//              printf("%d is the greatest number\n", c);
//          }
//      }
//      else{
//          if(b>c){
//              printf("%d is the greatest number\n", b);
//          }
//          else{
//              printf("%d is the greatest number\n", c);
//          }
//      }
//  }

// /*
// 4) Write a C program to calculate the maximum of three integer numbers using the ternary operator.
// */

//  #include <stdio.h>
//  int main(){
//     int a,b,c, max;
//     scanf("%d %d %d", &a, &b, &c);
//     max =(a>b)?((a>c)? a : c) : ((b>c)? b : c);
//     printf("Maximum number is %d\n", max);
//  }

// /*
// 5) Write a program to check if a character is a vowel or a consonant using the switch-case statement.
// */

//  #include <stdio.h>
//  #include <ctype.h> /*character type*/
//  int main(){
//      char c;
//      scanf("%c", &c);
//      c=tolower(c);
//      switch(c){
//          case 'a':case 'e':case 'i':case 'o':case 'u':
//          printf("%c is a vowel.\n",c);
//          break;
//          default:
//          if(c>='a' && c<='z')
//          {
//              printf("Consonent\n");
//          }
//      }
//      return 0;
//  }

// /*
// 6) Write a C program that takes a number and determines whether it's positive, negative, or zero using if-else statements.
// */

//  #include <stdio.h>
//  int main(){
//     int n;
//     scanf("%d", &n);
//     if(n>0){
//      printf("The number is positive\n");
//     }
//     else if(n<0){
//      printf("The number is negative\n");
//     }
//     else{
//      printf("The number is zero\n");
//     }
//     return 0;
//  }

// /*
// 7) Write a C program to add two numbers using pointers.
// */

 #include <stdio.h>

 int main() {
     int a, b, sum;
     scanf("%d %d", &a, &b);
     int *ptr1 = &a, *ptr2 = &b;
        
     sum = *ptr1 + *ptr2;

     printf("Sum is %d\n", sum);
     return 0;
 }

// /*
// 8) Write a C program to print the following sequences:
// a) 1 4 7 10 13 16 19
// b) 1 3 5 7 9 11 13
// */

// //  Answer A
//  #include <stdio.h>
//  int main(){
//      for(int i= 1; i<=19; i+=3){
//          printf("%d ", i);
//      }
//     return 0;
//  }

// //  Answer B
//  #include <stdio.h>
//  int main(){
//      for(int i= 1; i<=13; i+=2){
//          printf("%d ", i);
//      }
//     return 0;
//  }

// /*
// 9) Write a program to create a simple calculator using the switch-case statement. The program should perform addition, subtraction, multiplication, and division
// based on user input.
// */

//  #include <stdio.h>
//  int main()
//  {
//      float a, b;
//      char operator;
//      printf("Input Operator '+' or '-' or '*' or '/'\n");
//      scanf("%c", &operator);
//      switch (operator)
//      {
//      case '+':
//          scanf("%f%f", &a, &b);
//          printf("%.1f\n", a + b);
//          break;

//      case '-':
//          scanf("%f%f", &a, &b);
//          printf("%.1f\n", a - b);
//          break;

//      case '*':
//          scanf("%f%f", &a, &b);
//          printf("%.1f\n", a * b);
//          break;

//      case '/':
//          scanf("%f%f", &a, &b);
//          if (a > b)
//          {
//              printf("%.1f\n", a / b);
//          }
//          else
//          {
//              printf("%.1f\n", b / a);
//          }
//          break;
//      default:
//          printf("Not a valid operator\n");
//      }
//      return 0;
//  }

// /*
// 10) Write a program to count the number of even and odd elements in an array.
// */

//  #include <stdio.h>
//  int main()
//  {
//     int n, even = 0, odd = 0;
//     scanf("%d", &n);
//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//        scanf("%d", &array[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//        if(array[i] % 2 == 0){
//           even++;
//        }
//        else{
//           odd++;
//        }
//     }
//     printf("Even = %d\n", even);
//     printf("Odd = %d", odd);
//     return 0;
//  }

// /*
// 11) Write a program to calculate the factorial of a number using recursion.
// */

//  #include <stdio.h>

//  int factorial(int n) {
//      if (n == 0 || n == 1) {
//          return 1;
//      } else {
//          return n * factorial(n - 1);
//      }
//  }

//  int main() {
//      int num;
//      scanf("%d", &num);
//      printf("Factorial of %d is: %d\n", num, factorial(num));
//      return 0;
//  }

// /*
// 12) Write a program to calculate the factorial of a number using a while/for loop.
// */

// //  Answer With For Loop

//  #include <stdio.h>
//  int main(){
//      int n, f=1;
//      scanf("%d", &n);

//      for(int i=1; i<=n; i++){
//          f*=i;
//      }
//      printf("%d", f);
//      return 0;
//  }

// //  Answer With While Loop

//  #include <stdio.h>
//  int main(){
//      int n,i=1, f=1;
//      scanf("%d", &n);
//      while(i<=n){
//          f*=i;
//          i++;
//      }
//      printf("%d", f);
//      return 0;
//  }

// /*
// 13) Write a C program to generate the Fibonacci series up to n terms using a for loop.
// */

//  #include <stdio.h>
//  int main() {
//      int n, a = 0, b = 1, c;
//      printf("Enter number of terms: ");
//      scanf("%d", &n);

//      printf("Fibonacci series: %d %d ", a, b);
//      for (int i = 2; i < n; i++) {
//          c = a + b;
//          printf("%d ", c);
//          a = b;
//          b = c;
//      }
//      return 0;
//  }

// /*
// 14) Write a program that takes an integer as input and calculates the sum of its digits using a while loop.
// */

//  #include <stdio.h>
//  int main(){
//      int n, f=0;
//      scanf("%d", &n);

//      for(int i=1; i<=n; i++){
//          f+=i;
//      }
//      printf("%d", f);
//      return 0;
//  }

// /*
// 15) Write a C program to count the number of vowels and consonants in a given string.
// */

//  #include <stdio.h>
//  #include <ctype.h>
//  #include <string.h>
//  int main()
//  {
//      int vowel = 0, consonent = 0;
//      char string[50];
//      scanf("%s", &string);
//      for (int i = 0; i < strlen(string); i++)
//      {
//          string[i] = tolower(string[i]);
//          if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
//          {
//              vowel++;
//          }
//          else
//          {
//              consonent++;
//          }
//      }
//      printf("Vowel = %d\n", vowel);
//      printf("Consonent = %d\n", consonent);
//      return 0;
//  }

// /*
// 16) Write a program to count the number of digits in an integer using a while loop.
// */
//  #include <stdio.h>
//  int main()
//  {
//      int n, count = 0;
//      scanf("%d", &n);

//      while (n != 0)
//      {
//          n = n / 10;
//          count++;
//      }
//      printf("Number of digits: %d\n", count);
//      return 0;
//  }


// /*
// 17) Write a C program to find the maximum element in an array using loops and conditional statements. 
// */

//  #include <stdio.h>
//  int main(){
//     int n, max=0;
//     scanf("%d", &n);
//     int array[n];
//     for(int i = 0; i<n; i++){
//      scanf("%d", &array[i]);
//     }
//     for(int i = 0; i<n-1; i++){
//      if(array[i]> max){
//          max = array[i];
//      }
//     }
//     printf("Max = %d", max);
//     return 0;
//  }


// /*
// 18) Write a program that takes an array of integers and finds the sum of its elements using a loop. 
// */

//  #include <stdio.h>
//  int main(){
//     int n, sum = 0;
//     scanf("%d", &n);
//     int array[n];
//     for(int i = 0; i<n; i++){
//      scanf("%d", &array[i]);
//     }
//     for(int i = 0; i<n; i++){
//          sum += array[i];
//      }
//     printf("Sum = %d", sum);
//     return 0;
//  }


// //   CODE 1
//  #include<stdio.h>
//  int main()
//  {
//      int x = 5, y = 10;
//      x += y++;                           /* x = 15 || y = 10 */
//      ++x;                                /* x = 16 || y = 11 */
//      printf("x = %d, y = %d\n", x, y);   /* x = 16 || y = 11 */
//      /*Out= x = 16 || y = 11 */
//      --y, x++;                           /* x = 17 || y = 10 */
//      printf("x = %d, y = %d\n", x, y--); /* x = 17 || y = 9 */
//      /*Out= x = 17 || y = 10 */
//      y %= x++ + 2;                       /* x = 18 || y = 9 */
//      printf("x = %d, y = %d\n", x, y);   /* x = 18 || y = 9 */
//      /*Out= x = 18 || y = 9 */
//      return 0;
//  }

// //   CODE 2
//  #include<stdio.h>
//  int main()
//  {
//      int x = 5, y = 10;                 /* x = 5 || y = 10 */
//      x *= --y;                          /* x = 45 || y = 9 */
//      ++x;                               /* x = 46 || y = 9 */
//      printf("x = %d, y = %d\n", x, y);  /* x = 46 || y = 9 */
//      /*Out x = 46 || y = 9 */
//      --y, x++;                          /* x = 47 || y = 8 */
//      printf("x = %d, y = %d\n", x, y--);/* x = 47 || y = 7 */
//      /*Out= x = 47 || y = 8 */
//      y %= 3 + ++x;                      /* x = 48 || y = 7 */
//      printf("x = %d, y = %d\n", ++x, y);/* x = 49 || y = 7 */
//      /*Out= x = 49 || y = 7 */
//      return 0;
//  }

// //   CODE 3
//  #include<stdio.h>
//  int main()
//  {
//      int x = 5, y = 10;/*x = 5 || y = 10 */
//      ++y;/*x = 5 || y = 11 */
//      printf("x = %d, y = %d\n", x, y*2);/*x = 5 || y = 11 */
//      /*Out= x = 5 || y = 22 */
//      --y, x++;/*x = 6 || y = 10 */
//      printf("x = %d, y = %d\n", ++x, y);/*x = 7 || y = 10 */
//      /*Out= x = 7 || y = 10 */
//      y %= 10 - ++x;/*x = 8 || y = 0 */
//      printf("x = %d, y = %d\n", x, y);/*x = 8 || y = 0 */
//      /*Out= x = 8 || y = 0 */
//      x %= ++y;/*x = 8 || y = 1 */
//      printf("x = %d, y = %d\n", x, y--);/*x = 0 || y = 0 */
//      /*Out= x = 7 || y = 1 */
//      return 0;
//  }

// //   CODE 4
//  #include <stdio.h>
//  int main()
//  {
//  	int x = 5; /*x = 5*/
//  	int y = ++x + x++;/*y = 6 + 7*/
//  	printf("%d\n", y);/*y = 13*/
//  	return 0;
//  }

// //  CODE 5
//   #include <stdio.h>
//   int main()
//   {
//   	int x = 5;
//   	int y = x++ + ++x;/*y = 5 + 7*/
//   	printf("%d\n", y);/*y = 12*/
//   	return 0;
//   }
