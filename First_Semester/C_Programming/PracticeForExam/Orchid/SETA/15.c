#include <stdio.h>
#include <stdlib.h>
struct friends {
  char name[30],email[30],phone[20];
  int month,day,year;
};

int main() {
  struct friends *ptr;
  int n,i;
  printf("Enter the number of records: ");
  scanf("%d", &n);

  // Memory allocation for noOfRecords structures
  ptr = (struct friends *)malloc(n * sizeof(struct friends));
  for (i = 0; i < n; i++) {
    printf("\nEnter detail of friend %d:\n",i+1);
	printf("Enter Name:");
	fflush(stdin);
	gets((ptr+i)->name);
	printf("Enter Email:");
	gets((ptr+i)->email);
	printf("Enter Phone:");
	gets((ptr+i)->phone);
	printf("Enter DOB:\nEnter Year Month and Day:");
	scanf("%d%d%d",&(ptr+i)->year,&(ptr+i)->month,&(ptr+i)->day);
  }
  printf("\nDisplaying information:\n");
  printf("NAME \t\t\tEMAIL \t\t\tPHONE \t\tDOB(dd-mm-yyyy)\n");
  for(i=0;i<n;i++)
  {
  	printf("%s \t%s \t%s \t%d-%d-%d\n",(ptr+i)->name,(ptr+i)->email,(ptr+i)->phone,(ptr+i)->day,(ptr+i)->month,(ptr+i)->year);
  }
  free(ptr);
}
