#ifndef _MYCODE_H_
#define _mYCODE_H_

#include<stdio.h>
#include<stdlib.h>

int max(int a[], int n)
{
	int i,max=a[0];
	for(i=1; i<n ; i++)
	{
		if(a[i]>max)
		{
			max=a[i];
	}
	}
	return max;
}
int min( int a[], int n)
{
	int min ,i;
	min=a[0];
	for(i=1;i<n ; i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	return min;
}
void Bubble_sort_low( int a[],int n)
{
	int i,u,temp ,j;
	for(i=0 ;i<n; i++)
	{
		for(j=i+1 ; j<n ;j++)
		{
			if(a[i]<a[j])
			{
			  temp=a[i];
			  a[i]=a[j];
			  a[j]=temp;	
			}
		}
	}
}
void Bubble_sort_high(int a[],int n)
{
		int i,u,temp ,j;
	for(i=1 ;i<n; i++)
	{
		for(j=1 ; j<n ;j++)
		{
			if(a[j-1]>a[j])
			{
			  temp=a[j];
			  a[j]=a[j-1];
			  a[j-1]=temp;	
			}
		}
	}
}
int average(int a[], int n)
{
	int i,sum=0;
	double q;
	for(i=0; i<n; i++)
	{
		sum=sum+a[i];
		q=sum/n;
	}
	return q;
}
int summation(int a[], int n)
{
	int i, sum=0;
	double q;
	for ( i = 0; i < n; i++)
	{	
		sum=sum+a[i];
	}
	return sum;
}
void Selection_sort_high(int a[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++) {
 

        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min_idx])
                min_idx = j;
        }
        if (min_idx != i){
            int temp = a[min_idx];
    	a[min_idx] = a[i];
    	a[i]= temp;
    }}
}
void Selection_sort_low(int a[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++) {
 

        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] > a[min_idx])
                min_idx = j;
        }
        if (min_idx != i){
            int temp = a[min_idx];
    	a[min_idx] = a[i];
    	a[i]= temp;
    }}
}
void insertion_Sort_high(int a[], int n)
{
	int i, k, j;
	for (i=0; i<n; i++)
	{
		k = a[i];
		j = i-1;
		while(j>=0 && a[j]>k)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = k;
	}
}
void insertion_Sort_low(int a[], int n)
{
	int i, k, j;
	for (i=1; i<n; i++)
	{
		k = a[i];
		j = i-1;
		while(j>=0 && a[j]<k)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = k;
	}
}
#endif