#include<stdio.h>
int main(){
int x1=0, x2=0, y2=0, y1=0;
float m=0.0;
int y=0;
printf("enter x1=");
scanf("%d",&x1);
printf("enter x2=");
scanf("%d",&x2);
printf("enter y1=");

scanf("%d",&y1);
printf("enter y2=");

scanf("%d",&y2);
m=(y2-y1)/(x2-x1);
y=y1;
printf("m= %f\n",m);
for(int x=x1; x<=x2; x++){
    y=y+m;
    printf("x= %d, y= %d\n", x, y);
}
}