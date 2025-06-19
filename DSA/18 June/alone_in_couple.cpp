#include <vector>
using namespace std;

// User function Template for C++

class Solution {
  public:
    int findSingle(vector<int> &arr) {
        // code here
        int x=0;
        for(int i=0;i<arr.size();i++){
            x^=arr[i];
        }
        
        return x;
    }
};