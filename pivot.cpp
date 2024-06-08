#include<iostream>
#include<vector>
using namespace std;
int pivotIndex(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        
        while(start<end){
        	int mid=(start+end)/2;
            if(nums[mid]>nums[0]){
                start=mid+1;
            }else{
                end=mid;
       
            }
             

        }
    return start;
}
int main(){
    vector<int> nums= {8,10,17,1,3};
    int  result=pivotIndex(nums);
    cout<<"pivot index"<<result;
    return 0;

}
