class Solution {
public:

    // void setrow(vector<vector<int>> &matrix,int n,int m,int i){
    //     for(int j=0;j<m;j++)
    //     {
    //         if(matrix[i][j]!=0)
    //         {
    //             matrix[i][j]=-1;
    //         }
    //     }
    // }

    // void setcolumn(vector<vector<int>> &matrix,int n,int m,int j)
    // {
    //     for(int i=0;i<n;i++)
    //     {
    //         if(matrix[i][j]!=0)
    //         {
    //             matrix[i][j]=-1;
    //         }
    //     }
    // }

   

    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();


        // int row[n];
        // for(int i=0;i<n;i++)
        // {
        //     row[i]=0;
        // }
        
        // int column[m];
        // for(int i=0;i<m;i++)
        // {
        //     column[i]=0;
        // }

        int col0=1;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;

                    if(j==0)
                    col0=0;
                    else
                    matrix[0][j]=0;
                }
            }
        }

        for(int i=1;i<n;i++){
        for(int j=1;j<m;j++)
        {
            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j]=0;
            }
            
        }
    }

    if(matrix[0][0]==0)
    {
        for(int j=0;j<m;j++)
        {
            matrix[0][j]=0;
        }
    }
    if(col0==0)
    {
        for(int i=0;i<n;i++)
        {
            matrix[i][0]=0;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j];
        }
    }

    }
};
