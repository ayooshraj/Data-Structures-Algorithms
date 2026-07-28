class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int> ans;
        int temp;
        int count=0;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){
                if(arr[i]<=target && i!=j){
                    temp=arr[i]+arr[j];
                    if(temp==target){
                        ans.push_back(i);
                        ans.push_back(j);
                        count++;
                        break;
                    }
                }else if(arr[i]<0){
                    if(arr[i]>=target && i!=j){
                    temp=arr[i]+arr[j];
                    if(temp==target){
                        ans.push_back(i);
                        ans.push_back(j);
                        count++;
                        break;
                    }
                }
                }
            }
            if(count>0){
                break;
            }
        }
        return ans;
        
    }
};