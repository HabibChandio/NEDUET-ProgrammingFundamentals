#include <stdio.h>

int main(void)
{
	char name[5], pass[6], nameInput[5], passInput[6];
	int nameCheck, passCheck, cond1, cond2, cond3;
	do
	{
		printf("Enter username (5 aplhabets): ");
		gets(name);
		for(int i = 0; i < 5; i++)
		{
			if((name[i] >= 65 && name[i] <= 90) || (name[i] >= 97 && name[i] <= 122))
				nameCheck = 0;
			else
			{
				printf("Username can only contain alphabets.\n\n");
				nameCheck = 1;
				break;
			}
		}
	}while(nameCheck);
	do
	{
		printf("Enter your password (6 characters): ");
		gets(pass);
		for(int i = 0; i < 6; i++)
		{
			if((pass[i]>=48 && pass[i]<=57) && cond1 != 1)
				cond1 = 1;
			if((pass[i]>=65 && pass[i]<=90) && cond2 != 1)
				cond2 = 1;
			if((pass[i]>=97 && pass[i]<=122) && cond3 != 1)
				cond3 = 1;
			if(cond1+cond2+cond3 == 3)
			{
				passCheck = 0;
				break;
			}
			else if(cond1+cond2+cond3 != 3 && i == 5)
			{
				printf("Error: Weak Password!!! (Must contain a Capital letter, a Small letter, and a number)\n\n");
				passCheck = 1;	
			}			
		}	
	}while(passCheck);
	printf("Account Created Succesfully!!!\nNow login (or else......)\n");
	do
	{
		printf("Enter username: ");
		gets(nameInput);
		nameCheck = 0;
		for(int i = 0; i < 5; i++)
		{
			if(name[i] == nameInput[i])
			{
				nameCheck++;
			}
			else
			{
				printf("Incorrect Input......\n");
				break;
			}
		}
	}while(nameCheck != 5);
	do
	{
		printf("Enter password: ");
		gets(passInput);
		passCheck = 0;
		for(int i = 0; i < 5; i++)
		{
			if(pass[i] == passInput[i])
			{
				passCheck++;
			}
			else
			{
				printf("Incorrect Input......\n");
				break;
			}
		}
	}while(passCheck != 5);
	return 0;
}