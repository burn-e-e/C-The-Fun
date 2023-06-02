#include <stdio.h>
#include <stdlib.h>
void bubble_sort(int m[], int n);
int main() {
    printf("Enter n number:\n");
    int n;
    scanf("%d",&n);
    int m[n];
    for(int i=0; i<n;i++){
        m[i] = rand() %10;
        printf("%d ",m[i]);
    }
    bubble_sort(m,n);
    for (int i = 0; i < n; ++i) {
        printf(" \n %d ",m[i]);
    }
    return 0;
}
void bubble_sort(int m[], int n){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n-1-i) ; ++j) {
            if(m[j]>m[j+1]){
                int temp = m[j];
                m[j] = m[j+1];
                m[j+1] = temp;
            }
        }
    }
}
