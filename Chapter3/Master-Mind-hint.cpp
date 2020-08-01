//Master-Mind Hints


#include<stdio.h>
#define MAX 1010
int a[MAX][2];



int main(){
    int n;
    scanf("%d",&n);

    int Case=1;
    while(n){
        for(int i=0;i<n;i++)
            scanf("%d",&a[i][0]);

        int sign=1;
        while(1){
            for(int j=0;j<n;j++)
            scanf("%d",&a[j][1]);


            int T=0,C=0;


            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(a[j][1]==-1)
                    continue;

                    if(a[i][0]==a[i][1]){//对应位置相等直接登记后跳出循环
                        T++;
                        break;
                    }
                    else if(a[i][0]==a[j][1]){//若不是对应位置相等，应该先判断a[j][1]对应的a[j][0]是否相等
                        if(a[j][1]==a[j][0])
                        continue;
                        C++;
                        a[j][1]=-1;
                        break;
                    }

                }
            }

            if(sign==1){//对一次猜数输出Game
                sign=0;
                 printf("Game %d:\n",Case);
            }
            
           int k=0;
            for(int i=0;i<n;i++){//数组全为0表示退出
                if(a[i][1]==0)
                k++;
            }
            if(k==n)
            break;


            printf("    (%d,%d)\n",T,C);
        }

        
        Case++;
        scanf("%d",&n);
    }

    

    return 0;
}