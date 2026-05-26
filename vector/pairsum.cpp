/*Linear Approach in sorted array*/
/*#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int> arr, int target) {
    int start = 0, end = arr.size() - 1;
    vector<int> ans;

    while (start < end) {
        int currsum = arr[start] + arr[end];
        if (currsum == target) {
            ans.push_back(start);
            ans.push_back(end);
            return ans;  // Early return upon finding a pair
        } else if (currsum < target) {
            start++;
        } else {
            end--;
        }
    }
    return ans;  // Return empty if no pair is found
}

int main() {
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = pairsum(vec, target);

for(int index:result){
    cout<<index<<" ";
}
}*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int>vec,int key){
    int start=0;
    int end=vec.size()-1;
    int currsum=0;
    vector<int> ans;
    while(start<end){
        currsum=vec[start]+vec[end];
        if(currsum==key){
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if(currsum<key){
            start++;
        }
        else{
            end--;
        }
    }
    return ans;
}
int main(){
    vector<int> vec={2,3,4};
    int key=6;
    vector<int> result=pairsum(vec,key);
    for(int index:result){
        cout<<index;
    }

}