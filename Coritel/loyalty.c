#include <stdio.h>

#define LOYALTY_HIGH 'H'
#define LOYALTY_MID 'M'
#define LOYALTY_LOW 'L'
#define RATE_LOY_HIGH 0.15
#define RATE_LOY_MID 0.08
#define RATE_LOY_LOW 0.04
#define RATE_BELOW_MIN 0.02
#define DISC_MIN_SALES 20000

int main(void){
  char cLoyaltyCd;
  int iValid = 1,
      EndProgram;
  double dGrossSales,
      dNetSales,
      dDiscAmnt;

  printf("Enter gross sale (US$):");
  scanf("%lf", &dGrossSales);

  while (iValid){
    printf("Choose the buyer's loyalty code: (H)igh, (M)edium, (L)ow: ");
    scanf("%s", &cLoyaltyCd);
    if (cLoyaltyCd != LOYALTY_HIGH &&
        cLoyaltyCd != LOYALTY_MID &&
        cLoyaltyCd != LOYALTY_LOW){
      puts("You've entered an invalid code.");
      puts("Valid codes are: H, M or L");
    } else {
      iValid = 0;
    }
  }

  switch (cLoyaltyCd){
    case LOYALTY_HIGH:
      if (dGrossSales >= DISC_MIN_SALES)
        dDiscAmnt = dGrossSales * RATE_LOY_HIGH;
      else
        dDiscAmnt = dGrossSales * ( RATE_LOY_HIGH - RATE_BELOW_MIN );
      break;
  }
  
  dNetSales = dGrossSales - dDiscAmnt;
  printf("Discount amont: US$ %.2lf\n", dDiscAmnt);
  printf("Net Sales: US$ %.2lf\n", dNetSales);

  return 0;
}

