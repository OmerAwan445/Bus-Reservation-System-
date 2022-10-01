#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
struct bus{
int bus_no;
char driver_name[20];
char depar_time[10];
char arriv_time[10];
char from[15];
char to[15];
char seat[30][8];
}details;
void search();
void login();
void welcome();
void mainmenu();
void install();
void show();
void book_seat();
void show_seats();
int main()
{	
	system("color f4");
printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
printf("\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Bus reservation System \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
printf("\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
printf("\n\n\n\t\t\t\tEnter login details");
login();
mainmenu();
}

// Login function

void login(){
int i;
char username[6];
char pass[5];
char psw[5];
while(1)
{
printf("\n\t\t\tEnter the username: ");
scanf("%s",&username);
if(strcmp(username,"admin")!=0)
continue;
else
break;
}
again:
i=0;
printf("\n\t\t\tEnter the 4 digit pin: ");
while(i<4)	
{
psw[i]=getch();
printf("*");
i++;
}
if(strcmp(psw,"4455")==0)
{
printf("\n\n\t\t\t\t\tYou are Successfully Logged in\n\n\t\t\t\t\tPress any key to Continue......");
getch();
welcome();
}
else
goto again;
}

//Welcome function

void welcome(){
system("cls");
printf("\n\t\t###            ###  ######## ###         #######     ######     ######  #####   ######## \n");	
Sleep(400);//Slows the time and defined in windows header 
printf("\t\t###            ###  ###      ###        ##    ###   ##    ##   ##  #######  ##  ###      \n");
Sleep(400);
printf("\t\t###            ###  ###      ###       ###         ###    ### ###   #####   ### ###      \n");
Sleep(400);
printf("\t\t###     ##     ###  ######## ###       ###         ###    ### ###    ###    ### ######## \n");
Sleep(400);
printf("\t\t###    ####    ###  ###      ###       ###         ###    ### ###           ### ###      \n");
Sleep(400);
printf("\t\t###  ###  ###  ###  ###      ###        ##    ###   ##    ##  ###           ### ###      \n");
Sleep(400);
printf("\t\t ## ####  #### ##   ######## #########   ######      ######   ###           ### ######## \n");
	
		}

//Mainmenu function 

void mainmenu(){
int choice;
printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
printf("\n\t\t\t\xB2\xB2\xB2\t\t\t   \xB2\xB2\xB2\n\t\t\t\xB2\xB2\xB2 1.Insert Bus details   \xB2\xB2\xB2");
printf("\n\t\t\t\xB2\xB2\xB2\t\t\t   \xB2\xB2\xB2\n\t\t\t\xB2\xB2\xB2 2.Show Bus details     \xB2\xB2\xB2");
printf("\n\t\t\t\xB2\xB2\xB2\t\t\t   \xB2\xB2\xB2\n\t\t\t\xB2\xB2\xB2 3.Search Buses         \xB2\xB2\xB2");	
printf("\n\t\t\t\xB2\xB2\xB2\t\t\t   \xB2\xB2\xB2\n\t\t\t\xB2\xB2\xB2 4.Book Seat            \xB2\xB2\xB2");
printf("\n\t\t\t\xB2\xB2\xB2\t\t\t   \xB2\xB2\xB2\n\t\t\t\xB2\xB2\xB2 5.Show Available Seats \xB2\xB2\xB2");
printf("\n\t\t\t\xB2\xB2\xB2\t\t\t   \xB2\xB2\xB2\n\t\t\t\xB2\xB2\xB2 6.Exit                 \xB2\xB2\xB2");
printf("\n\t\t\t\xB2\xB2\xB2\t\t\t   \xB2\xB2\xB2\n\t\t\t\xB2\xB2\xB2\t\t\t   \xB2\xB2\xB2\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
do{
printf("\n\n\n\t\t\t\xB2\xB2\xB2 Enter your choice: ");
scanf("%d",&choice);
switch(choice)
{
	case 1:
	system("cls");
	install();
	case 2:
 	system("cls");
 	show();
 	case 3:
 	system("cls");
 	search();
	case 4:
	system("cls");
	book_seat();
	case 5:
	system("cls");
	show_seats();
	case 6:
	exit(0);
	default:
	printf("Enter valid  choice");
}
}
while(choice!=6);
}
// Install details  function 

void install(){

FILE *ptr=fopen("busdetails.txt","a");

printf("\n\n\t\t*********Enter the Following details********\n\nBus Number: ");
scanf("%d",&details.bus_no);
getchar();
printf("Driver's Name: ");
gets(details.driver_name);
printf("Departure Time: ");
gets(details.depar_time);
printf("Arrival Time: ");
gets(details.arriv_time);
printf("Departure From: ");
gets(details.from);
printf("Arrival To: ");
gets(details.to);
for(int i=0;i<30;i++)
strcpy(details.seat[i],"empty");
fwrite(&details,sizeof(struct bus),1,ptr);
printf("\n\t\tDetails Entered successfully\n\t\tpress any key to go to Main Menu.....");
fclose(ptr);
getch();
system("cls");
mainmenu();

}
 
 // Show function 
 
void show(){
FILE *ptr=fopen("busdetails.txt","r");

while(fread(&details,sizeof(struct bus),1,ptr)==1)
{
printf("Bus Number: %d\n",details.bus_no);
printf("Drivers Name: %s\n",details.driver_name);
printf("Departure time: %s\n",details.depar_time);
printf("Arrival time: %s\n",details.arriv_time);
printf("Departure from: %s\n",details.from);
printf("Arrival to: %s\n",details.to);
printf("\n\t\t|************************|\n");
}
printf("\n\t\t\tPress any key to go back to Main Menu........");
fclose(ptr);
getch();
system("cls");
mainmenu();
}

// Searching Function

void search(){
	int count=0;
	int search_bus;
FILE *ptr=fopen("busdetails.txt","r");

printf("\n\t\t*******Search Your bus details by entering the bus Number*******\n\n");
printf("Enter the bus Number: ");
scanf("%d",&search_bus);
while(fread(&details,sizeof(struct bus),1,ptr)==1){
if(search_bus==details.bus_no)
{
printf("\t\t*******Record Found********\n");
printf("Drivers Name: %s\n",details.driver_name);
printf("Departure time: %s\n",details.depar_time);
printf("Arrival time: %s\n",details.arriv_time);
printf("Departure from: %s\n",details.from);
printf("Arrival to: %s\n",details.to);
	count++;
	}
	}
fclose(ptr);
if (count==0)
printf("\t\t*******Record Not Found********\n");
printf("\t\tPress any key to go back to Main Menu..........");
getch();
system("cls");
	mainmenu();	
	}
	
	//book seats
		
	void book_seat(){
		int bus_no,count=0,seat_no;
		char name[10];
		FILE *ptr=fopen("busdetails.txt","r+");
		printf("Enter the bus number: ");
	scanf("%d",&bus_no);
	while(fread(&details,sizeof(struct bus),1,ptr)==1)
	{
		if (bus_no==details.bus_no)
		{	
			printf("Enter the seat number you want to reserve:");
			scanf("%d",&seat_no);
			getchar();
			printf("Enter your name:");
			gets(name);
			strcpy(details.seat[seat_no-1],name);
			fseek(ptr,ftell(ptr)-sizeof(struct bus),0);
			fwrite(&details,sizeof(struct bus),1,ptr);
			count++;
			break;
			
	}
	}
	if(count==0)
	printf("\n\n\n\t\t\t|********Record not found********|\n");
	else
printf("\n\n\t\t********Seat Booked Successfully********");
	fclose(ptr);
printf("\n\n\t\tPress any key to go back to Main Menu..........");
	getch();
	system("cls");
	mainmenu();
	}
	
	//Show bus seats
	
	void show_seats(){
	int bus_no,count=0;
	FILE *ptr=fopen("busdetails.txt","r");
	printf("Enter the bus number: ");
	scanf("%d",&bus_no);
	while(fread(&details,sizeof(struct bus),1,ptr)==1)
	if (bus_no==details.bus_no)
	{
	for(int i=0;i<30;i++)
				{
				printf("%d.%s  \t\t",i+1,details.seat[i]);
				if ((i+1)%3==0)
				printf("\n");
				count++;
				}
	}
fclose(ptr);
if(count==0)
printf("\n\n\n\t\t\t|********Record not found********|");
printf("\n\n\t\tPress any key to go back to Main Menu..........");
getch();
system("cls");
mainmenu();
}
