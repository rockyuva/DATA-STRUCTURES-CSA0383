#include<stdio.h>

void printFibonacci(int m){

static int m1=0,m2=1,m3;

if(m>0){

m3 = m1 + m2;

m1 = m2;

m2 = m3;

printf(“%d “,m3);

printFibonacci(m-1);

}

}

int main(){

int m;

printf(“Please enter your preferred number of elements here: “);

scanf(“%d”,&m);

printf(“The Fibonacci Series will be: “);

printf(“%d %d “,0,1);

printFibonacci(m-2); //We have used m-2 because we have 2 numbers already printed here

return 0;

}

The output obtained out of the code mentioned above would be:

Please enter your preferred number of elements here: 15

The Fibonacci Series will be:

0 1 1 2 3 5 8 13 21 34 55 89 144 233 377


Recursion Using for Loop in Fibonacci Series
#include<stdio.h>

#include<conio.h>

int recursivefibonacci(int);

int main(){

int m, x;

printf(“Please enter the total number of values you want in the Fibonacci series : \n”);

scanf(“%d”,&m);

printf(“The Fibonacci series of these numbers would be equal to : \n”);

for(x=0;x<m;x++) {

printf(“%d “,recursivefibonacci(x));

}

getch();

}

int recursivefibonacci(int x){

if(x==0) return 0;

else if(x==1) return 1;

else return (recursivefibonacci(x-1) + recursivefibonacci(x-2));

}


