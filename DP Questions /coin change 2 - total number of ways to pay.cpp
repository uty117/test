//You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

//Return the number of combinations that make up that amount. If that amount of money cannot be made up by any combination of the coins, return 0.


Input: amount = 5, coins = [1,2,5]
Output: 4
Explanation: there are four ways to make up the amount:
5=5
5=2+2+1
5=2+1+1+1
5=1+1+1+1+1
    //dp mein hum 0 ko pay se 5 ko pay krne ke kitne tarike h vo store kar rahe h 
//created an dp of all amount from 0 to 5 in above case and cal culated the ways to pay from starting 
//for 0 there will be alaways one way and after that we evalute for all 



int change(int amount, vector<int>& coins) {
      
      vector<int> res(amount+1);
      res[0]=1;
      int n=coins.size();
      for(int i=0;i<n;i++){
        for(int j=coins[i];j<amount+1;j++){
          res[j]+=res[j-coins[i]];
          
        }
        
      }
      return res[amount];
        
    }


