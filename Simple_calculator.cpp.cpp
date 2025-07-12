#include<bits/stdc++.h>
using namespace std;
    //TASK 1 : SIMPLE CALCULATOR

float add(float num1, float num2){
    return num1+num2;
}    

float subtract(float num1, float num2){
    return num1-num2;
}    

float multiply(float num1, float num2){
    return num1*num2;
}    

float divide(float num1, float num2){
    return num1/num2;
}    

int main(){
    float num1, num2;
    char ch;
    cin>>num1>>ch>>num2;

    if(ch == '+') cout<<add(num1,num2);
    else if(ch == '-') cout<<subtract(num1,num2);
    else if(ch == '*') cout<<multiply(num1,num2);
    else if(ch == '/') cout<<divide(num1,num2);
    else cout<<"invalid operator";   
}