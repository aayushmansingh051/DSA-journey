/*                                                     practice      / *
#include<iostream>
using namespace std;
int printhello(){
    cout<<"jai shree ram\n";
    return 78;
}
using namespace std;
int main(){
int val=printhello();
cout<<"value= "<<val<<"\n";

return 0;

}
*/

/*                                          sum
#include<iostream>
using namespace std;
int sum(int a, int b){
    int s=a+b;
 cout<<s;

}
int main(){
    int x,y;
    cout<<"enteer the value of x";
    cin>>x;
    cout<<"enteer the value of y";
    cin>>y;
    sum(x,y);
return 0;
}/* 
/*                               MINIMUM OF TWO NUMBERS*//*
#include<iostream>
using namespace std;
int minoftwo(int a,int b){
    if(a<b){
        cout<<"a is minium: "<< a;
    }else{
        cout<<"b is minium: "<< b;
    }
}
int main(){
    int x,y;
    cout<<"enter the value of x: ";
    cin>>x;
     cout<<"enter the value of y: ";
    cin>>y;

    minoftwo(x,y);
    return 0;
}
*/


                    /* sum of numbers
#include<iostream>
using namespace std;
int sumN(int n){
    int x=0;
    for(int i=1;i<=n;i++){
      x+=i;
    }
    return x;


}
int main(){
    cout<<"sum of 90 numbers is: "<<sumN(90);
    return 0;
}*/

                           /*Factorial*/
/*                    
#include<iostream>
using namespace std;
double FACTORIAL(double n){
    int fact=1;
    for(int i=1;i<=n;i++){
      fact*=i;
    }
    return fact;


}
int main(){
    cout<<"factorial of number is: "<<FACTORIAL(5);
    return 0;
}*/

  

                    /*SUm of digits*/
/*
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
int sum=0;
for(int i=1; i>=0;i++){
int y=n%10;
   n=n/10;
   sum+=y;
}
cout<<sum;
return 0;
}*/
                                 /*using Functions sum of digit*/
/*#include<iostream>
using namespace std;
int sumofdigit(int n){
    int sum=0;
    for(int i=1;i>=0;i++){
        int ld=n%10;
        n=n/10;
        sum+=ld;

    }
   cout<<sum;
}

    int main(){
        sumofdigit(10000);
    

        return 0;
    }*/



                          /*HW*/
/*
  #include<iostream>
  using namespace std;
  int main(){
    int n;
    cout<<"enter the value: \n";
    cin>>n;
for(int i=2;i<=n-1;i++){
    if(n%i!=0){
        cout<<" prime number ";
    }
    else{
        cout<<" non prime";

    }
    break;
}
return 0;
  }*/


                               /*Even numbers*/
                               /*
  #include<iostream>
  using namespace std;
  int evennum(int n){
    for(int i=2;i<=n;i+=2){
        cout<<i<<" ";
    }
     
  }
    
    int main(){
        cout<<"even numbers are: "<<evennum(50);


        return 0;
    }*/


                                                  /*ncr combination*//*
#include<iostream>
using namespace std;
double FACTORIAL(double num){
    int fact=1;
    for(int i=1;i<=num;i++){
      fact*=i;
    }
    return fact;
}
    double ncr(double n, double r){
return FACTORIAL(n)/FACTORIAL(r)*FACTORIAL((n- r));
    
    
    

    }

int main(){
    int n,r;
    cout<<"enter the values n: ";
    cin>>n;
        cout<<"enter the values r: ";
    cin>>r;
    cout<<"combination of number is: "<<ncr(n,r);
    return 0;
}
*/

#include<iostream>
using namespace std;
int decTobinary(int decNum){
    int ans=0,Pow=1;
    while(decNum>=0){
        int rem=decNum%2;
        decNum=decNum/2;
        ans+=rem*Pow;
         Pow*=10;

    }
    return ans;


}

int main(){
    cout<<"binary number is: "<<decTobinary(6);
        
    
 return 0;
}