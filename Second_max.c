#include <stdio.h>

int main() {

int a,b,c,d,max,sm;
scanf("%d %d %d %d",&a,&b,&c,&d);
max=a;
if(b>max) max=b;
if(c>max) max=c;
if(d>max) max=d;

sm=-1;

if(a<max) sm=a;

if(b<max && b>sm) sm=b;
if(c<max && c>sm) sm=c;
if(d<max && d>sm) sm=d;

printf("%d",sm);


    return 0;
}
