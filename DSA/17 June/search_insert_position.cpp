#include <vector>
using namespace std;

class Solution {
public:
    int binarySearch(vector<int> arr, int low,int high, int target){
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;

            if(arr[mid]==target){
                ans=mid;
                break;
            }
            else if(arr[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
                ans=low;
            }
        }
        return ans;
    }
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums, 0, nums.size()-1, target);
    }
};