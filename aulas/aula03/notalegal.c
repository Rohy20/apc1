#include <stdio.h>

int main() {
printf("\x1b[32m----------------------------\n");
printf("     N O T A  L E G A L     \n");
printf("----------------------------\x1b[0m\n");
printf("\x1b[36mITEM\x1b[0m           QTD   VALOR\n");
printf("\x1b[36m%13s\x1b[0m %3i %8.2f\n", "Banana Nanica", 1, 15.00);
printf("\x1b[36m%13s\x1b[0m %3i %8.2f\n", "Maca Fuji", 10, 50.00);
printf("\x1b[36m%13s\x1b[0m %3i %8.2f\n", "Uva Globo", 5, 26.00);
//printf("Banana nanica     1    15.00\n");
//printf("Maca fuji         10   50.00\n");
//printf("Uva                5   26.00\n");
printf("----------------------------\n");
printf("\x1b[31mTOTAL.........:   %8.2f\x1b[0m\n", 91.00); 
  return 0;
}