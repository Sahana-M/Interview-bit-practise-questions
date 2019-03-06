Anti Diagonals
Asked in:  
Microsoft
Adobe

Give a N*N square matrix, return an array of its anti-diagonals. Look at the example for more details.

Example:

		
Input: 	

1 2 3
4 5 6
7 8 9

Return the following :

[ 
  [1],
  [2, 4],
  [3, 5, 7],
  [6, 8],
  [9]
]


--------------------------------------------------------------------

vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector < vector <int> > v;
    vector <int> temp;
    int l = A.size();
    int i,c,k;
   for(i=0;i<l;i++){
        c=i;k=0;
        while(c>=0 && k<=i){
            temp.push_back(A[k][c]);
            c--; k++;
        }
        v.push_back(temp);
        temp.clear();
   }
   if(i==l){
        for(i=1;i<l;i++){
                c=i;k=l-1;
                while(c<l && k>=0){
                    temp.push_back(A[c][k]);
                    c++; k--;
                }
                v.push_back(temp);
                temp.clear();
            }
        }
   return v;
}
