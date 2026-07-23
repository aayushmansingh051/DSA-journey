#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool ValidAnagram(string s, string t){
    unordered_map<char , int>freq;
    for(int i=0;i<s.size();i++){
        if(freq.count(s[i])){
            freq[s[i]]++;
        }
        else{
            freq[s[i]]=1;
        }
    }
    // step 2 for another string if same letter exists than minus
    for(int i=0;i<t.size();i++){
        if(freq.count(t[i])){
            freq[t[i]]--;
            if(freq[t[i]]==0){
                freq.erase(t[i]);
            }
        }
        else{
            return false;
        }
    }
    return freq.empty();
    }
int main() {
    string s = "listen";
    string t = "silent";

    if(ValidAnagram(s, t)) {
        cout << "Valid Anagram!" << endl;
    } else {
        cout << "Not an Anagram!" << endl;
    }
}