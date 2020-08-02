#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int N,nhint;
        scanf("%d",&N);
        nhint=N;
        int num=0;
        while(nhint){
            num++;
            nhint/=10;     
        }
        int i=N-num*9;
        for(;i<N;i++){
            int j=i,sum=0;
            while(j){
                sum+=j%10;
                j/=10;
            }
            if(sum+i==N){
                printf("%d\n",i);
                break;
            }

        }

        if(i==N)
        printf("0\n");

    }
    return 0;
}