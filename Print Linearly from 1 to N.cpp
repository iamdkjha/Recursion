#include<bits/stdc++.h>
using namespace std;

// Ques: Print Linearly from 1 to N.
void linear(int i, int n){
    
    if(i>n){
        return;
    }
    cout<<i<<endl;
    i+=1;
    linear(i,n);
    
}


int main(){
    int n,i=1;
    cout<<"Enter the number: ";
    cin>>n;
    // linear(i,n);
    return 0;
}
