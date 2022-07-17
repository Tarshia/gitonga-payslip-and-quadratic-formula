/*GITONGA FACTORY PAYROLL
CREATED BY mwongel lucy
ON JULY 172022
C99 COMPILER
*/
#include <stdio.h>

int main()
{int totalhoursworked = 40;
 int krapin,employmentNo,hoursworked,normalpay,overtimepay,taxpaid,netincome;
 char name[40];
 printf("WELCOME TO GITONGA'S FACTORY");
 printf("Enter your Name:\n");
	scanf("%s", &name);

	printf("Enter your employee number: ");
	scanf("%d", &employmentNo);

	printf("Enter your KRA pin:\n ");
	scanf("%d", &krapin);

	printf(" Enter number of hours worked:\n ");
	scanf(" %d", &hoursworked);


	normalpay = 1000 * totalhoursworked;
	overtimepay = (hoursworked - totalhoursworked) * 1500;
	taxpaid = normalpay * 30/100;
	netincome = (normalpay - taxpaid) + overtimepay;

	printf("normalpay: %d\n", normalpay);
	printf("overtimepay: %d\n", overtimepay);
	printf("taxaid: %d\n", taxpaid);
	printf("netincome: %d\n", netincome);

	return 0;
}


