#include<iostream>
using namespace std;

int main()
{

float BMI,weight,height;
cout<<"Please Enter your weight in Kg : ";
    cin>>weight;
cout<<"Please Enter your Height in Meters : ";
    cin>>height;

BMI = (weight)/(height * height);

if(BMI < 18.5){
    cout<<"BMI is "<<BMI<<" And You Are UNDERWEIGHT";}

else if(BMI >= 18.5 && BMI < 24.9){
    cout<<"BMI is "<<BMI<<" And You Are Normal";}

else if(BMI >= 24.9 && BMI < 29.9){
   cout<<"BMI is "<<BMI<<" And You Are Underweight";}

else if(BMI >= 29.9 && BMI < 34.9){
   cout<<"BMI is "<<BMI<<" And You Are OBESE";}

else if(BMI >=34.9){
   cout<<"BMI is "<<BMI<<" And You Are EXTREMELY OBESE";}
return 0;
}
