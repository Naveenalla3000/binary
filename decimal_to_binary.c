#include<stdio.h>
#include<math.h>
#include<string.h>
void main() {
    int n;
    scanf("%d",&n);
    int i,bin[100];
    for(i=0;n>0;i++){
        bin[i]=n%2;
        n=n/2;
    }
    for(i=i-1;i>=0;i--){
        printf("%d",bin[i]);
    }
}
