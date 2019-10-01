#include<iostream>
using namespace std;
int main(int args, char** argv){
    int n,nsp,nst,csp,cst,r;
    cin>>n; //input taken
    nsp=n-1;// decrement
    nst=1; 
    for (r=1;r<=n;r++){
        
        for(cst=1;cst<=nst;cst++){
            cout<<"*";//print *
        }
        cout<<endl;//next line plox
        nst++;// addition to the nst
        nsp--;// decrememtn to the nsp
    }
    
    return 0;
}
/*
Output:
*
**
***
****
*****
*/
