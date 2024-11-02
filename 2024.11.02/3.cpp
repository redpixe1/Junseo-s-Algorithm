#include<stdio.h>
int m;
void sss(int n){
    if(n==1) return;
    printf("    ");
    sss(n-1);
}
void ssc(int n){
    if(n==0) return;
    ssc(n-1);
    printf("%4d",n);
}
void sse(int n){
    if(n==0) return;
    sss(n);
    ssc(m-n+1);
    printf("\n");
    sse(n-1);
}
int main(){
    scanf("%d",&m);
    sse(m);
    
    printf("\n");
}