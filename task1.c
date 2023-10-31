#include<stdio.h>
int main(){
int l,w,h,a,r,b,s;
printf("1.Rectangular solid\n2.Cube\n3.Cylinder\n4.Prism\n5.Sphere\n6.Right circular cone\n");
printf("Enter your choice:");
scanf("%d",&s);
if(s>=1&&s<=6){
 if(s==1){
  printf("Enter the value of length,width and height of rectangular solid:");
  scanf("%d%d%d",&l,&w,&h);
  printf("Volume of cube:%d\n",l*w*h);
 }
 else if (s==2){
    printf("Enter the length of edge or side:");
    scanf("%d",&a);
    printf("Volume of cube:%d\n",a*a*a);
 }
 else if(s==3){
    printf("Enter the radius of the circulas base and height of a cylinder:");
    scanf("%d%d",&r,&h);
    printf("Volume of cylinder:%f\n",3.1416*r*r*h);
 }
 else if(s==4){
    printf("Enter the area of base and height of a prism:");
    scanf("%d%d",&b,&h);
    printf("Volume of prism:%d\n",b*h);
 }
 else if(s==5){
    printf("Enter the radius of the sphere:");
    scanf("%d",&r);
    printf("Volume of sphere:%f\n",(4.0/3)*3.1416*r*r*r);
 }
 else if(s==6){
    printf("Enter the radius of the circular base and height of a right circular cone:");
    scanf("%d%d",&r,&h);
    printf("Volume of right circular cone:%f\n",(1.0/3)*3.1416*r*r*h);
 }

}
else{
    printf("Invalid input");
}
return 0;
}
