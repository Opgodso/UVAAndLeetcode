#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
#include<sstream>
using namespace std;


int FindHouseDistance(vector<int>house){
    sort(house.begin(),house.end());
    int n = house.size();
    int median = house[n / 2];
    int totalDistance = 0;
    for(int pos : house){
        totalDistance += abs(pos - median);
    }
    return totalDistance;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string line;
        getline(cin,line);

        stringstream ss(line);
        int n;
        ss >> n;
        vector<int>house(0);
        int pos = 0;
        while(house.size() < n && ss >> pos){
            house.push_back(pos);
            cout<<"test";
        }
        cout<<FindHouseDistance(house)<<endl;
    }

}