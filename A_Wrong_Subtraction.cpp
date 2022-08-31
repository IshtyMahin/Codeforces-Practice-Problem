#include <bits/stdc++.h>
using namespace std;

int main(){
    long long num, x;
    cin>>num>>x;

    for(int i =0 ; i<x;i++){
        if(num%10 == 0 ){
            num = num/10;
        }
        else{
            num = num -1;
        }
    }
    cout<<num;
    return 0;
}