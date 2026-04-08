class Solution {
public:
        void nsel(int n,stack<int>st,vector<int>&nse,vector<int>& nums){
            for(int i=n-1;i>=0;i--){
                while(!st.empty() && nums[st.top()]>=nums[i]){
                    st.pop();
                }
                if(st.empty())
                nse[i]=n;
                else
                nse[i]=st.top();
                st.push(i);
            }
        }

              void psel(int n,stack<int>st,vector<int>&pse,vector<int>nums){
            for(int i=0;i<n;i++){
                while(!st.empty() && nums[st.top()]>nums[i]){
                    st.pop();
                }
                if(st.empty())
                pse[i]=-1;
                else
                pse[i]=st.top();
                st.push(i);
            }
              }
            void ngel(int n,stack<int>st,vector<int>&nge,vector<int>& nums){
            for(int i=n-1;i>=0;i--){
                while(!st.empty() && nums[st.top()]<=nums[i]){
                    st.pop();
                }
                if(st.empty())
                nge[i]=n;
                else
                nge[i]=st.top();

                st.push(i);
            }
        }
           void pgel(int n,stack<int>st,vector<int>&pge,vector<int>nums){
            for(int i=0;i<n;i++){
                while(!st.empty() && nums[st.top()]<nums[i]){
                    st.pop();
                }
                if(st.empty())
                pge[i]=-1;
                else
                pge[i]=st.top();

                st.push(i);
            }
        }
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        stack<int>st;
        vector<int>nse(n),pse(n),nge(n),pge(n);
        nsel(n,st,nse,nums);
        psel(n,st,pse,nums);
        ngel(n,st,nge,nums);
        pgel(n,st,pge,nums);
        long long maxi=0,mini=0;
        for(int i=0;i<n;i++){
            long long  lefts=i-pse[i];
              long long   rights=nse[i]-i;
             long long   leftg=i-pge[i];
             long long   rightg=nge[i]-i;
           
         maxi=maxi+(leftg*rightg*nums[i]);
         mini=mini+(lefts*rights*nums[i]);
        }
        return maxi-mini;
    }
};