#include<iostream>
using namespace std;

int floorSqrt(int x) 
{ 
    if (x == 0 || x == 1) 
    return x; 
  

    int i = 1, result = 1; 
    while (result <= x) 
    { 
      i++; 
      result = i * i; 
    } 
    return i - 1; 
} 


int isprime(int n){
    int m=n/2,flag=0,i;
    for(i = 2; i <= m; i++)  
    {  
       if(n % i == 0)  
       {  
             
           flag=1;  
           break;  
       }  
   }  
  if (flag==0)  
      cout <<n<<endl;  
  return 0;  
}

int main(int agrs,char** argv){
    int n,i;
    cout<<"Enter a number upto which primes are to be found: ";
    cin>>n;
    cout<<endl;
    for (i=3;i<=n;i++){
        isprime(i);

    }
     
}