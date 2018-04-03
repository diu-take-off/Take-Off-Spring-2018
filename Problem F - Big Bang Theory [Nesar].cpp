#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs = 1; cs <= tc; ++cs){
        int n,m,p;
        scanf("%d %d %d",&n,&m,&p);
        int A[n+5][m+5];
        int B[n+5][m+5];

        for(int i = 0;i < n+5; ++i){
            memset(A[i],0,sizeof(A[i]));
            memset(B[i],0,sizeof(B[i]));
        }

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                scanf("%d",&A[i][j]);
            }
        }
        for(int k = 1; k <= p; k++){
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= m; j++){
                    if(A[i][j] == 1){
                        B[i][j] = 1;
                        B[i-1][j] = 1;
                        B[i+1][j] = 1;
                        B[i][j+1] = 1;
                        B[i][j-1] = 1;
                    }
                }
            }
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= m; j++){
                    A[i][j] = B[i][j];
                }
            }
        }
        printf("Case #%d:\n",cs);
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                printf("%d",A[i][j]);
                if(j == m)printf("\n");
                else printf(" ");
            }
        }
    }
    return 0;
}
