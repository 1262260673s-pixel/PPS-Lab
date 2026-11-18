#include<stdio.h>
struct employee
{
  int id;
  char name[30];
  float basic;
  float ta;
  float hra;
  float total;
};

int main()
{
int i,n;

printf("\nEnter no. of employees:");
scanf("%d",&n);
struct employee strarr[n];
for (i=0;i<n;i++)
{
printf("\nEnter details for employee %d\n:", i+1);
printf("Employee ID:");
scanf("%d",&strarr[i].id);

printf("Name: ");
scanf("%s",&strarr[i].name);

printf("Basic Salary: ");
scanf("%f",&strarr[i].basic);

strarr[i].ta = 0.05 * strarr[i].basic;
strarr[i].hra = 0.10 * strarr[i].basic;
strarr[i].total = strarr[i].basic + strarr[i].ta + strarr[i].hra;

}

printf("\n===========================================================================\n");
printf("%-10s %-20s %-12s %-10s %-10s %-12s\n", "Emp ID", "Name", "Basic", "TA", "HRA", "Total Salary");
printf("===========================================================================\n");

for(i=0;i<n;i++){
    printf("%-10d %-20s %-12.2f %-10.2f %-10.2f %-12.2f\n",
        strarr[i].id,
        strarr[i].name,
        strarr[i].basic,
        strarr[i].ta,
        strarr[i].hra,
        strarr[i].total);
}
printf("===========================================================================\n");

return 0;
}