#include<stdio.h>
int m[27][27];
int num,r;
void pascalp(int n,int l){
    if(n>num) return;
    if(n==l){
        m[n][l]=1;
        pascalp(n+1,1);
        
    }
    else if(n==1){
        m[n][l]=1;
        pascalp(n,l+1);
    }
    else{
        m[n][l]=m[n-1][l-1]+m[n-1][l];
        pascalp(n,l+1);
    }
}
int main(){
  
    scanf("%d %d",&num,&r);
    pascalp(1,1);
    printf("%d",m[num][r]);
}