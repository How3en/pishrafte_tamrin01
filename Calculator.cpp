#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    double a,b,result;
    string op;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Secound Number: ";
    cin >> b;
    cout << "Enter the Operator: ";
    cin >> op;

    if (op == "+"){
        result = a + b;
        cout << "Your Result:" << result;}

    else if (op == "-"){
        result = a - b;
        cout << "Your Result:" << result;}

    else if (op == "*"){
        result = a * b;
        cout << "Your Result:" << result;}

    else if (op == "/"){
        if (b != 0){
        cout << "Your Result:" << result;}
        else{
        cout << "Zero Division!";}}

    else if (op == "Rad"){
        cout << "Your Result (A):" << sqrt(a)<<endl;
        cout << "Your Result (B):" << sqrt(a)<<endl;}

    else if (op == "sin"){
        a = a * M_PI / 180;
        b = b * M_PI / 180;
        cout << "Your Result (A): " << sin(a)<<endl;
        cout << "Your Result (B): " << sin(b)<<endl;}

    else if (op == "cos"){
        a = a * M_PI / 180;
        b = b * M_PI / 180;
        cout << "Your Result (A): " << cos(a)<<endl;
        cout << "Your Result (B): " << cos(b)<<endl;}

    else if (op == "tan"){
        a = a * M_PI / 180;
        b = b * M_PI / 180;
        cout << "Your Result (A): " << tan(a)<<endl;
        cout << "Your Result (B): " << tan(b)<<endl;}

    else if (op == "cot"){
        a = a * M_PI / 180;
        b = b * M_PI / 180;
        double cot = tan(a);
        double cott = tan(b);
        cout << "Your Result (A): " << 1/cot<<endl;
        cout << "Your Result (B): " << 1/cott<<endl;}

    else if (op == "fact"){
        double fact=1,factt=1,i,j;
        for(i=a;i>0;i--){
        fact*=i;}
        cout<<"Your Result (A):"<<fact<<endl;
        for(j=b;j>0;j--){
        factt*=j;}
        cout<<"Your Result (B):"<<factt<<endl;}

    return 0;
}
