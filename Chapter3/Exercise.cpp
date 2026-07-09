#include <iostream>
#include <cmath>
using namespace std;

float funtionBMI(float,float);

int main(){
float weight,height,resultBMI;
cout<<"Input your weight: ";
cin>>weight;
cout<<"Input your height: ";
cin>>height;
resultBMI=funtionBMI(weight,height);
cout<<"BMI= "<<resultBMI<<endl;
if(resultBMI>=27.5){
        cout<<"obese";
    }else if(resultBMI>=23&&resultBMI<=27.5){
        cout<<"overweight";
    }else if(resultBMI>=18.5&&resultBMI<23){
        cout<<"Normal";
    }else{
        cout<<"Underwight";
    }
return 0;

}
float funtionBMI(float weight,float height){
    float BMI;
    BMI=weight/pow(height,2);
    return BMI;
}