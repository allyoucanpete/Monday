#include <stdlib.h>
#include <stdio.h>

#include <libmonday_wrapper.h>

int main(int argc, char **argv) {
  char* messages[] = {
    "XXXYYYZZZ1 confirmed.You bought Ksh100.00 of airtime on 27/4/21 at 11:05 AM.New M-PESA balance is Ksh5,350.22. transactions.Transaction cost, Ksh0.00. Amount you can transact within the day is 299,900.00. SAFARICOM ONLY CALLS YOU FROM 0722000000. To reverse, forward this message to 456.",
    "Hello World",
    "XXXYYYZZZ2 confirmed.You bought Ksh30.00 of airtime on 25/4/21 at 3:45 PM.New M-PESA balance is Ksh5,450.22. transactions.Transaction cost, Ksh0.00. Amount you can transact within the day is 299,940.00. SAFARICOM ONLY CALLS YOU FROM 0722000000. To reverse, forward this message to 456.",
    "XXXYYYZZZ3 Confirmed. Ksh500.00 sent to KPLC PREPAID for account 123456789 on 23/4/21 at 9:57 PM New M-PESA balance is Ksh5,941.22. transactions.Transaction cost, Ksh23.00. Amount you can transact within the day is 296,283.00.",
    "XXXYYYZZZ4 Confirmed. Ksh607.00 paid to SUPERMARKET FULANI HAPO. on 23/4/21 at 3:26 PM.New M-PESA balance is Ksh6,494.22. transactions.Transaction cost, Ksh0.00. Amount you can transact within the day is 296,813.00.You can now access M-PESA via *334#",
    "XXXYYYZZZ5 Confirmed. Ksh1,030.00 sent to MSEE FULANI HAPO +254722222222 on 23/4/21 at 2:38 PM. New M-PESA balance is Ksh7. transactions.Transaction cost, Ksh22.00. Amount you can transact within the day is 297,420.00. SAFARICOM ONLY CALLS YOU FROM 0722000000. To reverse, forward this message to 456.",
    "Another message",
    "XXXYYYZZZ6 Confirmed.on 23/4/21 at 12:31 PMWithdraw Ksh1,500.00 from 010000 - Shop fulani hapo New M-PESA balance is Ksh8. transactions.Transaction cost, Ksh28.00. Amount you can transact within the day is 298,500.00.",
    "XXXYYYZZZ9 Confirmed. Ksh80.00 sent to MSEE WA CHIPO 0704444444 on 12/4/21 at 1:57 PM. New M-PESA balance is Ksh 210. transactions.Transaction cost, Ksh0.00. Amount you can transact within the day is 296,665.00. SAFARICOM ONLY CALLS YOU FROM 0722000000. To reverse, forward this message to 456.",
    "XXXYYYZZZ10 Confirmed. Ksh700.00 paid to GEL NAIL SHOP. on 17/3/21 at 6:54 PM.New M-PESA balance is Ksh3,646.22. transactions.Transaction cost, Ksh0.00. Amount you can transact within the day is 299,300.00.You can now access M-PESA via *334#",
    "XXXYYYZZZ11 Confirmed. On 25/7/20 at 3:29 PM Give Ksh2,000.00 cash to Agent fulani New M-PESA balance is Ksh2,100.22",
  };

  for (int i = 0; i <= 10; ++i) {
    char* message = messages[i];
    int isTransaction = test_fn(message);

    printf("Is transaction? %d\n", isTransaction);

    if (isTransaction) {
      printf("Transaction type: %s\n", detect_fn(message));
      printf("Transaction data: %s\n", parse_fn(message));
    } else {
      printf("Message: %s\n", message);
    }

    printf("\n");
  }

  return 0;
}
