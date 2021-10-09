#include<stdio.h>

int main(){
    float sal, da, hra, gross;
    printf("Enter Your salary: ");
    scanf("%f", &sal);
    if (sal < 25000)
    {
        hra = sal * 0.2;
        da = sal * 0.8;
    }
    else if (sal >= 25000)
    {
        hra = sal * 0.25;
        da = sal * 0.9;
    }
    else if (sal <= 40000)
    {
        hra = sal * 0.3;
        da = sal * 0.95;
    }
    printf("The Basic Salary : %f\n", sal);
    printf("The HRA: %f\n", hra);
    printf("The Da: %f\n", da);
    gross = sal + hra + da;
    printf("The Gross Salary: %f", gross);

}
