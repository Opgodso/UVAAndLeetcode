#include<bits/stdc++.h>

using namespace std;


int algo(int num){
    int ans = 1;
    while(num != 1){
        if(num % 2 == 1){
            num = 3 * num + 1;
        }else{
            num = num / 2;
        }
        ans++;
    }
    return ans;
}


int main(){
    int num1, num2;
    while(cin >> num1 >> num2){
        int start = min(num1,num2);
        int end = max(num1,num2);

        int max_cycle = 0;
        for(int i = start; i < end; i++){
            max_cycle = max(max_cycle,algo(i));
        }
        cout << num1 << " " << num2 << " " << max_cycle << endl;
    }
}