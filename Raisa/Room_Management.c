#include <stdio.h>
#include <string.h>
#define MAX_FLOORS 10
#define MAX_ROOMS 100

void customer_choice();
int room_choice();
void Book_Room();
void Check_Availability();
void Check_Out_Room();
void Booking_History();

int rooms[MAX_ROOMS];
char roomTypes[MAX_ROOMS][15];
char roomStatuses[MAX_ROOMS][10];
char customerNames[MAX_ROOMS][40];
char checkInDates[MAX_ROOMS][20];
char checkOutDates[MAX_ROOMS][20];
int bookingCount = 0;

int room_choice()
{
    int c;
    printf("\nPlease specify the type of room you would like to book: \n");
    printf("1.Single Room - 1500 BDT/24h\n");
    printf("2.Double Room - 3000 BDT/24h\n");
    printf("3.Deluxe Room - 5000 BDT/24h\n");
    printf("4.Suite - 10000/24h\n");
    printf("Enter your choice: ");
    scanf("%d", &c);

    if (c == 1) {
        printf("\nFloor 1 have rooms numbered 101 to 110.\nFloor 2 have rooms numbered 201 to 210.\nFloor 3 have rooms numbered 301 to 310.\n");
        return 1;
    } else if (c == 2) {
        printf("\nFloor 4 have rooms numbered 401 to 410.\nFloor 5 have rooms numbered 501 to 510.\nFloor 3 have rooms numbered 601 to 610.\n");
        return 2;
    } else if (c == 3) {
        printf("\nFloor 7 have rooms numbered 701 to 710.\nFloor 8 have rooms numbered 801 to 810.\n");
        return 3;
    } else if (c == 4) {
        printf("\nFloor 9 have rooms numbered 901 to 910.\nFloor 8 have rooms numbered 1001 to 1010.\n");
        return 4;
    } else {
        printf("Invalid choice. Please try again.\n");
        return room_choice();
    }
}

void customer_choice()
{
    int c;
    while (1)
    {
        printf("\nWelcome to Sea View Hotel.\nPlease choose from the following options:\n");
        printf("1.Book Room\n");
        printf("2.Check Availability\n");
        printf("3.Check Out Room\n");
        printf("4.Booking History\n");
        printf("5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            Book_Room();
            break;
        case 2:
            Check_Availability();
            break;
        case 3:
            Check_Out_Room();
            break;
        case 4:
            Booking_History();
            break;
        case 5:
            printf("Exiting the program.\n");
            return;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}

void Book_Room()
{
    int roomNumber;
    char customerName[40];
    int choice = room_choice();

    while (1)
    {
        printf("\nEnter the room number to book: ");
        scanf("%d", &roomNumber);

        if ((choice == 1 && roomNumber >= 101 && roomNumber <= 110) ||
            (choice == 1 && roomNumber >= 201 && roomNumber <= 210) ||
            (choice == 1 && roomNumber >= 301 && roomNumber <= 310) ||
            (choice == 2 && roomNumber >= 401 && roomNumber <= 410) ||
            (choice == 2 && roomNumber >= 501 && roomNumber <= 510) ||
            (choice == 2 && roomNumber >= 601 && roomNumber <= 610) ||
            (choice == 3 && roomNumber >= 701 && roomNumber <= 710) ||
            (choice == 3 && roomNumber >= 801 && roomNumber <= 810) ||
            (choice == 4 && roomNumber >= 901 && roomNumber <= 910) ||
            (choice == 4 && roomNumber >= 1001 && roomNumber <= 1010))
        {
            break;
        }
        else
        {
            printf("Invalid room number for the selected room type. Please try again.\n");
        }
    }

    while (getchar() != '\n');

    printf("Enter customer name: ");
    gets(customerName);

    printf("Enter check-in date (DD/MM/YYYY): ");
    gets(checkInDates[roomNumber % MAX_ROOMS]);

    printf("Enter check-out date (DD/MM/YYYY): ");
    gets(checkOutDates[roomNumber % MAX_ROOMS]);

    for (int i = 0; i < MAX_ROOMS; i++)
    {
        if (rooms[i] == roomNumber && strcmp(roomStatuses[i], "available") == 0)
        {
            strcpy(roomStatuses[i], "occupied");
            strcpy(customerNames[i], customerName);
            bookingCount++;
            printf("Room booked successfully.\n");


            char paymentChoice[20];
            printf("Do you want to pay now? \n1.Yes\n2.No\n: ");
            gets(paymentChoice);

            if (strcmp(paymentChoice, "1") == 0)
            {
            printf("Payment done.\n");
            }
            else
            {
            printf("Payment is due.\n");
            }


            return;
        }
    }
    printf("Room is not available or does not exist.\n");
}



void Check_Availability() {
    int roomNumber;
    printf("Enter the room number to check availability: ");
    scanf("%d", &roomNumber);

    if (roomNumber < 100 || roomNumber > 1010 ||
        ((roomNumber % 100 < 1) || (roomNumber % 100 > 10)) ||
        (roomNumber / 100 > 10)) {
        printf("Room %d does not exist.\n", roomNumber);
        return;
    }

    for (int i = 0; i < MAX_ROOMS; i++) {
        if (rooms[i] == roomNumber) {
            if (strcmp(roomStatuses[i], "available") == 0) {
                printf("Room %d is available.\n", roomNumber);
            } else {
                printf("Room %d is occupied.\n", roomNumber);
            }
            return;
        }
    }

    printf("Room %d does not exist.\n", roomNumber);
}

void Check_Out_Room()
{
    int roomNumber;
    printf("Enter the room number to check out: ");
    scanf("%d", &roomNumber);

    while (getchar() != '\n');

    printf("Enter check-out date (DD/MM/YYYY): ");
    gets(checkOutDates[roomNumber % MAX_ROOMS]);

    for (int i = 0; i < MAX_ROOMS; i++)
    {
        if (rooms[i] == roomNumber && strcmp(roomStatuses[i], "occupied") == 0)
        {
            strcpy(roomStatuses[i], "available");
            strcpy(customerNames[i], "");
            printf("Room checked out successfully.\n");
            return;
        }
    }
    printf("Room is not occupied or does not exist.\n");
}


void Booking_History()
{
    char customerName[50];
    while (getchar() != '\n');

    printf("Enter your name to see booking history: ");
    gets(customerName);

    printf("Booking History for %s:\n", customerName);
    for (int i = 0; i < MAX_ROOMS; i++)
    {
        if (strcmp(customerNames[i], customerName) == 0)
        {
            printf("Room Number: %d\n", rooms[i]);
            printf("Check-In Date: %s\n", checkInDates[rooms[i] % MAX_ROOMS]);
            printf("Check-Out Date: %s\n", strcmp(checkOutDates[rooms[i] % MAX_ROOMS], "") == 0 ? "Not checked out yet" : checkOutDates[rooms[i] % MAX_ROOMS]);
            printf("-----------------------\n");
        }
    }
}

int main()
{

    for (int i = 0; i < MAX_ROOMS; i++)
    {
        rooms[i] = (i % 10 + 1) + (i / 10) * 100;
        if (i < 30)
        {
            strcpy(roomTypes[i], "Single");
        }
        else if (i < 60)
        {
            strcpy(roomTypes[i], "Double");
        }
        else if (i < 80)
        {
            strcpy(roomTypes[i], "Deluxe");
        }
        else
        {
            strcpy(roomTypes[i], "Suite");
        }
        strcpy(roomStatuses[i], "available");
        strcpy(customerNames[i], "");
        strcpy(checkInDates[i], "");
        strcpy(checkOutDates[i], "");
    }

    customer_choice();

    return 0;
}
