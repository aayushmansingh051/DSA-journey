/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int i=2;
    while(i<=n-1){
        if(n%i==0){
        cout<<"the number is not  prime";
}else{
   cout<<"the number is prime";
}
break;
    i++;
    }
    return 0;


                                #PATTERNS
1} 1234
  1234
  1234
  1234
  
   #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of lines";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j;
            
        }
        cout<<"\n";
        
    }
    return 0;

2)


}*//* ABCD
      ABCD
      ABCD
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of lines";
    cin>>n;
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=n;j++){
            cout<<ch;
            ch++;            
            
            
        }
    
        cout<<"\n";
      
        
    }
    return 0;
}*/ 


    /*ABC
     DEF
     GHI
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of lines";
    cin>>n;
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<ch;
            ch++;            
            
            
        }
    
        cout<<"\n";
      
        
    }
    return 0;
}*/


/*
1
21
321
4321
54321

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of lines";
    cin>>n;
    
    for(int i=0;i<n;i++){
    for(int j=i+1;j>0;j--){
            cout<<j;
                       
            
            
        }
    
        cout<<"\n";
      
        
    }

    return 0;
}
*/

 /*1   
   23
   456
   5678*

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of lines";
    cin>>n;
    int num =1;
    for(int i=0;i<n;i++){
        
    for(int j=1;j<=i;j++){
            cout<<num;
            num++;
                       
            
            
        }
    
        cout<<"\n";
      
    }

    return 0;
}


/*enter number of lines4 



0000
 111
  22
   3*

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of lines";
    cin>>n;
    
    for(int i=0;i<n;i++){
    for(int j=1;j<=i;j++){
            cout<<" ";  
        }
        for(int j=1;j<=n-i;j++){
            cout<<i;
        }
    
        cout<<"\n";
      
        
    }

    return 0;
}



*//*n121
    12321
  1234321
 123454321
12345654321*/

/*#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number of lines: ";
cin>>n;
for(int i=1;i<=n;i++){

    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<j;
    }
    for(int j=i+1;j>0;j--){
        cout<<j;

    }
    cout<<"\n";
}

    return 0;
}*//**

sam 1
   121
  12321
 1234321
123454321*/
/*
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Printing spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Printing increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
          // Printing decreasing numbers
        for (int j = i-1; j >0; j--) {
            cout << j;
        }
        cout << endl;
    }
    

cout<<"\n";

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Printing spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Printing increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
          // Printing decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
    

cout<<"\n";

    return 0;
}*/

/*
(0,0)(0,1)(0,2)(0,3)(0,4)
(1,1)(1,2)(1,3)(1,4)
(2,2)(2,3)(2,4)
(3,3)(3,4)
(4,4)*//*

#include<iostream>
using namespace std;
int main(){
int n=5;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        cout<<"("<<i<<","<<j<<")";
    }
    cout<<"\n";
}

}*/

/*
****
*  *
*  *
****
*//*
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==0||j==0||i==3||j==3){
                cout<<"*";
                
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
}*//*
5
5 4
5 4 3             
5 4 3 2
5 4 3 2 1
*//*

#include<iostream>
using namespace std;
int main(){
    for(int i=5;i>=1;i--){
        for(int j=5;j>=i;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
 *//*
5         i=5 column, 
4 5       i=4
3 4 5     i=3
2 3 4 5   i=2         
1 2 3 4 5 i=1 
 *//*

#include<iostream>
using namespace std;
int main(){
    for(int i=5;i>=1;i--){   column wise pattern change ho raha hai 5 se chalu aur 1 tak ja raha h(decrease)
        for(int j=i;j<=5;j++){   //i se start aur 5 tak ja raha hai (increase)
            cout<<j<<" ";
        }
        cout<<endl;
    }
}*/
/*
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5*//*
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}*/
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int j=i;j>=1;j--){
            cout<<j;
        }
  cout<<endl;
    }
   
}