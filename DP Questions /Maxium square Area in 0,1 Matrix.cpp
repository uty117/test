
//So in applying DP we use 3 steps :
//1.Storage 
//2.Decide the shortest problem and Longest Problem area 
//3.Travel Process 

//so our dp will store the area of that cell as the top left cell of the square
//and for last n-1,m-1 cell the value will be its orginal value 
//and for last row and last cloumn orginal value will the biggest area by that top left cell sqaure 
//now for the all other we will take minimum of one step vertical, one step horizontal and one step diagonal  and add current to it 









class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
      
        int n=matrix.size();
        int m=matrix[0].size();
        int ans[n][m];
        int res=0;
        for(int i=n-1;i>=0;i--){
          for(int j=m-1;j>=0;j--){
            
            if(i==n-1 && j==m-1) {
              if(matrix[i][j]=='0') ans[i][j]=0;
              else ans[i][j]=1;
              
            }else if(i==n-1) {
              if(matrix[i][j]=='0') ans[i][j]=0;
              else ans[i][j]=1;
              
            }else if(j==m-1){
              if(matrix[i][j]=='0') ans[i][j]=0;
              else ans[i][j]=1;
              
            }else {
              if(matrix[i][j]=='0') ans[i][j]=0;
              else{
                int temp=min(ans[i+1][j],ans[i][j+1]);
                temp=min(temp,ans[i+1][j+1]);
                ans[i][j]=temp+1;
              }
            }
            res=max(res,ans[i][j]); 
           
          }    
        }
      return res*res;
        
    }
};