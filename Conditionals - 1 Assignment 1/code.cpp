// 1
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter 2 numbers : ";
    cin>>a>>b;
    if(a>b){
        cout<<a<<" is greatest";
    }
    else{
        cout<<b<<" is greatest";
    }
    return 0;
}



// 2
#include<iostream>
using namespace std;

int main()
{
    int radius;
    cout<<"Enter the radius of the circle : ";
    cin>>radius;
    float pi = 3.14;
    float area = pi * radius * radius;
    float circum = 2 * pi * radius;
    if(area > circum){
        cout<<"Area of the circle is larger than the circumference";
    }
    else{
        cout<<"Circumference of the circle is larger than the Area";
    }
    return 0;
}



// 3
#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter the year : ";
    cin>>year;
    if((year%4==0 && year%100!=0) || (year%100==0 && year%400==0))
    {
        cout<<year<<" is a leap year";
    }
    else{
        cout<<year<<" is not a leap year";
    }
    return 0;
}



// 4
#include<iostream>
using namespace std;

int main()
{
    int length,breath;
    cout<<"Enter the length and breath of rectangle : ";
    cin>>length>>breath;
    int area = length * breath;
    int perimeter = 2 * (length + breath);
    if(area > perimeter){
        cout<<"Area of the rectangle is greater than the perimeter";
    }
    else{
        cout<<"Perimeter of the rectangle is greater than the Area";
    }
    return 0;
}



// 5
#include<iostream>
using namespace std;

int main()
{
    int side1, side2, side3;
    cout << "Enter the length of side 1: ";
    cin >> side1;
    cout << "Enter the length of side 2: ";
    cin >> side2;
    cout << "Enter the length of side 3: ";
    cin >> side3;

    if (side1 == side2 && side2 == side3) {
        cout << "It is an equilateral triangle.";
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        cout << "It is an isosceles triangle.";
    } else {
        cout << "It is a scalene triangle.";
    }
    return 0;
}



// 6
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 3 marks : ";
    cin>>a>>b>>c;
    if(a<b && a<c){
        cout<<a<<" is the least marks obtained";
    }
    else if(b<a && b<c){
        cout<<b<<" is the least marks obtained";
    }
    else{
        cout<<c<<" is the least marks obtained";
    }
    return 0;
}



// 7
#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter 2 points x and y : ";
    cin>>x>>y;
    if(x==0 && y==0){
        cout<<"The point lies in the origin";
    }
    else if(x==0){
        cout<<"The point lies in the Y-axis";    
    }
    else if(y==0){
        cout<<"The point lies in the X-axis";    
    }
    else{
        cout<<"The point lies somewhere in between x and y axis";
    }
    return 0;
}



// 8
#include<iostream>
using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3;
    cout << "Enter coordinates of point 1 (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of point 2 (x2 y2): ";
    cin >> x2 >> y2;

    cout << "Enter coordinates of point 3 (x3 y3): ";
    cin >> x3 >> y3;

    double slope1 = (y2 - y1) / (x2 - x1);
    double slope2 = (y3 - y2) / (x3 - x2);
    
    if(slope1 == slope2){
        cout << "All the three points lie on one straight line.";
    }
    else{
        cout << "All the three points donot lie on one straight line.";
    }
    return 0;
}



// 9
#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;

    if(ch>=97 && ch<=122 || ch>=65 && ch<=90){
        cout<<ch<<" is a alphabet";
    }
    else if(ch>=48 && ch<=57){
        cout<<ch<<" is a digit";
    }
    else{
        cout<<ch<<" is a special character";
    }
    return 0;
}



// 10
output: value of b and c are respectively 300 and 200