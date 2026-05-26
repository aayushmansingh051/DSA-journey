                                                            /*Decimal To binary*/
/*#include<iostream>
using namespace std;
int decTobinary(int decNum){
    int ans=0,Pow=1;
    while(decNum>0){
        int rem=decNum%2;
        decNum=decNum/2;
        Pow *=10;
        ans+=rem*Pow;
         

    }
    return ans;


}

int main(){
    
    cout<<"binary number is: "<<decTobinary(6);
        
    
 return 0;
}*/


                                                                        /* Binary To Decimal*/

 #include<iostream>
 using namespace std;
 int binaryTodec(int binary){
    int ans=0,pow=1;
    while(binary>0){
    int rem= binary%10;
    binary=binary/10;
    pow*=2;
    ans+=rem*pow;}
     return ans;
 }


    int main(){
        int n;
        cout<<"enter the number";
        cin>>n;

        cout<<"Binary To Decimal is: "<<binaryTodec(n);
        return 0;
    }

                                                                       