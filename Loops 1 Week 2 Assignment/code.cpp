// 1
#include<iostream>
using namespace std;

int main()
{
   for(int i=1;i<=100;i+=2){
      cout<<i<<" ";
   }
   return 0;
}



// 2
#include<iostream>
using namespace std;

int main()
{
   for(int i=1;i<=100;i++){
      if(i%3==0){
         cout<<i<<" ";
      }
   }
   return 0;
}



// 3
#include<iostream>
using namespace std;

int main()
{
   int n;
   cout<<"Enter a number : ";
   cin>>n;
   for(int i=1;i<=10;i++){
      cout<<n<<" * "<<i<<" = "<<n*i<<endl;
   }
   return 0;
}



// 4
#include<iostream>
using namespace std;

int main()
{
   int n;
   cout<<"Enter a number : ";
   cin>>n;
   for(int i=4;i<=n;i+=3){
      cout<<i<<", ";
   }
   return 0;
}



// 5
#include<iostream>
using namespace std;

int main()
{
   int n;
   cout<<"Enter a number : ";
   cin>>n;
   for(int i=3;i<=n;i*=4){
      cout<<i<<", ";
   }
   return 0;
}



// 6
#include<iostream>
using namespace std;

int main()
{
   int n=97;
   while(n<=122){
      cout<<(char)n<<" "<<n<<endl;
      n++;
   }
   return 0;
}