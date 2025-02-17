#include<bits/stdc++.h>
using namespace std;


void bangle(long long n){
    
    if(n == 0){
        return;
    }

    if(n / 10000000){
        bangle(n / 10000000);
        cout<< " kuti";
        n %= 10000000;
    }
    if (n / 100000) {
        cout << " " << n / 100000 << " lakh";
        n %= 100000;
    }
    if (n / 1000) {
        cout << " " << n / 1000 << " hajar";
        n %= 1000;
    }
    if (n / 100) {
        cout << " " << n / 100 << " shata";
        n %= 100;
    }
    if (n > 0) {
        cout << " " << n;
    }


}



int main(){
    long long input = 0;
    int caseNo = 1;
    while(cin>>input){
        cout<<caseNo++<<".";
        if(input == 0){
            cout<<'0';
        }else{
            bangle(input);
        }
        cout<<endl;
    }
}