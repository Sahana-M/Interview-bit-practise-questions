Spiral Order Matrix II
Asked in:  
Microsoft
JP Morgan
Amazon

Given an integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.

Example:

Given n = 3,

You should return the following matrix:

[
  [ 1, 2, 3 ],
  [ 8, 9, 4 ],
  [ 7, 6, 5 ]
]

------------------------------------------------------------------------

vector<vector<int> > Solution::generateMatrix(int A) {
    
    vector<vector<int> >v(A, vector<int>(A, 0));
    int t=0;
    int b=A-1;
    int l=0;
    int r=A-1;
    int dir=0;
    int i,j,c=1;
    
    LOOP:while((t<=b) && (l<=r)){
        
        if(dir==0){
            for(j= l ; j<=r; j++){
                v[t][j] = c;
                c++;
            }
            t++;
           dir=1;
           goto LOOP;
        }
        else if(dir==1){
            for(i= t; i<=b; i++){
                v[i][r] = c;
                c++;
            }
            r--;
            dir = 2;
            goto LOOP;
        }
        else if(dir==2){
            for(j= r; j>=l; j--){
                v[b][j] = c;
                 c++;
            }
            b--;
            dir = 3;
            goto LOOP;
        }
        else if(dir ==3){
            for(i=b; i>=t; i--){
                v[i][l] = c;
                c++;
            }
            l++;
            dir=0;
            goto LOOP;
        }
    }
  return v;
}
