#include <stdio.h>
#include "../include/ui.h"

void displayMenu() {
    printf("\nInventory Management System:\n");
    printf("1. Add\n");
    printf("2. Update\n");
    printf("3. Delete\n");
    printf("4. Search\n");
    printf("5. Low-stock Report\n");
    printf("6. Total Inventory Value\n");
    printf("7. Show All Products\n");
    printf("8. Save and Exit\n");
    printf("\n");
    fflush(stdout);
}
