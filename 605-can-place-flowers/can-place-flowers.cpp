// class Solution {
// public:
//     bool canPlaceFlowers(vector<int>& nums, int n) {
//            if (nums.size() == 1) {
//             if (nums[0] == 0 && n <= 1) return true;
//             else return n == 0;
//         }

//             if(nums[0]==0 && nums[1]==0){ nums[0]=1;
//         n--;
//      }
//         if(nums[nums.size()-1]==0 && nums[nums.size()-2]==0){ nums[nums.size()-1]=1;
//         n--;
//      }
//      for(int i=1;i<nums.size()-1 && n>0;i++){
//         // if(n==0) break;
//         if((nums[i-1]==0 && nums[i+1]==0) && nums[i]==0){
//             nums[i]=1;
//             n--;
//         }
//      }   
//     return (n == 0) ? true : false;
//     }
// };
class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {

        // special case: only one plot
        if (nums.size() == 1) {
            if (nums[0] == 0 && n <= 1) return true;
            else return n == 0;
        }

        // check first plot
        if (n > 0 && nums[0] == 0 && nums[1] == 0) {
            nums[0] = 1;
            n--;
        }

        // check middle plots
        for (int i = 1; i < nums.size() - 1 && n > 0; i++) {
            if (nums[i - 1] == 0 && nums[i] == 0 && nums[i + 1] == 0) {
                nums[i] = 1;
                n--;
            }
        }

        // check last plot
        if (n > 0 && nums[nums.size() - 1] == 0 && nums[nums.size() - 2] == 0) {
            nums[nums.size() - 1] = 1;
            n--;
        }

        return (n == 0) ? true : false;
    }
};
