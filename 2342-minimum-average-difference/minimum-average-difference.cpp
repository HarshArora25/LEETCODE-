class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long sum=0;
         long long total=0;
         long long mini=INT_MAX;
        int x=-1,avg=-1;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
        }

        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
           long long leftAvg = sum / (i + 1);
            long long rightAvg = 0;
            if (i != nums.size() - 1)
                rightAvg = (total - sum) / (nums.size()  - i - 1);

           long long diff = abs(leftAvg - rightAvg);
            if (diff < mini) {
                mini = diff;
                x = i;
            }
        }

        return x;
    }
};