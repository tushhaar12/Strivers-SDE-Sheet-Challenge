// TC -> O(2^n + 2^n(log(2^n)))
// SC -> O(2^n) --> All subsets

// If asked sum of subsets 
void f(int ind, int sum, vector<int> &nums, int n, vector<int> &ans)
{
    if (ind == n)
    {
        ans.push_back(sum);
        return;
    }

    // Pick the current element
    f(ind + 1, sum + nums[ind], nums, n, ans);

    // Not picking the current element
    f(ind + 1, sum, nums, n, ans);
}


// If asked subsets 
void f(int ind,vector<int>&nums,int n,vector<int>&ds,vector<vector<int>>&ans)
{
    if(ind == n)
   {
      ans.push_back(ds);
      return;              
    }

    //Pick the element
    ds.push_back(nums[ind]);
    f(ind + 1,nums,n,ds,ans);
    ds.pop_back();

    //Not Pick the element
    f(ind + 1,nums,n,ds,ans);
 }

vector<int> subsetSum(vector<int> &nums)
{
    vector<int> ans;
    int n = nums.size();
    f(0, 0, nums, n, ans);
    sort(ans.begin(), ans.end());
    return ans;
}
