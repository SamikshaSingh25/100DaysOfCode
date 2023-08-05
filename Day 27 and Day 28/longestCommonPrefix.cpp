class Solution {
public:
    string longestCommonPrefix(vector<string>& a) {
        int i,j,k,c=0,s=0;
        string ans="";
        char as;

        for(i=0;i<a[0].size();i++){
            as=a[0][i];
            for(j=0;j<a.size();j++){
                if(as!=a[j][i]){
                    return ans;
                }
            }
            ans+=as;
        }
        return ans;
        
    }
};