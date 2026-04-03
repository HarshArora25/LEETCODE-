class Solution {
public:
    int numberOfWays(string corridor) {
        int n=corridor.size();
        vector<int>seatpos;
        long long M=1e9 +7;
        for(int i=0;i<n;i++){
            if(corridor[i]=='S')
            seatpos.push_back(i);
        }
        if( seatpos.size() ==0 || seatpos.size() %2 !=0 )
        return 0;
        
        long long result=1;
        // int prev_ind=seatpos[1];
        for(int i=2;i<seatpos.size();i+=2){
          int gap = seatpos[i] - seatpos[i - 1];
            result = (result * gap) % M;
        }
        return result;
    }
};