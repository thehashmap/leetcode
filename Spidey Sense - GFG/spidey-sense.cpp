// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    int row,col;
    bool isSafe(int x,int y){
        if(x<0 || y<0 ||x>=row ||y>=col)return false;
        return true;
    }
    vector<pair<int,int>> directions{{-1,0},{0,-1},{1,0},{0,1}};
    
    void doDamage(int x,int y,int impact,vector<vector<int>> &grid,vector<vector<char> >& matrix){
        if(grid[x][y]==-1){
            grid[x][y]=impact;
        }
        else{
            grid[x][y] = min(grid[x][y],impact);
        }
        
        matrix[x][y] = '#';
        for(pair<int,int> &dir : directions){
            int dx = x+dir.first,dy = y+dir.second;
            if(isSafe(dx,dy) && matrix[dx][dy]=='O' ){
                doDamage(dx,dy,grid[x][y]+1,grid,matrix);
            }
        }
        matrix[x][y] = 'O';
    }
    public:
    vector<vector<int> > findDistance(vector<vector<char> >& matrix, int M, int N) 
    {
        vector<vector<int>> grid(M,vector<int>(N,-1));
        row = M;col=N;
        int open=0,bomb=0;
        queue<pair<int,int>> q;
        for(int i =0;i<M;i++){
            for(int j=0;j<N;j++){
                if(matrix[i][j]=='O')open++;
                if(matrix[i][j]=='B'){bomb++;grid[i][j]=0;q.push({i,j});}
            }
        }
        if(!bomb || !open){
            return grid; 
        }
        while(!q.empty()){
            pair<int,int> cur = q.front();q.pop();
            int x = cur.first,y = cur.second;
            for(pair<int,int> &dir : directions){
                int dx = x+dir.first,dy = y+dir.second;
                if(isSafe(dx,dy) && matrix[dx][dy]=='O'){
                    doDamage(dx,dy,1,grid,matrix);
                }
            }
        }
        return grid;
    } 
};

// { Driver Code Starts.


int main()
{

    int t;
    cin >> t;
    while(t--)
    {
    	int M,N;
        cin>>M;
        cin>>N;

        vector<vector<char> > matrix(M);
        for(int i=0; i<M; ++i)
        {
            matrix[i].resize(N);
            for (int j = 0; j < N; ++j)
                cin>>matrix[i][j];
        }

        vector<vector<int> >result;
        Solution obj;
        result = obj.findDistance(matrix, M,N); 
        for(int i=0; i<M; ++i)
        {
            for (int j = 0; j < N; ++j)
                cout<<result[i][j]<<" ";
            cout<<"\n";
        }
    }

    return 0;
}  // } Driver Code Ends