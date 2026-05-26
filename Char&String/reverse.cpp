#include<iostream>
#include<cstring>
using namespace std;
void reverse(char word[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(word[start],word[end]);
        start++;
        end--;
    }
    cout<<"reverse of word is"<<word;
}
int main(){
    char word[]="code";
reverse(word,strlen(word));

return 0;
}