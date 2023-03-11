// Tim so hoan thien hay so hoan hao hay so hoan chinh
#include"stdio.h"
#define MAX 100
int a[MAX], n;
void inp(int a[], int &n){
    do{
        printf("Nhap n: ");
        scanf("%d",&n);
    }while(n<1 || n>MAX);
    for(int i=0; i<n; i++){
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
}
void outp(int a[], int n){
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);
}
int timsohoanthien(int n){
    int S=0;
    int i=1;
    while(i<n){
        if(n%i==0){
            S+=i;
        }
        i++;
    }
    if(S==n) return 1;
    else return 0;
}
int timvitrisohoanthien(int a[], int n){
    for(int i=n-1; i>=0; i--){
        if(timsohoanthien(a[i])==1)
            return i;
    }
    return -1;
}
int main(){
    inp(a,n);
    outp(a,n);
 //   int vitrihtcuoi=timvitrisohoanthien(a,n);
    printf("Vi tri so hoan thien cuoi cung: %d",timvitrisohoanthien(a,n));
}