class Solution {
public:
int minielement(vector<vector<int>>& mat,int row,int col,int s){
     int max=INT_MIN;
     int index =-1;
     for(int i=0;i<row;i++){
            if(mat[i][s]>max){
                max=mat[i][s];
                index=i;
            } 
     }
     return index;

}
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
    int row=mat.size();
    int col=mat[0].size();

    int start=0;
    int end=col-1;
    while(start<=end){
        int mid=(start+end)/2;

        int maxelemet=minielement(mat,row,col,mid);

      
     
        int left= mid-1>=0? mat[maxelemet][mid-1]:-1;
        int right= mid+1<col? mat[maxelemet][mid+1]:-1;
      
    

      
      if(mat[maxelemet][mid]>left && mat[maxelemet][mid]>right){

        return {maxelemet,mid};
      }
      else if(mat[maxelemet][mid]<left){
        end=mid-1;

      }
      else{
        start=mid+1;
      }




    


    }
    return{-1,-1};
    }
};