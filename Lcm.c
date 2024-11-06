#include<stdio.h>

int Gcd(int ,int );
int main(){
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int gcd=Gcd(n1,n2);
    int Lcm=n1*n2/gcd;
    printf("This is Lcm value : %d",Lcm);
    return 0;
}

int Gcd(int a,int b){
    
    if(a==0 && b==0){
        return 0;
    }else{
        while(a!=b){
            if(a>b){
                return Gcd(a-b,b);
            }else{
                return Gcd(a,b-a);
            }
        }
    }
    
}
