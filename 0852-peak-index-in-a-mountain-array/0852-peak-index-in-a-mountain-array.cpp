class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = arr.size()-1;//s = 2
        int i =0,index =0;
        int max = 0;
        while(i<=s)//i =0 i=1
        {
            if(arr[i]>max){
                max = arr[i];
                index= i;
            }
            i++;

        }
        return index;
        
    }
};