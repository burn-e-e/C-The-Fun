#include <stdio.h>
#include <stdlib.h>
void bubble_sort(int m[], int n);
void selection_sort(int m[], int n);
int main() {
    printf("Enter the value of 'n' to define the number of elements in this array:\n");
    int n;
    scanf("%d",&n);
    int m[n];
    printf("Random numbers: ");
    for(int i=0; i<n;i++){
        m[i] = rand() %10;
        printf("%d ",m[i]);
    }
    printf("\nChoose an option from the following list: \n \t 1 - Bubble Sort\n \t 2 - Selection Sort \n");
    int option;
    scanf("%d",&option);
    switch (option) {
        case 1:
            bubble_sort(m,n);
            break;
        case 2:
            selection_sort(m,n);
            break;
    }
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
void selection_sort(int m[], int n){
    for(int i=0;i<n-1;i++){
        int min_p = i;
        for (int j = i+1; j < n; ++j) {
            if(m[j] < m[min_p]){
                min_p = j;
            }
        }
        if(min_p != i){
            int temp = m[i];
            m[i] = m[min_p];
            m[min_p] = temp;
        }
    }
}
