#include"stdio.h"
#define MAX 100
float a[MAX];
int n;
void inp(float a[], int &n){
    do{
        printf("Nhap n: ");
        scanf("%d", &n);
    }while(n<1 || n>MAX);
    for(int i=0; i<n; i++){
        printf("a[%d]= ",i);
        scanf("%f",&a[i]);
    }
}
void outp(float a[], int n){
    for(int i=0; i<n; i++)
        printf("%.1f ",a[i]);
}
void find(float a[], int n){
    int posmin=0;
    for(int i=0; i<n ; i++){
        if(a[posmin] > a[i])
            posmin=i;
    }
    printf("\nVi tri can tim: %d",posmin);
}
int main(){
    inp(a,n);
    outp(a,n);
    find(a,n);
}