main()
{ 
int i=1,a=0,no,b=1,c; 
printf("enter no\n");
scanf("%d",&no);
do
{ 

c=a+b;
a=b;
b=c;
printf("%d\n",a);
i++;
} while(i<=no);
}
