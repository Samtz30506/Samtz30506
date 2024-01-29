#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(){
system("color 5F");
int begin;
int start=begin;
    int choice =1;
    int a;
    int nambari_za_siri=150,huduma,system_code,idadi=0,kiasi=1;
    int no;
    int amount;

while(nambari_za_siri!=system_code){
    printf("\n tafadhali ingiza nambari_za_siri :");
    scanf("%d", &system_code);
    if(system_code!=nambari_za_siri){
        printf("NDUGU MTEJA NAMBA HII HAIPO.KUPATA HUDUMA ZA TIGO PESA PIGA 150!!!");
    idadi++;
    if(idadi == 3 && nambari_za_siri != system_code){
        exit(0);}
    }
    }
  int option;
  do {
    // Print the options to the user.
     printf("\n\t\t\t KARIBU TigoPesa/EzyPesa\n");
printf("\n\t1.tuma_pesa,\n\t2.vocha_na_vifurushi,\n\t3.kutoa_pesa,\n\t4.lipa bili,\n\t5.lipa kwa simu,\n\t6,jihudumie,\n\t7.huduma za kifedha,\n\t8.language,\n\t9.OFA, \t\t #. menyu kuu\n");
printf("\n\t\t\t chagua huduma :");
scanf("%d", &option);

    // Get the user's input.
    scanf("%d", &option);

    // Check the user's input.
    if (option < 1 || option > 7) {
      printf("Invalid option. Please try again.\n");
    }
  } while (option < 1 || option > 7);
   // Check the user's input.
   loop:
       printf("\t\t %d",a );
       a++;
       if(a <= 7){
        goto loop;//jump back to the lable "loop"
       }

  // Do something with the user's selected option.
  switch (option) {
    case 1:
      // Do something for option 1.
      printf("\n\t\t\t KARIBU TigoPesa/EzyPesa\n");
printf("\n\t1.tuma_pesa,\n\t2.vocha_na_vifurushi,\n\t3.kutoa_pesa,\n\t4.lipa bili,\n\t5.lipa kwa simu,\n\t6,jihudumie,\n\t7.huduma za kifedha,\n\t8.language,\n\t9.OFA, \t\t #. menyu kuu\n");
printf("\n\t\t\t chagua huduma :");
scanf("%d", &option);
 printf("\n\t 1.kwa namba ya simu,\n\t 2.tuma na ya kutolea,\n\t 3.mitandao mengine,\n\t 4;ttuma nje ya nchi,\n\t 5.kama vocha,\n\t 6.kwa mawasiliano");
scanf("%d", &option);
 printf("\n\t\t ingiza namba ya mpokeaji :\n");
 scanf("%d", &no);
 printf("\t\t ingiza kiasi\n");
 scanf("\t\%d", &amount);
 printf("\t\t muamala wako unafanyiwa kazi utapokea ujumbe mfupi wa maandishi asante\n");
 printf("\t\t AHSANTE KWA KUTEMBELEA TIGOPESA KARBU TENA\n");
 break;
    case 2:
      // Do something for option 2.
      printf("\t\t 1.BINAFSI\n \t\t 2.MNUNULIE RAFIKI\n \t\t 3.MITANDAO MENGNE\n \t\t #. menyu kuu\n ");
      scanf("%d", &no);
      while(choice==1){
            printf("\t\t (1 , 0 to exit):");
            scanf("%d", &choice);
printf("ingiza namba ya mpokeaji");
scanf("%d", &no);
printf("ingiza kiasi");
scanf("%d", &amount);
printf("\t\t muamala wako unfanyiwa kazi utapokea ujumbe mfupi wa maandishi ahsante\n");
      break;
    case 3:
      // Do something for option 3.
       while(choice==1){
            printf("\t\t (1 , 0 to exit):");
            scanf("%d", &choice);
      printf("\t\t Ingiza namba ya wakala kwa USAHIHI\n");
      printf("\t\t #. menyu kuu\n");
      scanf("d", &no);
      printf("\t\t Ingiza kiasi\n");
      scanf("%d", &no);
      printf("\t\t Ingiza namba ya siri ya tigo pesa\n");
      scanf("%d", &no);
      printf("\t\t Muamala wako unfanyiwa kazi utapokea ujumbe mfupi wa maandishi ahsante\n");
      printf("\t\t ASANTE KWA KUTEMBELEA TIGO\n");
      break;
    case 4:
        //initialize choise to continue
        while(choice==1){
            printf("\t\t ?(1 , 0 to exit):");
            scanf("%d", &choice);
        printf("\t\t MALIPO\n");
        printf("\t\t 1.LUKU/TUKUZA\n");
        printf("\t\t 2.Kupata namba ya kampuni\n");
        printf("\t\t 3.Ingiza namba ya kampuni\n");
        printf("\t\t 4.Hifadhi namba\n, \t\t 5.malipo ya serekali\n, \t\t 7.michezo\n, \t\t 8.malipo ya SMZ\n");
        scanf("%d", &no);
        printf("\t\t 1.lipia ving'amuzi\n, \t\t ingiza namba ya kisimbusi\n");
        scanf("%d", &no);
        printf("\t\t unalipia ZCTV\n");
        printf("\t\t 1.NDIO\n, \t\t 2.HAPANA\n");
        scanf("%d", &no);
        printf("\t\t Chagua malipo\n \t\t 1.SIKU 3\n, \t\t 2.WIKI\n, \t\t 3.MWEZI\n");
        scanf("%d", &no);
        printf("\t\t Ingiza na ya siri\n");
        scanf("%d", &no);
        printf("\t\t Muamala wako unashughulikiwa utapokea ujumbe mfupi\n");
        //initialize choise to continue
        break;

        }
  }

}
      }
  }

