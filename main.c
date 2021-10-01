#include <stdio.h>
#include <stdlib.h>
#include "temp_api.h"

struct statTemp
{
  int year;
  int month;
  int day;   
  int HH;
  int MM;
  int SS;
  int temperature;
};



void print_menu() {
    system("cls");
    printf("What do you want to do?\n");
    printf("1. Avg Month\n");
    printf("2. Min temp Cur Month\n");
    printf("3. Max temp Cur Month\n");
    printf("4. Avg year temp\n");
    printf("5. Min year temp\n");
    printf("6. Max year temp\n");
    printf("7. Exit\n");
    printf(">");
}

int get_variant(int count) {
    int variant;
    char s[100]; 
    scanf("%s", s);

    
    while (sscanf(s, "%d", &variant) != 1 || variant < 1 || variant > count) {
        printf("Incorrect input. Try again: "); 
        scanf("%s", s); 
    }

    return variant;
}

int main() {
    int variant; 
  
    do {
        print_menu(); 

        variant = get_variant(7); 

        switch (variant) {
            case 1:
                printAvgTempMonth();
                break;

            case 2:
                printMinTempCurMonth();
                break;

            case 3:
                printMaxTempCurMonth();
                break;

            case 4:
                printAvgTempYear();
                break;
            case 5:
                printMinTempYear();;
                break;
             case 6:
                printMaxTempYear();
                break;
             case 7:
                return 0;
                break;
        }

        if (variant != 7)
            system("pause");
    } while (variant != 7);

    return 0;
}
