#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct voter_information
{
    char aadhar[20];
    char name[50];
    char birth_date[15];
    struct voter_information *next;
}node;
node *start=NULL;
node *head;
node *space;

void voterinsert();
void mainlogs();
void voting();
void exi();
void show();
void admin();
void notagain();
void winner();

int count=0,vote=0;
int vote1=0,vote2=0,vote3=0,vote4=0,vote5=0;

int main()
{
	
	while(1)
	{
		 system("cls");
    printf("\n\n\n");
    printf("\t            ****** WELCOME TO THE ONLINE VOTING PORTAL ******        \n\n");
    printf("\t           ***************************************************        \n\n\n\n\n");
    printf("        \t\t *****Please Enter One(1) for logging vote main Logs*****    \n\n\n");
    int BB;
    scanf("%d",&BB);
    if(BB==1)
    {
      mainlogs();   
    }
	}
}

void mainlogs()
{
	int t;
    system("cls");
    printf("\n\n\n");
    printf("        \t\t\t1. FOR VOTE ENTRY     \n");
    Sleep(300);
    printf("        \t\t\t2. FOR ADMIN PANEL    \n");
    Sleep(300);
    printf("        \t\t\t3. FOR WINNER         \n");
    printf("\n\t\t\t\tPLEASE ENTER CHOICE:");
    
    scanf("%d",&t);
    
    switch(t)
    {
    	case 1:voterinsert(start);
    	break;
    	
    	case 2:admin();
    	break;
    	
    	case 3:winner();
    	break;
    
    	default:
    	mainlogs();
	}
}



void voterinsert()
{
	int universal=0;  
    node *temp;
    char name[50],birth_date[15],aadhar[20];
	system("cls");
    printf("\n\n\n\n");
    printf("\t IF AADHAR ID, YOUR NAME AND YOUR DATE OF BIRTH MATCHES THEN YOU CAN GIVE YOUR VOTE OTHERWISE NOT\n\n");
    Sleep(300);
    printf("\t\t\tEnter your AADHAR CARD number:   ");
    fflush(stdin);
    gets(aadhar);
    printf("\t\t\tEnter Your NAME:   ");
    gets(name);
    printf("\t\t\tEnter Your BIRTH DATE  in dd-mm-yyyy format:   ");
    gets(birth_date);
    temp=(node *)malloc(sizeof(node));
    strcpy(temp->aadhar,aadhar);
	strcpy(temp->name,name);
    strcpy(temp->birth_date,birth_date);
    temp->next=NULL;
    head=temp;
    while(temp!=NULL)
    {
	 
     
        if((strcmp(temp->aadhar,"10001")==0&& strcmp(temp->name,"abc")==0 &&strcmp(temp->birth_date,"1")==0) ||
        (strcmp(temp->aadhar,"10002")==0&& strcmp(temp->name,"amit patel")==0 &&strcmp(temp->birth_date,"14-09-2003")==0)||
        (strcmp(temp->aadhar,"10003")==0&& strcmp(temp->name,"ramesh shah")==0 &&strcmp(temp->birth_date,"19-03-1963")==0)||
        (strcmp(temp->aadhar,"10004")==0&& strcmp(temp->name,"mahesh jani")==0 &&strcmp(temp->birth_date,"08-12-1999")==0)||
        (strcmp(temp->aadhar,"10005")==0&& strcmp(temp->name,"ankit chauhan")==0 &&strcmp(temp->birth_date,"28-08-1999")==0)||
        (strcmp(temp->aadhar,"10006")==0&& strcmp(temp->name,"dipika shah")==0 &&strcmp(temp->birth_date,"20-10-2000")==0)||
        (strcmp(temp->aadhar,"10007")==0&& strcmp(temp->name,"avni jha")==0 &&strcmp(temp->birth_date,"02-03-1999")==0)||
        (strcmp(temp->aadhar,"10008")==0&& strcmp(temp->name,"ravi vyas")==0 &&strcmp(temp->birth_date,"26-12-1999")==0)||
        (strcmp(temp->aadhar,"10009")==0&& strcmp(temp->name,"shubham makwana")==0 &&strcmp(temp->birth_date,"02-01-1999")==0)||
        (strcmp(temp->aadhar,"10010")==0&& strcmp(temp->name,"zeel khunt")==0 &&strcmp(temp->birth_date,"03-01-1999")==0))
        {
        	node *t,*space;
        	
   			if(start==NULL)
    		{
    			space=(node*)malloc(sizeof(node));
    			strcpy(space->aadhar,aadhar);
      	   	    strcpy(space->name,name);
    			strcpy(space->birth_date,birth_date);
    			space->next=NULL;
    			start=space;
    			universal=2;
    		}
    		
    		else
    		{
      			t=start;
      			while(t!=NULL)
       			{
            		if((strcmp(t->aadhar,aadhar)==0&& strcmp(t->name,name)==0 &&strcmp(t->birth_date,birth_date)==0))
            		{
           				universal=1;
            		} 
            		t=t->next;
    			}
			}
    	
            if(universal==0)
            {
            	
    			space=(node*)malloc(sizeof(node));
    			strcpy(space->aadhar,aadhar);
      	   	    strcpy(space->name,name);
    			strcpy(space->birth_date,birth_date);
        		t=start;
        	
				while(t->next!=NULL)
        		{
        			t=t->next;
				}
				space->next=NULL;
				t->next=space;
			}
   		
        	
        	if(universal!=1)
            {
            	voting();
			}
            
			else
            {
               notagain();
			} 
		}
		
		else
		{
			system("cls");
            printf("\n\n\n\n");
            printf("\t\t\t (:-SORRY YOU ENTERED WRONG CREDENTIALS -:) \n\n\n");
            Sleep(5000);
            printf("PRESS ANY KEY");
            //start=mainlogs(start);
		}	
		
        temp=temp->next;
	}
	return ;
}
   
void voting()
{
	int B,k;
    system("cls");
    printf("\n\n\n\n");
    printf("\t\t     * * * * * LIST OF CANDIDATES * * * * * \n\n\n");
    Sleep(300);
    printf("\t\t\t NAME\t\t\t\t\tSYMBOL\n\n");
    Sleep(300);
    printf("\t\t\t 1.NARENDRA MODI\t\t\t1.LOTUS\n");
    Sleep(300);
    printf("\t\t\t 2.RAHUL GANDHI\t\t\t\t2.HAND\n");
    Sleep(300);
    printf("\t\t\t 3.MAMTA BANERJEE\t\t\t3.FLOWER\n");
    Sleep(300);
    printf("\t\t\t 4.ARVIND KEJRIVAL\t\t\t4.Broom\n");
    Sleep(300);
    printf("\t\t\t 5.NAVEEN PATNAIK\t\t\t5.SHELL\n\n\n");
    printf("\t\t\t Enter Your Choice: ");
    
    
    for(k=0;k<=1;k++)
    {
    	 
        scanf("%d",&B);
    	if(B==1)
    	{
			vote1++;
        	printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO NARENDRA MODI \n");
        	Sleep(5000);
    		break;}
		
		if(B==2)
		{
			vote2++;
            printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO RAHUL GANDHI \n");
            Sleep(5000);
    		break;}
		
		if(B==3)
		{
			vote3++;
            printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO MAMTA BANERJEE \n");
            Sleep(5000);
    		break;}
		
		if(B==4)
		{
			vote4++;
            printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO ARVIND KEJRIVAL\n");
            Sleep(5000);
    		break;}
		
		if(B==5) 
		{
		vote5++;
            printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO NAVEEN PATNAIK\n");
            Sleep(5000);
    		break;}
    	
    	if (B!=1||B!=2||B!=3||B!=4||B!=5) 
		{
			printf("ENTERED WRONG CHOICE CHOICE");
			Sleep(5000);
    		break;}
	}
}


void admin()
{
    int k;
    printf("\n\n\n\n");
    printf("\t\t\t\t\tEnter Your Password To Unlock The Admin Panel\n\n");
    scanf("%d",&k);
    if(k==1234)
    {
        show();
    }
    else
    {
        printf("Wrong Password\n");
    }
} 
 
void show()
{
    int G;
    system("cls");
    printf("\n\n\n\n");
    printf("\t\t\tPresent Vote Count :\n\n");
    Sleep(500);
    printf("\t\t\t  NARENDRA MODI is on\t\t\t%d Votes\n",vote1);
    Sleep(500);
    printf("\t\t\t  RAHUL GANDHI is on\t\t\t%d Votes\n",vote2);
    Sleep(500);
    printf("\t\t\t  MAMTA BANERJEE is on\t\t\t%d Votes\n",vote3);
    Sleep(500);
    printf("\t\t\t  ARVIND KEJRIVAL  is on\t\t%d Votes\n",vote4);
    Sleep(500);
    printf("\t\t\t  NAVEEN PATNAIK  is on\t\t\t%d Votes\n\n\n\n",vote5);
    Sleep(500);
    printf("\t\t\t\t\tEnter One(1) For Main Logs\n\n\t\t\t\t\t\t\tOR\n\n\t\t\t\t\tENTER THE SPECIAL PASSWORD TO CLOSe VOTING PORTAL\n ");
    scanf("%d",&G);
    
	if(G==1234)
    {
    	exi();
	}
    
    if(G==1)
    return ;
}  

void exi()
{
    system("cls");
    printf("\n\n\n\n\n");
    Sleep(500);
    printf("\t\t\t        ***YOU ARE NOW EXITING THE PORTAL***       \n\n\n");
    Sleep(1000);
    printf("\t\t\t * * *Thank You For Using This ONLINE PLATFORM For VOTING* * *  \n\n\n");
    Sleep(1000);
    exit(0);
}
   
void notagain()
{
    int A;
	system("cls");
    printf("\n\n\n\n");
    printf("\t\t\t        ***YOU HAVE GIVEN YOUR VOTE SUCCESSFULLY***       \n\n\n");
    Sleep(300);
    printf("\t\t\t        ***YOU CANNOT GIVE YOUR VOTE MORE THAN ONCE***     \n\n\n");
    Sleep(300);
    printf("\t\t\t If You want to see present winner Enter One(1) or Enter TWO(2) for Main  Logs\n\n");
    Sleep(300);
    scanf("%d",&A);
    if(A==1)
    {
        winner();
    }
    
	else
    {
    return;
    }
}
   
void winner()
{
    system("cls");
    printf("\n\n\n\n");
    if(vote2<vote1 && vote3< vote1 && vote4<vote1 && vote5<vote1)
    printf("\t\t\tThe present Lead is NARENDRA MODI and he has got %d votes\n\n\n\n",vote1);
    if(vote1<vote2 && vote3< vote2 && vote4<vote2 && vote5<vote2)
    printf("\t\t\tThe present Lead is RAHUL GANDHI and he has got %d votes\n\n\n\n",vote2);
    if(vote1<vote3 && vote2< vote3 && vote4<vote3 && vote5<vote3)
    printf("\t\t\tThe present Lead is MAMTA BANERJEE and she has got %d votes\n\n\n\n",vote3);
    if(vote1<vote4 && vote2< vote4 && vote3<vote4 && vote5<vote4)
    printf("\t\t\tThe present Lead is ARVIND KEJRIVAL and he has got %d votes\n\n\n\n",vote4);
    if(vote1<vote5 && vote2< vote5 && vote3<vote5 && vote4<vote5)
    printf("\t\t\tThe present Lead is NAVEEN PATNAIK and he has got %d votes\n\n\n\n",vote5);
    printf("\t\t\t\tEnter Any Key for Main Log\n\n");
    getch();
    return ;
}   

