#include<stdio.h>
#include<math.h>

//#define f(x) 5*x*x*x+exp(-2*x)
void main(){
    int i;
    double x, y, z, p=1, s=0;
    scanf("%lf", &x);
    for(i=1; i<=4; i++){
        y=pow(x,i);
        p=y/(-i);
        s+=p;
    }
    printf("%lf", s);
}