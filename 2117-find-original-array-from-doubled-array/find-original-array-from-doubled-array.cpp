class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
       int n=changed.size();
       if(n%2 !=0) return {};
       sort(changed.begin(),changed.end());
       vector<int>original;
       unordered_map<int,int>freq;
       for(int i=0;i<n;i++){
        freq[changed[i]]++;
       }
       for(int i=0;i<n;i++){
        if(freq[changed[i]]==0) continue;
        if(freq[2*changed[i]]==0) return {};
        original.push_back(changed[i]);
        freq[changed[i]]--;
        freq[2*changed[i]]--;
       } 
       if(original.size()== n/2) return original;
       else return {};

    }
};