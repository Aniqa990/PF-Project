#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<conio.h>

int choice,i,j;
char user;
FILE *fptr;

void login(void);
void bus(void);
void record(void);
void newpassword(void);
void reservation(void);
void cancel(void);
void exit(void);

int main(){
	
	printf("Press 'a' for accessing admin options and 's' for accessing student/passenger options\n");
	scanf(" %c", &user);
	system("cls");
	
	switch(user){
		case 'a':
		case 'A':
		login();
		system("cls");	
		printf("Please press the corresponding number to select one of the following options:\n");
		printf("1. Install new bus\n");
		printf("2. View Bus Details\n");
		printf("3. Update password\n");
		printf("4. Exit\n");
		scanf("%d", &choice);
		system("cls");
		
		switch(choice){
			case 1: bus();
			break;
			case 4: exit();
		}
		
		
		break;
		
		case 's':
		case 'S':
		printf("Please press the corresponding number to select one of the following options:\n");
		printf("1. View Bus Details\n");
		printf("2. Seat Reservation\n");
		printf("3. Cancel Booking\n");
		printf("3. View Bus Details\n");
		printf("4. Exit\n");
		scanf("%d", &choice);
		system("cls");
		
		switch(choice){
			case 4: exit();
			break;
			default: printf("Wrong option");
				
		}
		//more code detailing all options
		
		break;
	}
	
	
	return 0;
}

void login(){
	system("cls");
	char name[20]={0}, pass[20]={0}, sign_name[20]={0}, sign_pass[20]={0};
	int result_name, result_pass, option, i=0;
	
printf("\t\tSelect a number:\n");
printf("\t\t 1. Register\n");
printf("\t\t 2. Sign in\n");
printf("Your choice: ");
scanf("%d", &option);

if(option==1){
	fptr=fopen("Signin_details.txt", "w+");
	printf("Username: ");
	fflush(stdin);
	gets(name);
	printf("Password: ");
	fflush(stdin);
	gets(pass);
	printf("You have successfully registered!");
	fprintf(fptr, "%s\n%s", name, pass);
	fclose(fptr);
	
	printf("\nPress any key to continue ... ");
    getch();
	
}

if(option==2){
	while(name==0) printf("\nPlease register yourself first\n");
	printf("Username: ");
	fflush(stdin);
	gets(sign_name);
	printf("Password: ");
	fflush(stdin);
	gets(sign_pass);
	
	fptr=fopen("Signin_details.txt", "r");
	char line[20];
	for(int j=1; j<=2;j++){
	fgets(line, sizeof(line), fptr);
		if(j==1){
			result_name=strcmp(sign_name, line);
		}
		if(j==2){
			result_pass=strcmp(sign_pass, line);
		}
		j++;
	}
	
	
	if(result_name==0 && result_pass==0) printf("\nWelcome user %s!", name);
	else if(result_name==0 && result_pass!=0){
	while(result_pass!=0){
	printf("\nWrong Password. Enter password again.");
}}
    else if(result_name!=0 && result_pass==0){
	while(result_name!=0){
	printf("\nWrong Username. Enter username again.");
}}
    else;
}
fclose(fptr);
}

struct details{
char route[100];
char busdriver[100];
int drivercontact;
char seat[32][6];	
};

int buses[100];
void bus(){
int busno;
int semester_fee=24000; 
printf("Enter the bus number");
scanf("%d", &busno);


struct details buses[100];
fptr= fopen("database.txt", "a+");
printf("Enter the name of the bus driver: ");
scanf(" %s", buses[busno-1].busdriver);
printf("Enter the contact number of the driver: ");
scanf(" %d", &buses[busno-1].drivercontact);
printf("Enter the route of the bus (from:   to:  ): ");
fflush(stdin);
gets(buses[busno-1].route);
fprintf(fptr,"\n\tBus number: %d\tSemester fee: %d\t\tBus Driver contact number: %d\t\tBus Driver: %s\t\tRoute: %s\n\n", busno, semester_fee, buses[busno-1].drivercontact, buses[busno-1].busdriver, buses[busno-1].route);

int k=0;
for(i=0; i<8;i++){
           for(j=0;j<4;j++){
char s2[6]="Empty";
memcpy(buses[busno-1].seat, s2, strlen(s2));
fprintf(fptr, "\t%d. %s\t", ++k, buses[busno-1].seat);
}
fprintf(fptr, "\n");}
fclose(fptr);

printf("Press any key to continue ... ");
getch();


}

void exit(){
	system("cls");
	printf("\n\t\t\tThank you for using the Point registration system!");
	exit(0);
}

