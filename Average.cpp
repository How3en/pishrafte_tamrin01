#include <iostream>

using namespace std;

int main()
{
    string name,lastname;
    float math,physics,biology,average;
    cout <<"Enter Your Name:";
        cin >> name;
    cout <<"Enter Your LastName:";
        cin >> lastname;
      cout <<"Enter the math score:";
        cin >> math;
    cout <<"Enter the physics score:";
        cin >> physics;
    cout <<"Enter the biology score:";
        cin >> biology;
    average = (math + physics + biology) / 3;

        if(average >= 17){
        cout <<name<<" "<<lastname<<" Your average score is : "<<average<<" Great!";
        }
        else if (17 > average && average >= 12){
        cout <<name<<" "<<lastname<<" Your average score is : "<<average<<" Normal!";
        }
        else if (average <12){
        cout <<name<<" "<<lastname<<" Your average score is : "<<average<<" Fail!";
        }
       return 0;
}


