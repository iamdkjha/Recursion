#include<bits/stdc++.h>
using namespace std;

// Ques: Print Name 5 times using Recursion.
void five_name(int n){
    
    if(n<1){
        return;
    }
    cout<<"Diwakar"<<" ";
    n--;
    five_name(n);
}


int main(){
    int n,i=1;
    cout<<"Enter the number: ";
    cin>>n;
    five_name(n);
    return 0;
}
