#include <stdio.h>
#include <stdlib.h>

#define Name "Vyacheslav"
#define LastName "Wojciechchuk"
#define GroupName "RE-22"
#define Faculty "RTF"
#define University "Igor Sikorsky Kyiv Polytechnic Institute"

int main()
{
 unsigned int semestr;
 int countofobjects;
 float admissionScore;
 int grade1;
 int grade2;
 int grade3;
 int grade4;
 int grade5;
 system("cls");
 double averageGrade;
 unsigned int age;
printf("%s %s Enter following data.\n", Name, LastName);
 printf("Enter semestr:");
 scanf("%u", &semestr);
 printf ("Enter count of objects ");
 scanf ("%u", &countofobjects);
 printf("Enter your admission score: ");
 scanf("%f", &admissionScore);
 if (countofobjects >=1) {printf("Enter grade #1: ");
 scanf("%d", &grade1);}
 if (countofobjects >=2) {printf("Enter grade #2:");
 scanf("%d", &grade2);}
 if (countofobjects >=3) {printf("Enter grade #3: ");
 scanf("%d", &grade3);}
 if (countofobjects >=4) {printf("Enter grade #4: ");
 scanf("%d", &grade4);}
 if (countofobjects >=5) {printf("Enter grade #5: ");
 scanf("%d", &grade5);}
 printf("Enter your age: ");
 scanf("%u", &age);
 averageGrade = (double)(grade1 + grade2 + grade3 + grade4 + grade5) / countofobjects ;
 system("cls");
 printf(" %s", University);
 printf("\n %s", Faculty);
 printf("\n %s", GroupName);
 printf("\n ***");
 printf ("\n student: %s %s", Name, LastName);
 printf("\n age: %u", age);
 printf("\n semestr: %u", semestr);
 printf("\n ===============");
 printf("\n admission score: %.1f", admissionScore);
 printf("\n average grade = %3lf", averageGrade);
 printf("\n");
 scanf ("%d", &grade6);
 return 0;
}
