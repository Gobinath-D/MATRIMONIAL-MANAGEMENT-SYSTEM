#include<stdio.h>
#include<string.h>
#include<conio.h>
#include <stdlib.h>
#include<time.h>
struct mat
{	
	//variables
	char mobile[20];
	char pass[20];
	char name[20];
	int age;
	char gender[20];
	char dob[20];
	char religion[20];
	char motongue[20];
	char caste[20];
	char city[20];
	char paiduser[20];
	char qual[20];
	char sal[20];
	char creadit[20];
	char cvv[5];
	char card_holdername[20];
	char exdate[10];
	char mobi[20];	
};
void admin(struct mat);
void newuser(struct mat);
void exisistinguser(struct mat);
void forgotten(struct mat);
void match(struct mat);
void ifpaiduser(struct mat);
void callof(struct mat);
int i,c,otp,p=0,paid,var_ad,var_lenmob,var_cmp;
char w;
//switch case n and array of structure element q
int n,q;	
	FILE *nu;
	FILE *ex;
int main()
{
	//file handling process
	//new user
	//exisisting user
	struct mat m1;
	printf("\t\t------MATRIMONY MANAGEMENT SYSTEM------\n\n");
	printf("press 1 if you are a admin  \n\npress 2 for new user \n\npress 3 for exisisting user \n\npress 4 if forgot passworld \n\npress 5 for matchmacking and expectation\n\n");
	scanf("\n\n%d",&n);
			printf("\n");
	switch(n)
	{	
	//admin module
	case 1:	
		{
			admin(m1);
			break;
			
		}
		//new use module
	case 2:
		{	newuser(m1);
			break;
		}
		//exisisting user
	case 3:
		{
			exisistinguser(m1);
			break;
		}
		//forgot passworld
	case 4:
		{
			forgotten(m1);
			break;
		}
	case 5:
		{
			match(m1);
			break;
		}
	default:printf("error!!!\n");
	}
	getch();
return 0;
}
void admin(struct mat m1)
{
			
			printf("Enter mobile number\n\n");
			scanf("%s",m1.mobile);
			printf("\n");
			var_lenmob=strlen(m1.mobile);
			if(var_lenmob==10)
			{
			printf("Enter password\n\n");
			
			 do{ 
        				m1.pass[p]=getch(); 
        				if(m1.pass[p]!='\r')
						{ 
            			printf("*"); 
        				}	 
       					 p++; 
    				}while(m1.pass[p-1]!='\r'); 
   					 m1.pass[p-1]='\0'; 
   					 		printf("\n");
    			printf("\nYou have entered %s as password.\n\n",m1.pass);
    			printf("If you want to see candidate details press 1\n\n");
    			scanf("%d",&var_ad);
    			printf("\n");
    			printf("\n**********************************************\n");
    			if(var_ad==1)
		    	{		
		    		char filepath[25]="d:\\test\\";
					printf("Enter mobile number of a candidate\n\n");
					scanf("%s",m1.mobile);
					printf("\n");
					strcat(filepath,m1.mobile);
					strcat(filepath,".txt");
					printf(" %s\n\n ",filepath);
					nu=fopen(filepath,"r");	
					fprintf(nu,"%s\n",m1.mobile);
				/*	printf("\nEnter password\n");
					//passworld hide process
					 do{ 
		        				m1.pass[p]=getch(); 
		        				if(m1.pass[p]!='\r')
								{ 
		            			printf("*"); 
		        				}	 
		       					 p++; 
		    				}while(m1.pass[p-1]!='\r'); 
		   					 m1.pass[p-1]='\0'; 
		    			//printf("\nYou have entered %s as password.\n",m1.pass);*/
		    			while((w=fgetc(nu))!=EOF)
						{
							printf("%c",w);
						}
						printf("\n*************************************\n");
				}
			
				else
				{
					printf("Log out your account\n\n");
				}
			}
			else
			{
				printf("Re enter mobile number press 1\n\n");
				scanf("%d",&var_lenmob);
				printf("\n");
				if(var_lenmob==1)
				{
				admin(m1);
				}
				else
				{
					printf("Try again\n\n");
				}
			}
}
//new user module
void newuser(struct mat m1)
{
		
			
			char filepath[25]="d:\\test\\";
			printf("Enter mobile number\n\n");
			scanf("%s",m1.mobile);
					printf("\n");
			var_lenmob=strlen(m1.mobile);
		//	printf("%d",var_lenmob);
			if(var_lenmob==10)
			{
			strcat(filepath,m1.mobile);
			strcat(filepath,".txt");
			printf(" %s\n\n",filepath);
			nu=fopen(filepath,"w+");	
			fprintf(nu,"\nmobile number=%s",m1.mobile);
			printf("\n");	
			srand(time(NULL));
   			printf("Your OTP is: ");
   			 for (i = 0; i < 9; ++i)
			 {
       			 c = '1' + rand() % ('1' - '9' + 1);	
   			 }
			printf("%d\n\n", c);
			//otp generation processs
   			printf("Enter the Otp\n\n");
   			scanf("\n%d",&otp);
   					printf("\n");
			if(otp == c)
			{
				
				//password hide process
				printf("Enter password\n\n");
				
				   do{ 
        				m1.pass[p]=getch(); 
        				if(m1.pass[p]!='\r')
						{ 
            			printf("*"); 
        				}	 
       					 p++; 
    				}while(m1.pass[p-1]!='\r'); 
   					 m1.pass[p-1]='\0'; 
   					
   			//printf("\nYou have entered %s as password.\n",m1.pass); 	
			//	fprintf(nu,"Password=%s\n",m1.pass);
				printf("\n");
				printf("\nEnter your name\n\n");
				scanf("%s",m1.name);
						printf("\n");
				fprintf(nu,"\nName=%s",m1.name);
				printf("Enter your age\n\n");
				scanf("%d",&m1.age);
						printf("\n");
				fprintf(nu,"\nAge=%d",m1.age);
				printf("Enter your gender\n\n");
				scanf("%s",m1.gender);
						printf("\n");
				fprintf(nu,"\nGender=%s",m1.gender);
				printf("Enter your date of birth\n\n");
				scanf("%s",m1.dob);
						printf("\n");
				fprintf(nu,"\nDate of birth=%s",m1.dob);
				printf("Enter your religion\n\n");
				scanf("%s",m1.religion);
						printf("\n");
				fprintf(nu,"\nReligion=%s",m1.religion);
				printf("Enter your mother tongue\n\n");
				scanf("%s",m1.motongue);
						printf("\n");
				fprintf(nu,"\nMother tongue=%s",m1.motongue);
				printf("Enter your caste\n\n");
				scanf("%s",m1.caste);
						printf("\n");
				fprintf(nu,"\nCaste=%s",m1.caste);
				printf("Enter your city\n\n");
				scanf("%s",m1.city);
						printf("\n");
				fprintf(nu,"\nCountry=%s",m1.city);
				printf("Enter your qualification\n\n");
				scanf("%s",m1.qual);
						printf("\n");
				fprintf(nu,"\nqualification=%s",m1.qual);
				printf("Enter your salary\n\n");
				scanf("%s",m1.sal);
						printf("\n");
				fprintf(nu,"\nsalary=%s",m1.sal);
				printf("if you want to join our paid membership enter 1 or else  enter 0 \n\n");
				scanf("%d",&paid);	
						printf("\n");
				//service module
				if(paid==1)
				{
					printf("partner detais are enabled and machmacking process enable\n\n");
					printf("\n**********************************************************\n");
					ifpaiduser(m1);
				}
				else
				{
					printf("you can view only partner profile\n\n");
					fprintf(nu,"\n%s","no");
				}
				printf("Registered successfully!!!\n\n");
				}
			else
			{
			printf("Otp is incorrect Try again\n\n");
			}
		}
		else
		{	printf("Re enter mobile number press 1\n\n");
			scanf("%d",&var_lenmob);
					printf("\n");
			if(var_lenmob==1)
			{
			newuser(m1);
			}
			else
			{
				printf("Try again\n\n");
			}
		}
		fclose(nu);
}
//exisisting user module
void exisistinguser(struct mat m1)
{	

			char filepath[25]="d:\\test\\";
			printf("Enter mobile number\n\n");
			scanf("%s",m1.mobile);
					printf("\n");
			var_lenmob=strlen(m1.mobile);
			if(var_lenmob==10)
			{
			strcat(filepath,m1.mobile);
			strcat(filepath,".txt");
			printf(" %s\n",filepath);
					printf("\n");
			nu=fopen(filepath,"r");	
			fprintf(nu,"\n%s",m1.mobile);
			printf("\nEnter password\n\n");
			
			//passworld hide process
			 do{ 
        				m1.pass[p]=getch(); 
        				if(m1.pass[p]!='\r')
						{ 
            			printf("*"); 
        				}	 
       					 p++; 
    				}while(m1.pass[p-1]!='\r'); 
   					 m1.pass[p-1]='\0'; 
    			//printf("\nYou have entered %s as password.\n",m1.pass);
				printf("\n*************************************\n");
    			while((w=fgetc(nu))!=EOF)
				{
					printf("%c",w);
				}
				printf("\n*************************************\n");
			}
			else
			{	
				printf("Re enter mobile number press 1\n\n");
				scanf("%d",&var_lenmob);
						printf("\n");
				if(var_lenmob==1)
				{
				exisistinguser(m1);
				}
				else
				{
					printf("Try again\n\n");
				}
			}
}
//forgotten password module
void forgotten(struct mat m1)
{
	
			printf("Enter your registered mobile no\n\n");
			scanf("%s",m1.mobile);
					printf("\n");
			var_lenmob=strlen(m1.mobile);
			if(var_lenmob==10)
			{
			printf("The otp sended your mobile number\n\n");
			srand(time(NULL));
   			printf("Your OTP is: ");
   			 for (i = 0; i < 9; ++i)
			 {
       			 c = '1' + rand() % ('1' - '9' + 1);
        		
   			 }
			printf("%d\n\n", c);
   			scanf("\n%d",&otp);
   					printf("\n");
			if(otp==c)
			{
				printf("Change your password\n\n");
			 		do{ 
        				m1.pass[p]=getch(); 
        				if(m1.pass[p]!='\r')
						{ 
            			printf("*"); 
        				}	 
       					p++; 
    				}while(m1.pass[p-1]!='\r'); 
   					 m1.pass[p-1]='\0'; 
   					 		printf("\n");
    			//printf("\nYou have entered %s as password.\n",m1.pass);
    			printf("Your passworld changed successfully!!!\n\n");
			}
			else
			{
				printf("Otp is incorrect Try again\n\n");
			}
		}
				else
					{	
							printf("Re enter mobile number press 1\n\n");
							scanf("%d",&var_lenmob);
									printf("\n");
							if(var_lenmob==1)
							{
							forgotten(m1);
							}
							else
							{
								printf("Try again\n\n");
							}
					}
}
//search & expectation module only for paid member 
void match(struct mat m1)
{
		
		
			char filepath[25]="d:\\test\\";
			printf("Enter your mobile number \n\n");
			scanf("%s",m1.mobile);
					printf("\n");
			var_lenmob=strlen(m1.mobile);
			if(var_lenmob==10)
			{
			strcat(filepath,m1.mobile);
			strcat(filepath,".txt");
			printf(" %s\n\n",filepath);
			nu=fopen(filepath,"r");
				//matching variables
				int loop, line=13;
				char str[512];
				char string[512];	
					if (nu == NULL) {
					printf("Failed to open file\n");
					}
					printf("Enter if you are paid or not\n\n");
					scanf("%s",string);	
					printf("\n");
					for(loop = 0;loop<line;++loop){
					    fgets(str, sizeof(str), nu);
					}
				//	printf("\nLine %d: %s\n", line, str);
					if(strcmp(string,str) == 0 )
					 {
					 printf("\n**********************************\n");
					 printf("paid");
					 printf("\n**********************************\n");
					 callof(m1);
					 }
					     else
					     {
					     	printf("\n**********************************\n");
					     printf("not match\n\n");
					     printf("\n**********************************\n");
					     }
					fclose(nu);
  		}
  			else
					{	
							printf("Re enter mobile number press 1\n\n");
							scanf("%d",&var_lenmob);
									printf("\n");
							if(var_lenmob==1)
							{
							match(m1);
							}
							else
							{
								printf("Try again\n\n");
							}
					}
fclose(nu);	
}
void callof(struct mat m1)
{			
			int o;
			printf("Enter if you search groom press 1 or bride press 2...\n");
			scanf("%d",&o);
			if(o==1)
			{
			char filepath[25]="d:\\test\\8667790409";
			strcat(filepath,".txt");
			printf(" %s\n\n",filepath);
			nu=fopen(filepath,"r");
				//matching variables	
					char expectation[100];
					 int i=0,j=0,k=0,c=0;
  					 int numProgs=0;
  					 int numprogsa=0;
    				char* programs[50];
    				char line[50];
    		//	char var_checkpaid[20];
			//	printf("%d",salary);

			
			//fprintf(nu,"%s\n",m1.mobile);
		/*	printf("\nEnter password\n");
			//passworld hide process
				do{ 
        				m1.pass[p]=getch(); 
        				if(m1.pass[p]!='\r')
						{ 
            			printf("*"); 
        				}	 
       					p++; 
    				}while(m1.pass[p-1]!='\r'); 
   					 m1.pass[p-1]='\0';
   					 printf("\n");
   	    			//printf("\nYou have entered %s as password.\n",m1.pass);*/
  		while(fgets(line, sizeof line, nu)!=NULL)
		   {
	        //check to be sure reading correctly
	        printf("%s", line);
	        //add each filename into array of programs
	        programs[i]=line;
			programs[k]=line;
			k++; 
	        i++;
	        //count number of programs in file
	        numProgs++;
	        numprogsa++;
   		}
   		 for (j=0 ; j<numProgs+1; j++) 
			{		
								
			 if(strcmp(programs[j],expectation)==0);
			 {
			 	printf("\n**********************************\n");
			 	printf("\nIt is your matching partner profile\n");
			 	printf("\n************************************\n");
				break;
			 }
  			}
  		}
  		else if(o==2)
  		{
  			char filepath[25]="d:\\test\\1234567890";
			strcat(filepath,".txt");
			printf(" %s\n\n",filepath);
			nu=fopen(filepath,"r");
				//matching variables	
					char expectation[100];
					 int i=0,j=0,k=0,c=0;
  					 int numProgs=0;
  					 int numprogsa=0;
    				char* programs[50];
    				char line[50];
    		//	char var_checkpaid[20];
			//	printf("%d",salary);

			
			//fprintf(nu,"%s\n",m1.mobile);
		/*	printf("\nEnter password\n");
			//passworld hide process
				do{ 
        				m1.pass[p]=getch(); 
        				if(m1.pass[p]!='\r')
						{ 
            			printf("*"); 
        				}	 
       					p++; 
    				}while(m1.pass[p-1]!='\r'); 
   					 m1.pass[p-1]='\0';
   					 printf("\n");
   	    			//printf("\nYou have entered %s as password.\n",m1.pass);*/
  		while(fgets(line, sizeof line, nu)!=NULL)
		   {
	        //check to be sure reading correctly
	        printf("%s", line);
	        //add each filename into array of programs
	        programs[i]=line;
			programs[k]=line;
			k++; 
	        i++;
	        //count number of programs in file
	        numProgs++;
	        numprogsa++;
   		}
   		 for (j=0 ; j<numProgs+1; j++) 
			{		
								
			 if(strcmp(programs[j],expectation)==0);
			 {
			 	printf("\n**********************************\n");
			 	printf("\nIt is your matching partner profile\n");
			 	printf("\n************************************\n");
				break;
			 }
  			}		
		}
  		
fclose(nu);	
}
void ifpaiduser(struct mat m1)
{	
	int l1=0,l2=0,l3;
	printf("Enter your creadit card number\n\n");
	scanf("%s",m1.creadit);
			printf("\n");
	printf("Enter the card holder name\n\n");
	scanf("%s",m1.card_holdername);
			printf("\n");
	printf("Enter expiry date\n\n");
	scanf("%s",m1.exdate);
			printf("\n");
	printf("Enter cvv number\n\n");
	scanf("%s",m1.cvv);
			printf("\n");
	l1=strlen(m1.creadit);
	//printf("%d\n%d",m1.creadit,m1.cvv);
	l2=strlen(m1.cvv);
	if(l1==12&&l2==3)
	{
		printf("Card verified\n\n");
		printf("you are paid successfully\n\n");
	//	scanf("%s",m1.paiduser);
				printf("\n");
		fprintf(nu,"\n%s","yes");
	}
	else 
	{
		printf("Re enter your card details press 1\n\n");
		scanf("%d",&l3);
				printf("\n");
		if(l3==1)
		{
			ifpaiduser(m1);
		}
		else
		{
			printf("payment failed\n\n");
		}
	}
}
