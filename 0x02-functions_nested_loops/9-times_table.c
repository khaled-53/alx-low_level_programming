#include <stdio.h>

void times_table(void) {
   int num, mult, prod;

   for (num = 0; num <= 9; num++) {
       _putchar('0');  // Print the initial '0'

       for (mult = 1; mult <= 9; mult++) {
           _putchar(',');
           _putchar(' ');

           prod = num * mult;

           if (prod <= 9) {
               _putchar(' ');  // Align single-digit products
           } else {
               _putchar((prod / 10) + '0');  // Print tens digit
           }

           _putchar((prod % 10) + '0');  // Print ones digit
       }

       _putchar('\n');  // Move to the next line
   }
}
