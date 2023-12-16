// 4
#include<iostream>
using namespace std;

int main()
{
    int radius, height;
    cout<<"Enter the radius : ";
    cin>>radius;
    cout<<"Enter the height : ";
    cin>>height;
    float vol = 3.14 * (radius * radius) * height;
    cout<<"Volume of cylinder is : "<<vol;
    return 0;
}


// 5
#include<iostream>
using namespace std;

int main()
{
    char a,b;
    cout<<"Enter two characters : ";
    cin>>a>>b;
    cout<<"The difference is : "<<b-a;
    return 0;
}