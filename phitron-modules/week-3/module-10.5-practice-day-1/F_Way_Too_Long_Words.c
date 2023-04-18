

// int main()
// {
//     char str[101];
//     fgets(str, sizeof(str), stdin);
//     int len = strlen(str);
//     // for (int i = 0; i < len; i++)
//     // {
//     //     printf("%c\n", str[i]);
//     // }
//     // printf("%d\n", 'z' - 'a');
//     printf("%d\n",len);
//     return 0;
// }
// // a=97
// // b=122
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100];
//     // printf("Enter a line of text: ");
//     fgets(str, 100, stdin);
//     int len = strlen(str);
//     for (int i = 0; i < len; i++)
//     {
//         printf("%c\n", str[i]);
//     }

//     // printf("You entered: %s", str);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// char name[30];
// printf("Enter name: ");
// fgets(name, sizeof(name), stdin); // read string
// printf("Name: ");
// puts(name); // display string
// char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// printf("%d\n", strlen(alphabet)); // 26
// printf("%d", sizeof(alphabet)); // 27

// char str1[20] = "Hello ";
// char str2[] = "World!";

// // Concatenate str2 to str1 (result is stored in str1)
// strcat(str1, str2);

// // Print str1
// printf("%s", str1);
// char str1[20] = "Hello World!";
// char str2[20];

// // Copy str1 to str2
// strcpy(str2, str1);

// // Print str2
// printf("%s", str2);

// char str1[] = "Hello";
// char str2[] = "Hello";
// char str3[] = "Hi";

// // Compare str1 and str2, and print the result
// printf("%d\n", strcmp(str1, str2)); // Returns 0 (the strings are equal)

// // Compare str1 and str3, and print the result
// printf("%d\n", strcmp(str1, str3)); // Returns -4 (the strings are not equal)

// Create an int and a char variable
// int myNum;
// char myChar;

// // Ask the user to type a number AND a character
// printf("Type a number AND a character and press enter: \n");

// // Get and save the number AND character the user types
// scanf("%d %c", &myNum, &myChar);

// // Print the number
// printf("Your number is: %d\n", myNum);

// // Print the character
// printf("Your character is: %c\n", myChar);

//     char fullName[30];

//     printf("Type your full name: \n");
//     fgets(fullName, sizeof(fullName), stdin);

//     printf("Hello %s", fullName);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str1[50]; // declaration of char array
//     char str2[50]; // declaration of char array
//     int value;     // declaration of integer variable

//     printf("Enter the first string : ");
//     scanf("%s", str1);
//     printf("Enter the second string : ");
//     scanf("%s", str2);

//     // comparing both the strings using strcmp() function
//     value = strcmp(str1, str2);
//     if (value == 0)
//         printf("strings are same");
//     else
//         printf("strings are not same");
//     return 0;
// }
#include <stdio.h>
int main() {
  printf("short int is %2d bytes \n", sizeof(short int));
  printf("int is %2d bytes \n", sizeof(int));
  printf("int * is %2d bytes \n", sizeof(int *));
  printf("long int is %2d bytes \n", sizeof(long int));
  printf("long int * is %2d bytes \n", sizeof(long int *));
  printf("signed int is %2d bytes \n", sizeof(signed int));
  printf("unsigned int is %2d bytes \n", sizeof(unsigned int));
  printf("\n");
  printf("float is %2d bytes \n", sizeof(float));
  printf("float * is %2d bytes \n", sizeof(float *));
  printf("double is %2d bytes \n", sizeof(double));
  printf("double * is %2d bytes \n", sizeof(double *));
  printf("long double is %2d bytes \n", sizeof(long double));
  printf("\n");
  printf("signed char is %2d bytes \n", sizeof(signed char));
  printf("char is %2d bytes \n", sizeof(char));
  printf("char * is %2d bytes \n", sizeof(char *));
  printf("unsigned char is %2d bytes \n", sizeof(unsigned char));
  return 0; 
}
