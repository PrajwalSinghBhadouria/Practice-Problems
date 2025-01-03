int countSubarrays(vector<int> &arr, int k) {
        // code here
        map<int,int> mp;
        int prefix_sum = 0;
        int count=0;
        mp[0]=1;
        for(int i=0; i<arr.size(); i++){
            prefix_sum += arr[i];
            if(mp.find(prefix_sum-k) != mp.end()){
                count += mp[prefix_sum-k];
            }
                mp[prefix_sum]++;
            
        }
        return count;
    }
