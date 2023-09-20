#include<stdbool.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#define MAX_BUSES 10
#define TOTAL_SEATS 22

void destination();
char buses[MAX_BUSES];
bool seats[TOTAL_SEATS][MAX_BUSES]={ false };
void displayBuses(){	
 const char* names[] = {" ","Skyline Express ","Youtang Master","Faisal Movers ","Dawoooo Express","Skyline Express","Skyways Express","Youtang Master","Faisal Movers ","Naizi Express","Madina Express"};
 
        puts("\t<<Bus Name>>\t<<Class>>\t<<Seats>>");
		puts("___________________________________________________");
	for(int i =1 ; i <= MAX_BUSES ; i++ ){
		
		printf("%d.%s :\t(EXE) \t\tSeats %d\n",i,names[i],TOTAL_SEATS) ;
	}
//	for(int j =6;j<=MAX_BUSES;j++){
//	    printf("%d.%s :\t(EXE) \t\tSeats %d\n",j,names[j],TOTAL_SEATS);
	     
	printf("\n");
}
  void bookseat(){ FILE *fp ; 
  fp = fopen("Transitbooker.txt","w");
  	
  	 const char* des[] = {" ","KHI TO ISB","KHI TO LHR","LHR TO ISB","LHR TO FSD","MUL TO KHI","KHI TO LHR ","LHR TO ISB","LHR TO FSD","MUL TO KHI"};
const char* names[] = {" ","Skyline Express ","Youtang Master","Faisal Movers ","Dawoooo Express","Skyline Express","Skyways Express","Youtang Master","Faisal Movers ","Naizi Express","Madina Express"};
  int seatNumber,bus,num;
  long int amount;
  


  printf("\n Please confirm bus number you want to book\n ");
  scanf("%d", &bus);
  puts("Bank Alert : TransitBooker is requesting for a transation.");
  printf("Please Confirm transaction amount : \n");
  scanf("%ld",&amount);
  puts("Bank Alert : Transaction successfull");

          char* nic[15];
        	
    printf("\nEnter the seat number you want to book (1 to %d): ", TOTAL_SEATS);
    scanf("%d", &seatNumber);
  if (seatNumber < 1 || seatNumber > TOTAL_SEATS) {
        printf("Invalid seat number! Please enter a valid seat number.\n");
    } else if (seats[bus-1][seatNumber - 1]) {
        printf("Sorry, the seat is already booked. Please select another seat.\n");
    } else {
        seats[bus-1][seatNumber - 1] = true;
        	char name[50];

        char date[10];
        char gender[10];
          	printf("Enter your name : \n");
          	scanf(" %[^\n]",name);
             printf("Enter your CNIC : \n");
         	scanf("%s", &nic);
          	printf("Enter the date : \n");
          	scanf(" %[^\n]", date);
          	printf("Enter your gander :\n");
          	scanf("%s",&gender);
     system("cls");
  	
        printf("Seat %d booked successfully!\n", seatNumber);
        printf("\n");
       	
          	puts("__________________E Ticket______________________");
          	fprintf(fp,"__________________E Ticket______________________\n");
        puts("=================================================");
        fprintf(fp,"=================================================\n");
        printf ("\tPassenger Name : %s\n",name);
        fprintf(fp,"\tPassenger Name : %s\n",name);
        printf("\tPassenger CNIc : %s\n",nic);
        fprintf(fp,"\tPassenger CNIc : %s\n",nic);
        printf("\tBus name : %s\n",names[bus]);
        fprintf(fp,"\tBus name : %s\n",names[bus]);
        printf("\tBus NO. : %d\n",bus);
        fprintf(fp,"\tBus NO. : %d\n",bus);
        printf("\tAmount Paid : PKR %ld \n", amount);
        fprintf(fp,"\tAmount Paid : PKR %ld \n", amount);
        printf("\tSeat No. : %d\n",seatNumber);
        fprintf(fp,"\tSeat No. : %d\n",seatNumber);
        printf("\tClass : Exclusive\n");
        fprintf(fp,"\tClass : Exclusive\n");
        printf("\tDestination : %s\n",des[bus]);
        fprintf(fp,"\tDestination : %s\n",des[bus]);
        printf("\tDeparture Date : %s\n",date);
        fprintf(fp,"\tDeparture Date : %s\n",date);
        printf("\tGender : %s\n",gender);
        fprintf(fp,"\tGender : %s\n",gender);
        printf("\n");
        printf("\tPress any key to continue\n");
        printf("\n");
        getch();

        fclose(fp);
       
    
        
        
        
    } } 
    void availablity(){
displayBuses();
		     int bus;
    printf("\nEnter the bus number to check availability: ");
    scanf("%d", &bus);

    if (bus < 1 || bus > MAX_BUSES) {
        printf("Invalid bus number! Please enter a valid bus number.\n");
        return; 
    }

    printf("Availability for Bus %d:\n", bus);
    for (int i = 0; i < TOTAL_SEATS; i++) {
        printf("Seat %d: %s\n", i + 1, seats[bus - 1][i] ? "Booked" : "Available");
    }
	}

int main(){
        int choice;
	puts("______________TransitBooker____________");
	printf("\n");
	puts("=========Your Route to Seamless Travel=========");
	printf("\n");
do{

	    printf("1. Display available buses\n");
        printf("2. Reserve a seat\n");
        printf("3. Display seats availability\n");
        printf("4. Exit\n");
        
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        
         switch (choice) {
            case 1:
                displayBuses();
                break;	
                 case 2:
             destination(); 
               break;
               case 3 : 
               availablity();
               break;
                case 4:
                	puts("_____________ TransitBooker \"Trusted World Wide\"______________");
                	printf("\n");
                printf("Thank you for your presence , HAPPY JOURNEY! .\n");
                
                printf("\n\n\n\t\t\t\tDEVELOPED BY : ");
                printf("\n\n\n\t\t\t\t\t(Muhammd Ahsan Naeem)");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
}
}    while ( choice !=4 );
return 0 ;}
void destination(){
	 const char* des[] = {"","KHI TO ISB","KHI TO LHR","LHR TO ISB","LHR TO FSD","MUL TO KHI"};
	const char*  names[] = {" ","Skyline Express ","Youtang Master","Faisal Movers ","Dawoooo Express","Skyline Express","Skyways Express","Youtang Master","Faisal Movers ","Niazi Express","Madina Express"};
int num,bus,amount;
    
		
    	printf("Select your Destination\n");
    	printf("[1].KHI TO ISB\n");
    	printf("[2].KHI TO LHR\n");
    	printf("[3].LHR TO ISB\n");
    	printf("[4].LHR TO FSD\n");
    	printf("[5].MUL TO KHI\n");
    	scanf("%d", &num);
    	
switch (num) {
        case 1:
			
        	printf("Buses for %s\n",des[num]);
        	puts("_________________________");		  
            for (int i = 1; i <=MAX_BUSES-9 ; i++) {
                printf("%d.%s : (EXC) \tSeats %d  : %s \n", i, names[i], TOTAL_SEATS,"PKR 9500/seat");
            }
            for (int j = 5; j <= MAX_BUSES-5; j++) {
                printf("%d.%s : (EXC) \tSeats %d : %s \n", j, names[j], TOTAL_SEATS, "PKR 6000/seat");}
                printf("Enter the bus number you want to book\n");
  scanf("%d", &bus);  
             if(bus == 1 || bus == 5 ){ printf("Booking in progress\n");
             if(bus ==1 ){
             	printf("Ticket price : %s\n","PKR 9500");
             	printf("Pay the amount : ");
             	scanf("%ld",&amount);
             	if(amount < 9500){
             		printf("invalid amount. Please pay in full\n");
             		return ;
				 }}
				 else if (bus == 5){
				 printf("Ticket price : %s\n","PKR 6000");
             	printf("Pay the amount : ");
             	scanf("%ld",&amount);
             	if(amount < 6000){
             		printf("invalid amount. Please pay in full\n");
             		return;
				 }	
				 }
				 
		  
             	
             	
				 bookseat();
			 }
			 else { printf("Sorry! for missunderstanding. This bus will not go on this route please select the correct one \n");
			 	return;
			 }
                 break ;  
			 case 2:
            long int amount;
            printf("Buses for  %s\n",des[num]);
        	puts("_________________________");
            for (int i = 2; i <=MAX_BUSES-8 ; i++) {
                printf("%d.%s : (EXC) \tSeats %d PKR%s/seat\n", i, names[i], TOTAL_SEATS,"10000");
            }
            for (int j = 6; j <= MAX_BUSES-4; j++) {
                printf("%d.%s : (ECO) \tSeats %d PKR%s/seat \n", j, names[j], TOTAL_SEATS,"7300");
            }
              printf("Enter the bus number you want to book\n");
  scanf("%d", &bus);
             if(bus == 2 || bus == 6 ){ printf("Booking in progress\n");
                   if(bus ==2 ){
             	printf("Ticket price : %s\n","PKR 10000");
             	printf("Pay the amount : ");
             	scanf(" %ld", &amount);
             	if(amount < 10000){
             		printf("invalid amount. Please pay in full\n");
             		return;
				 }}
				 else if (bus == 6){
				 printf("Ticket price : %s\n","PKR 7300");
             	printf("Pay the amount : ");
             	scanf(" %ld", &amount);
             	if(amount < 7300){
             		printf("invalid amount. Please pay in full\n");
             		return;
				 }	
				 }
		  
                  
			 	bookseat();
			 }
			 else { printf("Sorry! for missunderstanding. This bus will not go on this route please select the correct one \n");
			 	return;
			 }
            break;
             case 3:
             	printf("Buses for  %s\n",des[num]);
        	puts("_________________________");
            for (int i = 3; i <=MAX_BUSES-7 ; i++) {
                printf("%d.%s : (EXC) \tSeats %d\n", i, names[i], TOTAL_SEATS);
            }
            for (int j = 7; j <= MAX_BUSES-3; j++) {
                printf("%d.%s : (ECO) \tSeats %d\n", j, names[j], TOTAL_SEATS);
            }
              printf("Enter the bus number you want to book\n");
  scanf("%d", &bus);
             if(bus == 3 || bus == 7 ){ printf("Booking in progress\n");
              if(bus == 3 ){
             	printf("Ticket price : %s\n","PKR 9000");
             	printf("Pay the amount : ");
             	scanf(" %ld", &amount);
             	if(amount < 9000){
             		printf("invalid amount. Please pay in full\n");
             		return;
				 }}
				 else if (bus == 7){
				 printf("Ticket price : %s\n","PKR 9700");
             	printf("Pay the amount : ");
             	scanf(" %ld", &amount);
             	if(amount < 9700){
             		printf("invalid amount. Please pay in full\n");
             	       return;
				 }	
				 }
             	bookseat();
			 }
			 else { printf("Sorry! for missunderstanding. This bus will not go on this route please select the correct one \n");
			 	return;
			 }
            break;
             case 4:
             	printf("Buses for  %s\n",des[num]);
        	puts("_________________________");
            for (int i = 4; i <=MAX_BUSES-6 ; i++) {
                printf("%d.%s : (EXC) \tSeats %d\n", i, names[i], TOTAL_SEATS);
            }
            for (int j = 8; j <= MAX_BUSES-2; j++) {
                printf("%d.%s : (ECO) \tSeats %d\n", j, names[j], TOTAL_SEATS);
            }
              printf("Enter the bus number you want to book\n");
  scanf("%d", &bus);
             if(bus == 4 || bus == 8 ){ printf("Booking in progress\n");
             if(bus == 4 ){
             	printf("Ticket price : %s\n","PKR 12000");
             	printf("Pay the amount : ");
             	scanf(" %ld", &amount);
             	if(amount < 12000){
             		printf("invalid amount. Please pay in full\n");
             		return;
				 }}
				 else if (bus == 8){
				 printf("Ticket price : %s\n","PKR 11200");
             	printf("Pay the amount : ");
             	scanf(" %ld", &amount);
             	if(amount < 11200){
             		printf("invalid amount. Please pay in full\n");
             		return;
				 }	
				 }
             	bookseat();
			 }
			 else { printf("Sorry! for missunderstanding. This bus will not go on this route please select the correct one \n");
			 	return;
			 }
            break;
             case 5:
             	printf("Buses for  %s\n",des[num]);
        	puts("_________________________");
            for (int i = 5; i <=MAX_BUSES-5 ; i++) {
                printf("%d.%s : (EXC) \tSeats %d\n", i, names[i], TOTAL_SEATS);
            }
            for (int j = 9; j <= MAX_BUSES-1; j++) {
                printf("%d.%s : (ECO) \tSeats %d\n", j, names[j], TOTAL_SEATS);
            }
              printf("Enter the bus number you want to book\n");
  scanf("%d", &bus);
             if(bus == 5 || bus == 9 ){ printf("Booking in progress\n");
             if(bus == 5 ){
             	printf("Ticket price : %s\n","PKR 7999");
             	printf("Pay the amount : ");
             	scanf(" %ld", &amount);
             	if(amount < 7999){
             		printf("invalid amount. Please pay in full\n");
             		return;
				 }}
				 else if (bus == 9){
				 printf("Ticket price : %s\n","PKR 9700");
             	printf("Pay the amount : ");
             	scanf(" %ld", &amount);
             	if(amount < 9700){
             		printf("invalid amount. Please pay in full\n");
             		return;
				 }	
				 }
             	bookseat();
			 }
			 else { printf("Sorry! for missunderstanding. This bus will not go on this route please select the correct one \n");
			 	return;
			 }
            break;
       
    }
}
