#include <stdio.h>

#include<stdio.h>

int main(){

    int x,fact=1,n;

    printf("Enter a number to find factorial: ");

    scanf("%d",&n); 
    if(isdigit(n)){
     for(x=1;x<=n;x++)

        fact=fact*x; 

    printf("Factorial of %d is: %d",n,fact);
 }
 else{
 	printf( "input is invalid "); 
 }
    return 0;

}

