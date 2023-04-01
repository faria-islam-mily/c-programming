#include<stdio.h>
#include<math.h>

#define f(x) 5*x*x*x+exp(-2*x)
void main(){
    double x, y, ans=0;
    for( x=0.1; x<2; x+=0.1){
        y=f(x);
        ans+=y;
    }
    printf("%lf\n", ans);
}