#include<bits/stdc++.h>
using namespace std;

bool algo(long long input){
    if(input % 11 == 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    long long input = 0;
    while(cin>>input && input!=0){
        if(algo(input) == true){
            cout<<input<<" is a multiple of 11."<<endl;
        }else{
            cout<<input<<" is not a multiple of 11."<<endl;
        }
    }
}