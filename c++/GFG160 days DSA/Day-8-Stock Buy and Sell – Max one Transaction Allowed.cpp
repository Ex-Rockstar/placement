
class Solution : public {
int maximumProfit(vector<int> &a) {
        int n= a.size();
        int profit=0;
        int buy=a[0];
        for(int i=1;i<n;i++){
            if(a[i]<=buy){
            buy = a[i];
            }
            else{
                profit=max(profit,a[i]-buy);
            }
        }
        // code here
        return profit;
    }
};