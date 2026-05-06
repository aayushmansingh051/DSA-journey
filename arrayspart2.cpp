/*                          subaaray;                                    *//*


#include<iostream>
using namespace std;
int printsubarray(int *arr,int n){
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
           // cout<<"("<<start<<","<<end<<")";
           for(int i=start;i<=end;i++){
            cout<<arr[i];

           }
        
      cout<<",";
    }
    cout<<endl;
}

}
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;

 cout<<printsubarray(arr,n);
 return 0;
}*/
                           /*MaxSub array Sum  O(n^2)*//*
#include<iostream>
using namespace std;
int maxsubarraySum(int *arr,int n){
    int maxsum= INT8_MIN;
    for(int start=0;start<n;start++){
        int currsum=0;
        for(int end=start;end<n;end++){
            currsum+=arr[end];
             maxsum=max(currsum,maxsum);
    }
   
}
 cout<<maxsum;
}

int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxsubarraySum(arr,n);
} */
                                                
                           /*Kandane's Algorithum(DP)*//*
#include<iostream>
using namespace std;
int maxsubarraySum(int *arr,int n){
    int maxsum= INT8_MIN;
    int currsum=0;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
       
        if(currsum<0){
           currsum=0;
             maxsum=max(currsum,maxsum);
       }
           
    }
  
   

 cout<<maxsum;
}

int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxsubarraySum(arr,n);
}*/

                                                       /*BUY sell stock*//*      //COPILOT
#include<iostream>
#include<climits>
using namespace std;

int maxprofit(int *price, int n) {
    int bestbuy = INT_MAX;
    int maxprofit = 0;

    for(int i = 0; i < n; i++) {
        bestbuy = min(bestbuy, price[i]);                      // Keep track of lowest price so far
        int currprofit = price[i] - bestbuy;                  // Profit if sold today
        maxprofit = max(maxprofit, currprofit);              // Track max profit possible
    }          

    cout << "Maximum profit is: " << maxprofit << endl;
    return maxprofit;
}

int main() {
    int price[] = {7,6,5,4,3,2};
    int n = sizeof(price) / sizeof(price[0]);          
    maxprofit(price, n);
}*/

                                               /* Apna college *//*


#include<iostream>
#include<climits> // for INT_MAX
using namespace std;

int maxprofit(int *price, int n){
    int bestbuy[n];
   bestbuy[0] = INT_MAX;
    for(int i = 1; i < n; i++){
        bestbuy[i] = min(bestbuy[i-1], price[i-1]); 
        cout << bestbuy[i] <<","<< endl; 
}
int maxprofit=0;
for(int j= 0; j< n; j++){
    int currprofit= price[j]-bestbuy[j];
     maxprofit= max(currprofit,maxprofit);
}
cout<<"the maximum profit is: "<<maxprofit;
}


int main(){
    int price[] = {7,1,5,3,6,4};
    int n = 5;
    maxprofit(price, n);
    return 0;
}*/                     
   
                              /*TRAPING Rain Water*//*
#include<iostream>
#include<climits>
using namespace std;
int trap(int *height, int n){
    int leftmax[n],rightmax[n];
   leftmax[0]=height[0];
   rightmax[n-1]=height[n-1];
    for(int i=1;i<n;i++){
        leftmax[i]=max(leftmax[i-1],height[i-1]);
        //cout<<"the lest maximum is: "<<leftmax[i];
    }
    
    for(int i=n-2;i>0;i--){
        rightmax[i]=max(rightmax[i+1],height[i+1]);
       // cout<<"the right maximum value is: "<<rightmax[i];
        
        
    }
    int trapwater=0;
    for(int i=0;i<n;i++){
        trapwater+=max(0, min(leftmax[i],rightmax[i])-height[i]);
         
    }
    cout<<trapwater;
}



int main(){
    int height[]={4,2,0,6,3,2,5};
    int n=sizeof(height)/sizeof(int);
     trap(height, n);

}*/