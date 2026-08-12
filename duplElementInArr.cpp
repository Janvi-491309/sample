#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int removeDup(vector<int>&nums){
        if(nums.empty())
            return 0;
        int i=0;
        for(int j=1; j<nums.size(); j++){
                if(nums[j]!=nums[i]){
                    i++;
        nums[i]=nums[j];
        }
        }
        return i+1;
        }
        };

int main(){
    vector<int> nums={1,2,3,1,1,2,3,2,3};
    sort(nums.begin(), nums.end());
    Solution sol;
    int k=sol.removeDup(nums);
    cout<<"Unique count:"<<k<<"\n";
    cout<<"After removing duplicates:";
    for(int x=0; x<k; x++){
            cout<<nums[x]<<" ";
    }
    cout<<endl;
}
