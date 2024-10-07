#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Global variables
int advance[5] = {750, 500, 400, 500, 750};
int r_no[5] = {1, 2, 3, 4, 5};
int room;
int tot[5] = {0, 0, 0, 0, 0};
int g_tot = 0;
int r_charge[5];
char r_type[5][7];
char r_cust[5][20] = {"N.A", "N.A", "N.A", "N.A", "N.A"};
char c_city[5][20];
char name[30];
int c_mem[5];
char c_nat[5][20];
char r_avail[5] = {'Y', 'Y', 'Y', 'Y', 'Y'};
int r_per[5];
int no[5];
int year[5];
int month[5];
int day[5];
int i;

// Function prototypes
void getavail();
void putavail();
void features();
void allocate();
void putcust();
void restaurant();
void deallocate();
void cancel();
void intro();
void screenheader();

// Function definitions
void screenheader() {
    printf("\n                       :::::::::::::::::::::::::::::::::::::");
    printf("\n                       ::                                 ::");
    printf("\n                       ::     @@@@@@@@@@@@@@@@@@@@@@@     ::");
    printf("\n                       ::     @                     @     ::");
    printf("\n                       ::     @      WELCOME TO     @     ::");
    printf("\n                       ::     @                     @     ::");
    printf("\n                       ::     @ Hotel management    @     ::");
    printf("\n                       ::     @                     @     ::");
    printf("\n                       ::     @@@@@@@@@@@@@@@@@@@@@@@     ::");
    printf("\n                       ::                                 ::");
    printf("\n                       :::::::::::::::::::::::::::::::::::::\n\n");
}

void intro() {
    printf("\n\t             Near BSF Chowk, G.T. Road, Jalandhar City,\n\t\t\t\t Punjab 144001, INDIA");
    printf("\n\n                              Ph. No.:011-27223959");
    printf("\n\n\n                             WELCOMES YOU..............");
    printf("\n\n\n\tHotel Ganga Inn is one of the newest hotels in Jalandhar. The Hotel is ");
    printf("\t\tequipped with general amenities and facilities that go along ");
    printf("\t\twith a memorable stay. Set amidst beautifully landscaped gardens, ");
    printf("\t\tit proves to be an ideal dream destination for the perceptive traveller.");
    printf("\n\n\tThe Hotel has well-furnished rooms with pleasant views of the city. ");
    printf("\tThe hotel satisfies the needs of both business and leisure travellers. ");
    printf("\n\n                             AMENITIES .......\n");
    printf("\n\t\t\t1. 100% Power backup.\n");
    printf("\t\t\t2. Automatic lift.\n");
    printf("\t\t\t3. Ample parking space.\n");
    printf("\t\t\t4. Round the clock security.\n");
    printf("\t\t\t5. Running hot and cold water.\n");
    printf("\t\t\t6. Free internet service.\n");
    printf("\t\t\t7. 24 hours room service.\n");
    printf("\t\t\t8. Laundry service.\n");
    printf("\nPress any key to continue:");
    getchar();  // Instead of getch(), using standard getchar()
}

void getavail() {
    for (i = 0; i < 5; i++) {
        if (r_no[i] == 1) {
            strcpy(r_type[i], "Sp Dlx");
            r_charge[i] = 1500;
            if (strcmp(r_cust[i], "N.A") == 0) {
                r_avail[i] = 'Y';
                r_per[i] = 0;
            }
        } else if (r_no[i] == 2) {
            strcpy(r_type[i], "Dlx");
            r_charge[i] = 1000;
            if (strcmp(r_cust[i], "N.A") == 0) {
                r_avail[i] = 'Y';
                r_per[i] = 0;
            }
        } else if (r_no[i] == 3) {
            strcpy(r_type[i], "Gen");
            r_charge[i] = 750;
            if (strcmp(r_cust[i], "N.A") == 0) {
                r_avail[i] = 'Y';
                r_per[i] = 0;
            }
        } else if (r_no[i] == 4) {
            strcpy(r_type[i], "Coupl");
            r_charge[i] = 1000;
            if (strcmp(r_cust[i], "N.A") == 0) {
                r_avail[i] = 'Y';
                r_per[i] = 0;
            }
        } else if (r_no[i] == 5) {
            strcpy(r_type[i], "C Dlx");
            r_charge[i] = 1500;
            if (strcmp(r_cust[i], "N.A") == 0) {
                r_avail[i] = 'Y';
                r_per[i] = 0;
            }
        }
    }
}

void putavail() {
    printf("\n                          ROOM AVAILABILITY");
    printf("\n                         -------------------");
    printf("\nRoom No | Type  | Charge  | Availability | Cust_Name | Period");
    for (i = 0; i < 5; i++) {
        printf("\n%d\t%s\t%d\t%c\t%s\t%d", r_no[i], r_type[i], r_charge[i], r_avail[i], r_cust[i], r_per[i]);
    }
    printf("\n");
}

void features() {
    int typ;
    printf("\nChoose the room type:\n1. Sp. Deluxe\n2. Deluxe\n3. General\n4. Couple\n5. C. Deluxe\n");
    scanf("%d", &typ);
    if (typ > 5) {
        printf("\nWrong choice!! Choose a number between 1-5:");
        features();
    }
    switch (typ) {
        case 1:
            printf("\n Room number: 1\n Advance: 750\n Room Type: Sp. Deluxe\n Room charges: Rs.1500 per day\n Capacity: 5\n Balcony, A/C, Geyser, and TV available\n");
            break;
        case 2:
            printf("\n Room number: 2\n Advance: 500\n Room Type: Deluxe\n Room charges: Rs.1000 per day\n Capacity: 5\n A/C, Geyser, and TV available\n");
            break;
        case 3:
            printf("\n Room number: 3\n Advance: 400\n Room Type: General\n Room charges: Rs.750 per day\n Capacity: 5\n Geyser available\n");
            break;
        case 4:
            printf("\n Room number: 4\n Advance: 500\n Room Type: Couple\n Room charges: Rs.1000 per day\n Capacity: 2\n Geyser and TV available\n");
            break;
        case 5:
            printf("\n Room number: 5\n Advance: 750\n Room Type: Couple Deluxe\n Room charges: Rs.1500 per day\n Capacity: 2\n A/C, Geyser, and TV available\n");
            break;
    }
}

void allocate() {
    getavail();
    printf("\n Enter the room number in which you want to stay:");
    scanf("%d", &room);
    if (r_avail[room - 1] == 'Y') {
        printf("\n Enter the name of the customer: ");
        scanf(" %[^\n]s", r_cust[room - 1]);  // Using scanf to read a string with spaces
        printf("\n Enter city: ");
        scanf(" %[^\n]s", c_city[room - 1]);
        printf("\n Enter nationality: ");
        scanf(" %[^\n]s", c_nat[room - 1]);
        printf("\n For how many days: ");
        scanf("%d", &r_per[room - 1]);
        printf("\n Enter the number of members: ");
        scanf("%d", &c_mem[room - 1]);
        printf("\n Enter the date of arrival (YYYY MM DD): ");
        scanf("%d %d %d", &year[room - 1], &month[room - 1], &day[room - 1]);
        r_avail[room - 1] = 'N';
        printf("\n Room allocated to %s for %d days.", r_cust[room - 1], r_per[room - 1]);
    } else {
        printf("\n Room is not available.");
    }
}

void deallocate() {
    printf("\n Enter the room number to deallocate: ");
    scanf("%d", &room);
    if (strcmp(r_cust[room - 1], "N.A") == 0) {
        printf("\n The room is empty.");
    } else {
        printf("\n Enter the name of the customer: ");
        scanf(" %[^\n]s", name);
        if (strcasecmp(name, r_cust[room - 1]) == 0) {
            printf("\n Room deallocated.");
            g_tot = r_charge[room - 1] * r_per[room - 1];
            printf("\n Total bill: Rs.%d", g_tot);
            strcpy(r_cust[room - 1], "N.A");
            r_avail[room - 1] = 'Y';
            r_per[room - 1] = 0;
        } else {
            printf("\n The customer name does not match.");
        }
    }
}

void cancel() {
    printf("\n Enter the room number to cancel: ");
    scanf("%d", &room);
    if (strcmp(r_cust[room - 1], "N.A") == 0) {
        printf("\n The room is empty.");
    } else {
        printf("\n Enter the name of the customer: ");
        scanf(" %[^\n]s", name);
        if (strcasecmp(name, r_cust[room - 1]) == 0) {
            printf("\n Room booking canceled.");
            strcpy(r_cust[room - 1], "N.A");
            r_avail[room - 1] = 'Y';
            r_per[room - 1] = 0;
        } else {
            printf("\n The customer name does not match.");
        }
    }
}

void putcust() {
    printf("\n Enter the room number to check the customer details: ");
    scanf("%d", &room);
    if (strcmp(r_cust[room - 1], "N.A") == 0) {
        printf("\n The room is empty.");
    } else {
        printf("\n Room number: %d", r_no[room - 1]);
        printf("\n Name of customer: %s", r_cust[room - 1]);
        printf("\n City: %s", c_city[room - 1]);
        printf("\n Nationality: %s", c_nat[room - 1]);
        printf("\n Arrival date: %d-%d-%d", year[room - 1], month[room - 1], day[room - 1]);
        printf("\n Number of members: %d", c_mem[room - 1]);
        printf("\n Period of stay: %d", r_per[room - 1]);
    }
}

void restaurant() {
    int items, quantity, price = 0, total = 0;
    char choice = 'y';

    printf("\n\n\t\t******* Menu *******\n");
    printf("\n1. Tea - Rs.5");
    printf("\n2. Coffee - Rs.8");
    printf("\n3. Cold Drink - Rs.10");
    printf("\n4. Samosa - Rs.5");
    printf("\n5. Dosa - Rs.30");
    printf("\n6. Idli - Rs.20");
    printf("\n7. Vada - Rs.25");
    printf("\n8. Bhature Chole - Rs.35");
    printf("\n9. Puri Sabji - Rs.30");
    printf("\n10. Noodles - Rs.40");
    printf("\n");

    while (choice == 'y' || choice == 'Y') {
        printf("\nEnter the item number you want: ");
        scanf("%d", &items);
        printf("\nEnter the quantity: ");
        scanf("%d", &quantity);
        
        switch (items) {
            case 1: price = 5 * quantity; break;
            case 2: price = 8 * quantity; break;
            case 3: price = 10 * quantity; break;
            case 4: price = 5 * quantity; break;
            case 5: price = 30 * quantity; break;
            case 6: price = 20 * quantity; break;
            case 7: price = 25 * quantity; break;
            case 8: price = 35 * quantity; break;
            case 9: price = 30 * quantity; break;
            case 10: price = 40 * quantity; break;
            default: printf("\nInvalid item number.");
        }
        total += price;
        printf("\nTotal so far: Rs.%d", total);
        printf("\nDo you want to order more (y/n)? ");
        getchar();  // To clear the newline left by scanf
        scanf("%c", &choice);
    }
    printf("\nFinal total bill: Rs.%d\n", total);
}

int main() {
    int choice;
    intro();
    do {
        screenheader();
        printf("\n1. Features of the rooms");
        printf("\n2. Room Availability");
        printf("\n3. Allocate Room");
        printf("\n4. Deallocate Room");
        printf("\n5. Cancel Room");
        printf("\n6. Restaurant");
        printf("\n7. Customer Details");
        printf("\n8. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: features(); break;
            case 2: putavail(); break;
            case 3: allocate(); break;
            case 4: deallocate(); break;
            case 5: cancel(); break;
            case 6: restaurant(); break;
            case 7: putcust(); break;
            case 8: exit(0);
            default: printf("\nInvalid choice! Please choose again.\n");
        }
        printf("\nPress any key to return to the menu...");
        getchar();  // Use getchar() instead of getch()
        getchar();
    } while (choice != 8);
    
    return 0;
}
