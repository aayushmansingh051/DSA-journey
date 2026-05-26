/*The year 2000 is a leap year because it is divisible by 400. 
The year 1900, despite being divisible by 4, is not a leap year since it is also divisible by 100. 
The year 2024 qualifies as a leap year because it is divisible by 4 but not by 100. 
*//*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
     if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)) {

        cout<<"leap year";
    }
    else{
        cout<<"non leap year";
    }
}*/


                 /*Armstrong*//*
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter the number";
    cin>>n;
     int original=n;
    while(n>0){
        int ld=n%10;
        n=n/10;
       sum+=pow(ld,3);
       
    }
    
    if(sum==original){
        cout<<"Armstrong ";
    }else{
        cout<<"non Armstrong no.";
    }
    cout<<sum;
} */


                         /*FIZZBUZZ*/
                    
/**#include<iostream>
using namespace std;

void fizzBuzzAddition(int n) {
    int count3 = 0, count5 = 0; // Counters for 3 and 5

    for(int i = 1; i <= n; i++) {
        count3++; 
        count5++;

        if(count3 == 3 && count5 == 5) {
            cout << "FizzBuzz\n";
            count3 = 0; // Reset counter   WE reset because If we don’t reset count3 after reaching 3:- It becomes 4 on the next step, then 5, 6, etc.- We would never reach exactly 3 again,

            count5 = 0;
        }
        else if(count3 == 3) {
            cout << "Fizz\n";
            count3 = 0; // Reset counter
        }
        else if(count5 == 5) {
            cout << "Buzz\n";
            count5 = 0; // Reset counter
        }
        else {
            cout << i << "\n"; // Print number
        }
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    fizzBuzzAddition(num);
}**/
#include<iostream>
using namespace std;
void Reverse(int n){
    int original=n,y=0;
  while(n>0){
    int ld=n%10;
   
    y=y*10+ld;
      n=n/10;
    if(y==original){
        cout<<"the no. is palindrome";
    }else{
cout<<"the number is not palindrome";
        }
    }
    }

int main(){
    int x=123321;
    Reverse(x);
    return 0;
}