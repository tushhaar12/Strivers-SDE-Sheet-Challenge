#include<bits/stdc++.h> 

//TC - O(N) + O(N)
//SC -> O(N) + O(N)
int largestRectangle(vector < int > & heights) {
   // Write your code here.
    int n = heights.size();
    stack<int> st;
    int leftSmall[n] ,rightSmall[n];
    for(int i = 0;i < n;i++)
    {
        while(!st.empty() && heights[st.top()] >= heights[i]) st.pop();
        if(st.empty()) leftSmall[i] = 0;
        else leftSmall[i] = st.top() + 1;
        st.push(i);
    }
    
    while(!st.empty()) st.pop();
    
    for(int i = n - 1;i >= 0;i--)
    {
        while(!st.empty() && heights[st.top()] >= heights[i]) st.pop();
        if(st.empty()) rightSmall[i] = n - 1;
        else rightSmall[i] = st.top() - 1;
        st.push(i);
    }
    
    int ans = INT_MIN;
    for(int i = 0;i < n;i++){
        ans = max(ans , (rightSmall[i] - leftSmall[i] + 1)*heights[i]);
    }
    return ans;
 }
