class Solution {
  public:
    vector<int> getDigitDiff1AndLessK(vector<int>& arr, int k) {
       vector<int>arr2;
        for(int i=0;i<arr.size();i++){
           int flag=0;
           int p=arr[i];
           vector<int>arr1;
            if(arr[i]<k && arr[i]>9){
                while(p!=0){
                    arr1.push_back(p%10);
                    p=p/10;
                }
                for(int j=0;j<arr1.size()-1;j++){
                    if(abs(arr1[j]-arr1[j+1])!=1){
                        flag=1;
                        break;
                    }
                }
                
                if(flag==0){
                    arr2.push_back(arr[i]);
                }
            }
        }
        return arr2;
    }
};