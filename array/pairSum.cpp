#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    vector<vector<int>> ans;
    int n = arr.size();
    sort(arr.begin() , arr.end());
    int lo = 0,hi = n - 1;
    int l = 0;
    for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(arr[i]+arr[j]==s)  
               ans.push_back(vector<int>{min(arr[i],arr[j]),max(arr[i],arr[j])}); 
       }
   }
   sort(ans.begin(),ans.end());
   return ans;
}
