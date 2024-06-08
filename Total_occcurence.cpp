#include<iostream> 
#include <vector>
using namespace std;
int firstOCC(vector<int>& arr,int n,int k )
{
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int ans=-1;
    while(start<=end){
    if(arr[mid]==k){
        ans=mid;
        end=mid-1;

    }
    else if (arr[mid]>k){
        end=mid-1;

    } else {
        start = mid + 1;
    }

    mid = (start + end) / 2;
    }
    return ans;
}


int LastOCC(vector<int>& arr,int n,int k )
{
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=(start+end)/2;
    while(start<=end){

    
    if(arr[mid]==k){
        ans=mid;
        start=mid+1;

    }
    else if (arr[mid]>k){
        end=mid-1;

    } else {
        start = mid + 1;
    }

    mid = (start + end) / 2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int> p;
    p.first=firstOCC(arr,n, k );
    p.second=LastOCC(arr, n,k );
    return p;
}
int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5};
    int k = 2;
    pair<int, int> result = firstAndLastPosition(arr, arr.size(), k);
    cout << "First occurrence of " << k << " is at index " << result.first << endl;
    cout << "Last occurrence of " << k << " is at index " << result.second << endl;
    int a=result.second-result.first+1;
    cout<<"the Total occurence"<<a;
    return 0;
}
