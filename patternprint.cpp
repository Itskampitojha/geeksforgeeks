class Solution{
public:
    vector<int> pattern(int N){
        // code here
vector<int> ans;
        int n=N;
        while(n>0)
        {
            ans.push_back(n);
            n=n-5;
        }
        while(n<=N){
         
            ans.push_back(n);
               n=n+5;
        }
        return ans;
    }
};
