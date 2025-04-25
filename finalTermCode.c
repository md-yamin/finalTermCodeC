// // CODE 1
// #include<stdio.h>
// int main()
// {
//     int x = 5, y = 10;
//     x += y++;                           /* x = 15 || y = 10 */
//     ++x;                                /* x = 16 || y = 11 */
//     printf("x = %d, y = %d\n", x, y);   /* x = 16 || y = 11 */
//     --y, x++;                           /* x = 17 || y = 10 */
//     printf("x = %d, y = %d\n", x, y--); /* x = 17 || y = 10 */
//     y %= x++ + 2;                       /* x = 18 || y = 9 */
//     printf("x = %d, y = %d\n", x, y);   /* x = 18 || y = 9 */
//     return 0;
// }


// CODE 2
#include<stdio.h>
int main()
{
    int x = 5, y = 10; /* x = 5 || y = 10 */
    x *= --y; /* x = 45 || y = 9 */
    ++x;/* x = 46 || y = 9 */
    printf("x = %d, y = %d\n", x, y);/* x = 46 || y = 9 */
    --y, x++;/* x = 46 || y = 7 */
    printf("x = %d, y = %d\n", x, y--);
    y %= 3 + ++x;
    printf("x = %d, y = %d\n", ++x, y);
    return 0;
}


// CODE 3
// #include<stdio.h>
// int main()
// {
//     int x = 5, y = 10;
//     ++y;
//     printf("x = %d, y = %d\n", x, y*2);
//     --y, x++;
//     printf("x = %d, y = %d\n", ++x, y);
//     y %= 10 - ++x;
//     printf("x = %d, y = %d\n", x, y);
//     x %= ++y;
//     printf("x = %d, y = %d\n", x, y--);
//     return 0;


// }


// CODE 4

// #include <stdio.h>

// int main()
// {
// 	int x = 5;
// 	int y = ++x + x++;
// 	printf("%d\n", y);
// 	return 0;
// }

//CODE 5
// #include <stdio.h>

// int main()
// {
// 	int x = 5;
// 	int y = x++ + ++x;
// 	printf("%d\n", y); 
// 	return 0;
// }
