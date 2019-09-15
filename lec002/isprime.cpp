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

int main(int args, char** argv){
    int n,i,flag=0;
    cout<<"Enter a number";
    cin>>n;
    cout<<endl;
    for (i=2;i<floorSqrt(n);i++){
        if (n%i==0){
            flag=1;
            break;
        }
        else flag=0;
    }
    if(flag==1) cout<<"Not prime";
    else cout<<"Prime";
}
