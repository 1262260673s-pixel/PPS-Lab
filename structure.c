#include<stdio.h>
struct student{
    int roll;
    int m1,m2,m3;
    char name[30];
    int total;
    float per;
};

int main()
{
int i,n;

printf("Student Info:");
printf("\nEnter no. of records:");
scanf("%d",&n);
struct student strarr[n];
for (i=0;i<n;i++)
{
printf("Enter roll number of student:");
scanf("%d",&strarr[i].roll);

printf("Enter marks of 3 subjects:");
scanf("%d%d%d",&strarr[i].m1,&strarr[i].m2,&strarr[i].m3);

printf("Enter the name of the student:");
scanf("%s",strarr[i].name);

strarr[i].total=strarr[i].m1 + strarr[i].m2 + strarr[i].m3;
strarr[i].per=strarr[i].total/3.0;
}

printf("\n\n=====================STUDENT REPORT CARD=====================\n");
printf("%-7s %-15s %-5s %-5s %-5s %-7s %-12s %-15s\n",
       "Roll No.", "Name", "M1", "M2", "M3", "Total", "Percentage", "Result");
printf("-----------------------------------------------------------------------------\n");

for (i=0;i<n;i++){
printf("%-7d %-15s %-5d %-5d %-5d %-7d %-12.2f",
       strarr[i].roll,
       strarr[i].name,
       strarr[i].m1,
       strarr[i].m2,
       strarr[i].m3,
       strarr[i].total,
       strarr[i].per);
       if (strarr[i].per<40)
{
printf("%-15s\n","FAIL");
}

for (i=0;i<n;i++){
printf("%-7d %-15s %-5d %-5d %-5d %-7d %-12.2f",
       strarr[i].roll,
       strarr[i].name,
       strarr[i].m1,
       strarr[i].m2,
       strarr[i].m3,
       strarr[i].total,
       strarr[i].per);



if (strarr[i].per<40)
{
printf("%-15s\n","FAIL");
}

else if (strarr[i].per>=40 && strarr[i].per < 60)
{
printf("%-15s\n","PASS");
}

else if (strarr[i].per>=60 && strarr[i].per <75)
{
printf("%-15s\n","FIRST CLASS");
}
else
{
printf("%-15s\n","DISTINCTION");
}
}

return 0;

  }
}