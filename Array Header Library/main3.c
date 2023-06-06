
#include<stdio.h>
#include<c1thefun.h>
int main(void)
{ 
int n;
	//int args[]={1,3,5,2,4,7,9,13,0,12,13,23,34};
	printf("Massiviin hemjeeg oruulna uu\n"); 
	scanf("%d",&n);
	int args[n];
	for(int i=0;i<n;i++)
	{ printf("a[%d]=",i);
	scanf("%d",&args[i]);
	}
	int f;
//	int n=sizeof(args)/sizeof(args[0]);
//	for(int i=0;i<n;i++)
//	{ printf(" %d", args[i]);
//	}
	printf("\n0.garah\n1.min\n2.max\n3.average\n4.bubble_sort_usukh\n5.bubble_sort_buurakh\n6.Massiviin elementuudiin niilber oloh\n7.Selection sort usukh\n8.selection sort buurakh\n9.insertion sort usuh\n10.insertion sort buurakh\n");
	scanf("%d",&f);
 while(f!=0){
	 if(f==1){
	printf("min=%d",min(args,n));
}
	else if(f==2)
	{//Massiviin elementuudiin maximum oloh
	
	printf("max=%d\n",max(args,n));
}
	else if(f==3)
	{//Massiviin elementuudiin dundaj oloh
	
	printf("\naverage=%d\n",average(args,n));
}
	else if(f==4)
	{//Bubble sort usuh
	
	Bubble_sort_high(args,n);
	for(int i=0;i<n;i++)
	{ printf(" %d",args[i]);
	}
}
	else if(f==5)
	{
	//Bubble sort buurah
	
	Bubble_sort_low(args,n);
	for(int i=0;i<n;i++)
	{ printf(" %d",args[i]);
	}
}
	else if(f==6)
	{
	//Massiviin eelementuudiin niilberiig oloh
	printf("\nsum=%d\n",summation(args,n));
}
	else if(f==7)
	{
	//Selection sort usuh
	Selection_sort_high(args,n);
	for(int i=0;i<n;i++)
	{ printf(" %d",args[i]);
	}
	printf("\n");
}
	else if(f==8)
	{//Selection sort buurah
	
	Selection_sort_low(args,n);
	for(int i=0;i<n;i++)
	{ printf(" %d",args[i]);
	}
	printf("\n");
}
	else if(f==9)
	{insertion_Sort_high(args, n);
		printf("\nInsertion_Ascending_Sort_low:");
	for(int i=0; i<n; i++)
	{
		printf("%d ", args[i]);
	}
	printf("\n");
	}
	else if(f==10)
	{insertion_Sort_low(args,n);
for(int i=0;i<n;i++)
	{ printf(" %d",args[i]);
	}
	printf("\n");
}
printf("\n0.Garah\n1.min\n2.max\n3.average\n4.bubble_sort_usukh\n5.bubble_sort_buurakh\n6.Massiviin elementuudiin niilber oloh\n7.Selection sort usukh\n8.selection sort buurakh\n9.insertion sort usuh\n10.insertion sort buurakh\n");
	scanf("%d",&f);
}
printf("\nProgramm ajillaj duuslaa");
	 getchar();
	return 0;
}