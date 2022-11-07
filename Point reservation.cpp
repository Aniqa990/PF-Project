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

bus(){
printf("Enter the bus number");
scanf("%d", %busno);
for(i=0; i)	
}

record(){
		
	}

reservation(){
}

newpassword(){
}

cancel(){
}

exit(){
}
