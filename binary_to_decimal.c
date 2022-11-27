#include<stdio.h>
#include<math.h>
void main(){
    long int n;
    int sum=0,i=0,rem;
    printf("Enter the number : ");
    scanf("%ld",&n);
    while(n>0){
        rem=n%10;
        sum=sum+rem*pow(2,i);
        i++;
        n=n/10;
    }
    printf("%d",sum);
}
