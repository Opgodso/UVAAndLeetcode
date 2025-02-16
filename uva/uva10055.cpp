#include<bits/stdc++.h>

using namespace std;

long long diff(long long Harmy,long long Oarmy ){
    if(Harmy > Oarmy){
        long long temp = 0;
        temp = Harmy;
        Harmy = Oarmy;
        Oarmy = temp;
    }
    long long Diff = abs(Harmy - Oarmy);
    return Diff;
}

int main(){
    long long a , b;
    while(cin >> a >> b){
        cout<<diff(a , b)<<endl;
    }
}