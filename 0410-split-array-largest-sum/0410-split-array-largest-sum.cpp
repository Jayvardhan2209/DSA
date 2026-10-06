class Solution {
public:
    bool valid(vector<int>& arr,int m,int maxval){
        int tar =0;
        int a = 1;
        for(int i =0;i<arr.size();i++){
            if(tar+arr[i] <= maxval){
                tar += arr[i];
            }
            else{
                a++;
                tar = arr[i];
            }
        }
        return a<=m?true:false;
    }
    int splitArray(vector<int>& nums, int k) {
        int sum =0;
        int maxval =0;
        for(int i =0;i<nums.size();i++){
            sum += nums[i];
            maxval = max(maxval,nums[i]);
        }
        int st = maxval;
        int end = sum;
        int ans;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(valid(nums,k,mid)){
                ans = mid;
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return ans;
        
    }
};