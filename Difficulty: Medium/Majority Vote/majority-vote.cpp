//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) {
        // Your code goes here.
        int n=nums.size();
        vector<int>ans;
        map<int, int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        float range=(float)n/3;
        for(auto it=mp.begin(); it!=mp.end();++it){
            if(it->second>range){
                ans.push_back(it->first);
            }
        }
        if(ans.empty()){
            ans.push_back(-1);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends