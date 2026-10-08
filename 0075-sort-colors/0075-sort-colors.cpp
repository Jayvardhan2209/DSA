class Solution {
public:
    void sortColors(vector<int>& arr) {
        int s = arr.size();
        for(int i =0;i<s-1;i++)
        {
            for(int j =0;j<s-1-i;j++)
            {
                if(arr[j]>=arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                }
            }
        } 
        
    }
};