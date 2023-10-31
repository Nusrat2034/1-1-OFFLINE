#include<stdio.h>
int main(){
 int a,b;
 float c,fh,k;
 printf("List of supported scales:\n1.Celcius\n2.Fahrenheit\n3.Kelvin\nChoose your input scale:");
 scanf("%d",&a);
 printf("Choose your output scale:");
 scanf("%d",&b);
 if(a==1){
  printf("Enter the temperature in celsius scale:");
 scanf("%f",&c);
  if(b==2){
    printf("Corresponding fahrenheit temperature is:%f",(((c*9)/5.0)+32));
  }
  else{
    printf("Corresponding kelvin temperature is:%f",c+273);
  }
 }
 else if(a==2){
    printf("Enter the temperature in fahrenheit scale:");
    scanf("%f",&fh);
    if(b==1){
        printf("Corresponding celcius temperature is:%f",((5.0/9)*(fh-32)));
    }
    else{
        printf("Corresponding kelvin temperature is:%f",((5.0/9)*(fh-32))+273);
    }
 }
 else{
    printf("Enter the temperature in kelvin scale:");
    scanf("%f",&k);
    if(b==1){
        printf("Corresponding celcius temperature is:%f",(k-273));
    }
    else{
        printf("Corresponding fahrenheit is:%f",(((9.0/5)*(k-273))+32));
    }
 }
 return 0;
}
