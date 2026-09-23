#include<stdio.h>
int main()
{
    float bmi,height,weight;
    printf("Enter your Height in CM: ");
    scanf("%f",&height);
    height=height/100;
    printf("Enter Your weight in Kg: ");
    scanf("%f",&weight);
    bmi=weight/(height*height);
    if (bmi < 18.5){
        printf("Your BMI is: %f and you are Underweight",bmi);
    }else if (bmi >25){
        printf("Your BMI is: %f and you are Overweight",bmi);
    }else{
        printf("Your BMI is: %f and you are Healthy",bmi);
    }

}
