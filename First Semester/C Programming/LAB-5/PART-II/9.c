//take 2 1-D array of size n and m and merge them into a single array 
//size m+n and display
 #include <stdio.h>
 void main()
 {
 	int m[100],n[100],nm[200],i,n1,m1;
 	printf("Enter the size of array n and m:");
 	scanf("%d%d",&n1,&m1);
 	printf("Enter the elements of array n[%d]:",n1);
	for(i=0;i<n1;i++)
	{
		scanf("%d",&n[i]);
		nm[i]=n[i];
	}
	printf("Enter the elements of array m[%d]:",m1);
	for(i=0;i<m1;i++)
	{
		scanf("%d",&m[i]);
		nm[n1+i]=m[i];
	}
	printf("Elements of merged array size n+m:\n");
	for(i=0;i<n1+m1;i++)
	{
		printf("%d\t",nm[i]);
	}
 }
 
