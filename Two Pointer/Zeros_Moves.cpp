
#Leetcode 283 Move Zeroes
# Solve using two pointers
class Solution {
                  public:
                      void moveZeroes(vector<int>& nums) {
                          int l=0;
                  
                          for(int r=0;r<nums.size();r++){
                             if(nums[r]!=0){
                                int temp = nums[l];
                                nums[l]=nums[r];
                                nums[r]=temp;
                                l++;
                             }
                          }
                      }
};
