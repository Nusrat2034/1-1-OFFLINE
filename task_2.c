#include<stdio.h>
int main(){
int a,b,c,d,e,f;
printf("Enter the value of side1:");
scanf("%d",&a);
printf("Enter the value of side2:");
scanf("%d",&b);
printf("Enter the value of side3:");
scanf("%d",&c);
if(a<0||b<0||c<0){
    printf("Sides can not be negative");
}
else if((a+b>c) && (b+c>a) && (c+a>b)){
    if(a==b && b==c){
        printf("Equilateral triangle");
    }
    else if((a==b)||(b==c)||(c==a)){
        printf("Isosceles triangle");
    }
    else{
        printf("Scalene triangle");
    }
}
else{
    printf("Cannot form a triangle");
}

return 0;
}
