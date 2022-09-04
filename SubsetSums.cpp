//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void SubsetsumHelper(int idx,vector<int>& arr,int n,vector<int> &ans,int sum)
    {
        if(idx==n)
        {
            ans.push_back(sum);
            
            return;
        }
        SubsetsumHelper(idx+1,arr,n,ans,sum+arr[idx]);
        SubsetsumHelper(idx+1,arr,n,ans,sum);
    }
    public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>ans;
        SubsetsumHelper(0,arr,N,ans,0);
        sort(ans.begin(),ans.end());
        return ans;
        // Write Your Code here
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends