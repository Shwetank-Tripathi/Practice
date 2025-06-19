#include <vector>
using namespace std;

class Solution {
public:
    vector<int> inplaceApproach(vector<int> arr){ //also known as 3 pointer approach or Dutch flag Problem
        int l=0;                        //first pointer
        int m=0;                        //second Pointer
        int h=arr.size()-1;             //Third Pointer
        while(m<=h){                    //traverse using one pointer("m") through loop and checking condition
            if(arr[m]==0){              //parameters l & h will only change when dealing with 0 or 2
                swap(arr[l],arr[m]);    //if the index has element 0 , swap it to the leftmost index
                m++;                    //after swapping move the traversing pointer to the next index
                l++;                    //and also move the leftmost pointer to the next index as this one will have 0 in it now 
            }
            else if(arr[m]==2){
                swap(arr[h],arr[m]);    //if index has element 2 , swap it to the rightMost index
                h--;                    //Lower the value of rightmost pointer 
                //IMP :: Here we won't increase the traversing pointer as we don't know after swapping does we've 0 , if we've 0 then we're gonna again swap it to the left
            }
            else{                       // we'll ignore the index containing 1
                m++;                    //move on
            }
        }
        return arr;
    }
    void sortColors(vector<int>& nums) {
        nums=inplaceApproach(nums);
    }
};