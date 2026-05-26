#include<iostream>
#include<cstring>
using namespace std;
void touppercase(char word[],int n){
    for(int i=0;i<n;i++){
   // word[i];
    if( word[i]>='A' &&  word[i]<='Z'){//uppercase
      continue;
    }else{
        word[i]= word[i]-'a'+'A';//lowercase

    }
    
    }
 cout<<word;//not word[i];it actually print individual characters using cout << word[i];,

}
int main(){
 char word[]="ApPle";
 touppercase(word,strlen(word));
 return 0;
}
