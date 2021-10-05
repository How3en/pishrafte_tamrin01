#include <iostream>

using namespace std;

int main()
{
    float x,y,z;
    cout << "Enter the size of the first triangle side: ";
    cin>>x;
    cout << "Enter the size of the second triangle side: ";
    cin>>y;
    cout << "Enter the size of the third triangle side: ";
    cin>>z;
    if(x<y+z && y<x+z && z<x+y){

            cout<<"Yes we have triangle"<<endl;
    }
    else
           cout<<"No we Dont have triangle";

       return 0;
}


