#include<stdio.h>
int main(){
 int n,k,r,d;
 printf("Input a five digit number:");
 scanf("%d",&n);
 printf("Enter the rotation times:");
 scanf("%d",&k);
 if(k>=0 && k<=100000){
   if(k==0 || (k%5==0)){
    printf("Output:%d",n);
   }
  else if(k==1 || (k%5==1)){
   r=n%10;
   d=n/10;
   printf("Output:%d%d",r,d);
  }
  else if(k==2 || (k%5==2)){
    r=n%100;
    d=n/100;
    printf("Output:%d%d",r,d);
  }
  else if(k==3 || (k%5==3)){
    r=n%1000;
    d=n/1000;
    printf("Output:%d%d",r,d);
  }
  else{
    r=n%10000;
    d=n/10000;
    printf("Output:%d%d",r,d);
  }
 }
 else {
    printf("Sorry!");
 }
return 0;
}
