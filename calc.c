#include <stdio.h>
#include <stdlib.h>

void menu(int x);
void addition(int x, int y);
void subtraction(int x, int y);
void multiplication(int x, int y);
void division(int x, int y);
void modulus(int x, int y);
void square(int x);
void exits(int x);
void restart(int x);
void history(int i, int j, int k, int l,int m);

char arr[10];

int main()
{
    int opt;
    printf("___Welcome___\n\n");
    printf("MENU--\n\n");
    printf("1.Addition\t2.Substraction\t3.Multiplication\n\n4.Division\t5.Modulus\t6.Square\n\n");

    printf("Enter the option no. to proceed --\n");
    scanf("%i", &opt);
    menu(opt);
}

//-------------------------------MENU FUNCTION--------------------------

void menu(int x)
{
    int n, n1, n2;
    if (x == 1)
    {
        printf("Enter the two numbers :\n");
        scanf("%i\n%i", &n1, &n2);
        addition(n1, n2);
    }
    else if (x == 2)
    {
        printf("Enter the two numbers :\n");
        scanf("%i\n%i", &n1, &n2);
        subtraction(n1, n2);
    }
    else if (x == 3)
    {
        printf("Enter the two numbers :\n");
        scanf("%i\n%i", &n1, &n2);
        multiplication(n1, n2);
    }
    else if (x == 4)
    {
        printf("Enter the two numbers :\n");
        scanf("%i\n%i", &n1, &n2);
        division(n1, n2);
    }
    else if (x == 5)
    {
        printf("Enter the two numbers :\n");
        scanf("%i\n%i", &n1, &n2);
        modulus(n1, n2);
    }
    else if (x == 6)
    {
        printf("Enter the number :\n");
        scanf("%i", &n);
        square(n);
    }
}

//-------------------------ADDITITON FUNCTION------------------------------

void addition(int x, int y)
{

    int a = x, b = y;
    int re;
    int sum = x + y;
    printf("Sum = %i", sum);
    char arr[10] = {'S', 'u', 'm'};
    history(arr, a, b, sum,'+');

    printf("\nEnter 7 for restart:\n");
    scanf("%i", &re);
    if (re == 7)
    {
        restart(re);
    }
    else
    {
        exits(re);
    }
}

//-------------------------SUBTRACTION FUNCTION------------------------------

void subtraction(int x, int y)
{
    int a = x, b = y;
    int diff = x - y;
    int re;
    printf("Difference = %i", diff);
    char arr[10] = {'S', 'u', 'b'};
    history(arr, a, b, diff,'-');
    printf("\nEnter 7 for restart:\n");
    scanf("%i", &re);
    if (re == 7)
    {
        restart(re);
    }
    else
    {
        exits(re);
    }
}

//-------------------------MULTIPLICATION FUNCTION------------------------------

void multiplication(int x, int y)
{
    int a = x, b = y;
    int pro = x * y;
    int re;
    printf("Product = %i", pro);
    char arr[10] = {'M', 'u', 'l'};
    history(arr, a, b, pro,'*');
    printf("\nEnter 7 for restart:\n");
    scanf("%i", &re);
    if (re == 7)
    {
        restart(re);
    }
    else
    {
        exits(re);
    }
}

//-------------------------DIVISION FUNCTION------------------------------

void division(int x, int y)
{
    int a = x, b = y;
    int div = x / y;
    int re;
    printf("Division = %i", div);
    char arr[10] = {'D', 'i', 'v'};
    history(arr, a, b, div,'/');
    printf("\nEnter 7 for restart:\n");
    scanf("%i", &re);
    if (re == 7)
    {
        restart(re);
    }
    else
    {
        exits(re);
    }
}

//-------------------------MODULUS FUNCTION------------------------------

void modulus(int x, int y)
{
    int a = x, b = y;
    int mod = x % y;
    int re;
    printf("Modulus = %i", mod);
    char arr[10] = {'M', 'o', 'd'};
    history(arr, a, b, mod,'%');
    printf("\nEnter 7 for restart:\n");
    scanf("%i", &re);
    if (re == 7)
    {
        restart(re);
    }
    else
    {
        exits(re);
    }
}

//-------------------------SQUARE FUNCTION------------------------------

void square(int x)
{
    int a = x, b = x;
    int square = x * x;
    int re;
    printf("Square = %i", square);
    char arr[10] = {'S', 'q', 'r'};
    history(arr, a, b, square,'*');
    printf("\nEnter 7 for restart:\n");
    scanf("%i", &re);
    if (re == 7)
    {
        restart(re);
    }
    else
    {
        exits(re);
    }
}

//-----------------------RESTART FUNCTION----------------------------------

void restart(int x)
{
    system("clear");
    main();
}

//------------------------EXIT FUNCTION-------------------------------------

void exits(int x)
{
    printf("Thanks");
}

//-----------------------HISTORY FUNCTION------------------------------------

void history(int i, int j, int k, int l,int m)
{
    FILE *fptr;
    fptr = fopen("database.c", "a");

    fprintf(fptr, "%s : %d %c %d = %d\n", i, j,m, k, l);
    fclose(fptr);
}