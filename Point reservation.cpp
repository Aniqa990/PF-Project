#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int choice,i;
char user;
int buses[100][100];

bus();
record();
newpassword();
reservation();
cancel();
exit();

int main(){
	
	printf("Press 'a' for accessing admin options and 's' for accessing student/passenger options\n");
	scanf(" %c", &user);
	system("cls");
	
	switch(user){
		case 'a':
		case 'A':
		//user login code	
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
			case 2: record();
			break;
			case 3: newpassword();
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
			case 1: record();
			break;
			case 2: reservation();
			break;
			case 3: cancel();
			break;
			case 4: exit();
			break;
				
		}
		//more code detailing all options
		
		break;
	}
	
	
	return 0;
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


