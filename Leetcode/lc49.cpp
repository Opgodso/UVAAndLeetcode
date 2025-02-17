#include<bits/stdc++.h>
using namespace std;


vector<vector<string>>groupAnagrams(vector<string>&strs){
    unordered_map<string,vector<string>> algomap;
    vector<vector<string>>ans;
    int n = strs.size();
    for(int i = 0; i < n; i++){
        string str = strs[i];
        sort(str.begin(),str.end());
        algomap[str].push_back(strs[i]);
    }

    for(auto&pair : algomap){
        ans.push_back(pair.second);
    }
    return ans;
}


int main(){
    vector<string> word = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = groupAnagrams(word);
    for(auto& str : result){
        cout<<"[";
        for(const string&word : str){
            cout<<word<<" ";
        }
        cout<<']';
    }
}