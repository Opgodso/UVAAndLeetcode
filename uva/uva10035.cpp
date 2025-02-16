#include<bits/stdc++.h>
using namespace std;


int carryIn(int a, int b){
    if(a == 0 || b == 0){
        return 0;
    }

    string s1 = to_string(a);
    string s2 = to_string(b);
    int n = s1.length();
    int m = s2.length();

    vector<int>number1(n);
    for(int i = 0; i < n; i++){
        int number = a % 10;
        number1[i] = number;
        a/=10;
    }

    vector<int>number2(m);
    for(int i = 0; i < m; i++){
        int number = b % 10;
        number2[i] = number;
        b /= 10;
    }

    int ans = 0;
    while(n > 0 && m > 0){
        if(number1[n-1] + number2[m-1] >= 10){
            ans++;
        }
        n--;
        m--;
    }
    return ans;
}

// int main(){
    
//     int a,b;

//     while(cin >> a >> b && a != 0 && b != 0){
//         int ans = carryIn(a,b);
//         if(ans == 0){
//             cout<<"No carry operation."<<endl;
//         }else{
//             cout<<ans<<" carry operations."<<endl;
//         }
//     }
// }

//更佳的解法

// int diff(int number1, int number2){
//     int carry = 0;
    
//     while(number1 > 0 && number2 > 0){
//         int carr1 = number1 % 10;
//         int carr2 = number2 % 10;
//         if(carr1 + carr2 > 9){
//             carry++;
//         }
//         number1 /= 10;
//         number2 /= 10;
//     }
//     return carry;
// }


// int main(){
//     int a,b;
//     while(cin >> a >> b){
//         if(diff(a,b) == 0){
//             cout<<"No carry operation."<<endl;
//         }else{
//             cout<<diff(a,b)<<" carry operations."<<endl;
//         }
//     }
// }

// 字串解法

// int diff(string number1,string number2){
//     int n = number1.length();
//     int m = number2.length();
//     int maxlen = max(n,m);
//     string stringnumber1 = string(maxlen - n, '0') + number1;
//     string stringnumber2 = string(maxlen - m, '0') + number2;
//     int carry = 0;
//     int ans = 0;
//     for(int i = maxlen; i >= 0; i--){
//         int digit = (stringnumber1[i] - '0') + (stringnumber2[i] - '0');
//         if(digit + carry >= 10){
//             carry = 1;
//             ans += 1;
//         }
//     }
//     return ans;
// }


// int main(){
//     string number1,number2;
//     while(cin >> number1 >> number2){
//         if(diff(number1,number2) == 0){
//             cout<<"No carry operation."<<endl;
//         }else{
//             cout<<diff(number1,number2)<<" carry operations."<<endl;
//         }
//     }
// }