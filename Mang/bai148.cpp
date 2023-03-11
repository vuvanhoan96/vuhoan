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
int snt(int n){
    for(int i=2; i<n; i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int insnt(int a[], int n){
    for(int i=n-1; i>=0; i--){
        if(snt(a[i])==1) 
            return a[i];
    }
    return -1;
}
int main(){
    inp(a,n);
    printf("So nto cuoi cung trong mang: %d", insnt(a,n)); 
}