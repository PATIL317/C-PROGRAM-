#include<stdio.h>
int main()
{
int week;
printf("enter week no 1-7:");
scanf("%d",&week);
switch(week)
{
case 1:
printf("sunday");
break;
case 2:
printf("monday");
break;
case 3:
printf("tuesday");
break;
case 4:
printf("wednesday");
break;
case 5:
printf("thursday");
break;
case 6:
printf("friday");
break;
case 7:
printf("saturday");
break;
default:
printf("invalid plz try again");
}
return 0;
}
	

