#include<stdio.h>
#include<string.h>
#define MAXN 100

int findnum(const char* s,int p){
    int num=1;
    p++;
    if(s[p]>='0'&&s[p]<='9')
    num=int(s[p]-'0');
    else return num;
    while(p++){
        if(s[p]>='0'&&s[p]<='9')
        num=int(s[p]-'0')+num*10;
        else
            break;

    }
    return num;
}
int main(){
    int n;
    scanf("%d",&n);
    char s[MAXN];
    while(n--){

        memset(s,NULL,sizeof(s));
        scanf("%s",s);
        int l=strlen(s);
        double sum=0;
        for(int i=0;i<l;i++){
            if(s[i]>='0'&&s[i]<='9')//其实可以设置一个全局变量，在调用findnum（）函数后直接跳过数字
            continue;
            if(s[i]=='C'){
                sum+=12.01*findnum(s,i);
            }
            else if(s[i]=='H'){
                sum+=1.008*findnum(s,i);
            }
            else if(s[i]=='O'){
                sum+=16.00*findnum(s,i);
            }
            else if(s[i]=='N'){
                sum+=14.01*findnum(s,i);
            }
        }
        printf("%.3lf\n",sum);
    }
    return 0;
}