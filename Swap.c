//Program to perform Swapping of two numbers without using a temporary variable
#include <stdio.h>
void swap(int ,int);
int main()
 {
    double a, b;
    printf("Enter the value of a:");
    scanf("%lf", &a); //here %lf is the format specifier for double datatype
    printf("Enter the value of b:");
    scanf("%lf", &b);

//Values of 'x' and 'y' are given by the user

//Swapping process begins from here

//initial values are the input values
 /*
    a = a - b;   //a = ( initial_a - initial_b ) here 'a' value is changed i.e, changed_a
    
    b = a + b;   //b = ( changed_a + initial_b ) here 'b' value is changed i.e, changed_b = initial_a

    a = b - a;   //a = ( changed_a - changed_b ) here 'a' value is changed i.e, changed_a = initial_b
    */
swap(a,b);
    printf("After swapping: a = %lf\n", a); //The swapped value of 'a' is given in the place of %lf , \n is used to continue from the new line
    printf("After swapping: b = %lf", b);   //The swapped value of 'b' is given in the place of %lf 
    return 0;  
}
void swap(int &a,int &b)
{
 a=(a*b)/(b=a);
}
