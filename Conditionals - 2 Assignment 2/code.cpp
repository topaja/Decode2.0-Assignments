// 1
#include<iostream>
using namespace std;

int main()
{
    int amt;
    cout<<"Enter the amount : ";
    cin>>amt;
    int n1,n2,n5,n10,n20,n50,n100,n200,n500,n2000;
    n1=n2=n5=n10=n20=n50=n100=n200=n500=n2000=0;
    switch(amt>=2000){
        case 1:
            n2000 = amt/2000;
            amt -= 2000*n2000;
    }
    switch(amt>=500){
        case 1:
            n500 = amt/500;
            amt -= 500*n500;
    }
    switch(amt>=200){
        case 1:
            n200 = amt/200;
            amt -= 200*n200;
    }
    switch(amt>=100){
        case 1:
            n100 = amt/100;
            amt -= 100*n100;
    }
    switch(amt>=50){
        case 1:
            n50 = amt/50;
            amt -= 50*n50;
    }
    switch(amt>=20){
        case 1:
            n20 = amt/20;
            amt -= 20*n20;
    }
    switch(amt>=10){
        case 1:
            n10 = amt/10;
            amt -= 10*n10;
    }
    switch(amt>=5){
        case 1:
            n5 = amt/5;
            amt -= 5*n5;
    }
    switch(amt>=2){
        case 1:
            n2 = amt/2;
            amt -= 2*n2;
    }
    switch(amt>=1){
        case 1:
            n1 = amt/1;
            amt -= 1*n1;
    }
    int total = n1+n2+n5+n10+n20+n50+n100+n200+n500+n2000;
    cout<<"total number of notes required : "<<total;   
    return 0;
}



// 2
a = 15, b = 15 , c = 0


// 3
x and y are equal


// 4
First character 1
Second character 49


// 5
Value of t: 0


// 6
N