   #include<stdio.h>

       struct employee
       {
              char empname[25],empno[10];
              int age;
              long salary;
       };

       void main()
       {
              int i;
              struct employee Emp[20];

              for(i=0;i<20;i++)
              {

                    printf("\nEnter details of %d Employee",i+1);

                    printf("\nEnter Employee Name : ");
                    scanf("%s",&Emp[i].empname);

                    printf("\nEnter Employee Age : ");
                    scanf("%d",&Emp[i].age);

                    printf("\nEnter Employee Phone Number : ");
                    scanf("%s",&Emp[i].empno);

                    printf("\nEnter Employee Salary : ");
                    scanf("%ld",&Emp[i].salary);

              }

              printf("\nDetails of Employees\n");
              printf("Name\tAge\tPhone Number\tSalary\n");
              for(i=0;i<20;i++)
              printf("\n%s\t%d\t%s\t%ld",Emp[i].empname,Emp[i].age,Emp[i].empno,Emp[i].salary);

       }

