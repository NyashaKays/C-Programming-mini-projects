#include <stdio.h>


int main(void)
{
    char code[6], short_code[6], ASSEMBLY[100], PURPOSE[100];
    int AMOUNT, option, second_option, customer_number, third_option;
    int Send_to_Bank, Bank_acc_no, bank, reciepient_number;
    int option2, option3, option4, option5, option6, option7;
    int option8, BankingMenu, BillerCode, REFNO;
    char Reason[100];
    int i = 0, pin, pass = 1845;
    int value;
    printf("Enter Ecocash Shortcode\n");
    strcpy(code,"*151#");
    scanf("%s",&short_code);
    value = strcmp(code,short_code);
    if(value != 1){
    printf("Welcome to Ecocash\n");
    printf("Enter PIN to start\n");
    scanf("%d",&pin);

    if(pin == pass){
        printf("1. Send Money\n");
        printf("2. Make Payment\n");
        printf("3. Cashout\n");
        printf("4. Artime & Bundles\n");
        printf("5. Ecocash Diaspora\n");
        printf("6. Kashagi & Savings Club\n");
        printf("7. Wallet Services\n");
        printf("8. Banking Services\n");

        printf("Reply:\n");
        scanf("%d",&option);

        switch(option)
        {
        case 1:
            printf("1. Send to registered customer\n");
            printf("2. Send to unregistered customer\n");
            printf("3. Ecoshopper Purchase\n");
            printf("4. Check Wallet Balance\n");
            printf("5. Send to Account\n");

            printf("\nPress * for\n");
            printf("n Next\n");
            scanf("%d",&second_option);

            switch(second_option)
            {
            case 1:
                printf("Enter Subscriber number:\n");
                printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                scanf("%d",&customer_number);

                printf("\nEnter Ammount:\n");
                printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                scanf("%d",&AMOUNT);

                printf("\nSending RTGS$ %d to %d Nyashadzashe Theophilus Katsidzira\n", AMOUNT, customer_number);
                printf("Enter\n");
                printf("1. Confirm\n");
                printf("2. Cancel\n");
                scanf("%d",&third_option);

                if(third_option == 1)
                {
                    printf("You have successfully sent RTGS$ %d to Nyashadzashe\n", AMOUNT);
                    printf("Theophilus Katsidzira Approval code:- PP220232.1134.G97665\n");
                }
                else
                {
                    printf("You have Cancelled the transaction. Thank you\n");
                }
                break;

                case 2:
                printf("Enter customer number:\n");
                printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                scanf("%d",&customer_number);

                printf("\nEnter Ammount:\n");
                printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                scanf("%d",&AMOUNT);

                printf("\nSending RTGS$ %d to %d\n", AMOUNT, customer_number);
                printf("Enter\n");
                printf("1. Confirm\n");
                printf("2. Cancel\n");
                scanf("%d",&third_option);

                if(third_option == 1)
                {
                    printf("You have successfully sent RTGS$ %d to %d\n", AMOUNT, customer_number);
                    printf("Approval code:- PP320262.1194.H97665\n");
                }
                else
                {
                    printf("You have Cancelled the transaction. Thank you\n");
                }
                break;

            case 3:
                printf("Please Enter Recepient's Mobile Number\n");
                printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                scanf("%d",&customer_number);

                printf("SUCCESS\n");
                break;

            case 4:
                printf("Your Balance is RTGS$:650000.38. You can dowload your account\n");
                printf("statement on the EcoCash App\n");
                break;

            case 5:
                printf("1. Send to Bank\n");
                printf("2. Send to Mobile Money\n");
                scanf("%d",&Send_to_Bank);

                switch(Send_to_Bank)
                {
                case 1:
                    printf("Select Destination\n");
                    printf("1. Agribank\n");
                    printf("2. BancABC\n");
                    printf("3. CABS\n");
                    printf("4. CBZ\n");
                    printf("5. Ecobank\n");
                    printf("6. FBC Bank\n");
                    printf("7. First Capital\n");
                    printf("8. Nedbank\n");
                    printf("9. NMB\n");
                    printf("10. NBS\n");
                    printf("11. POSB \n");
                    printf("12. Stanbic\n");
                    printf("13.Standard Charted\n");
                    printf("14. ZB Bank\n");
                    printf("15. Empower Bank\n");
                    printf("16. FBC Bld Society\n");
                    printf("17. African Society\n");
                    printf("18. Success Bank\n");
                    printf("19. GetBucks\n");
                    printf("20. MetBank\n");
                    printf("21. LION\n");
                    printf("22. ZWMB\n");
                    printf("n Next\n\n");
                    scanf("%d",&bank);

                    switch(bank)
                    {
                case 1:
                    printf("Enter the Agribank recieving account number:\n");
                    scanf("%d",&Bank_acc_no);

                    printf("Enter reciepient phone number:\n");
                    scanf("%d",&reciepient_number);

                    printf("Enter Amount you want to transfer:\n");
                    scanf("%d",&AMOUNT);

                    printf("Reason for transfer\n");
                    scanf("%s",&Reason);

                    printf("\nSending RTGS$ %d to Agribank account no %d for %s:\n",AMOUNT, Bank_acc_no, Reason);
                    printf("Enter\n");
                    printf("1. Confirm\n");
                    printf("2. Cancel\n");
                    scanf("%d",&third_option);

                    if(third_option == 1)
                    {
                        printf("\nYou have successfully sent RTGS$ %d to Agribank acc %d\n", AMOUNT, Bank_acc_no);
                        printf("Approval code:- PP920762.1194.Y87465\n");
                    }
                    else
                    {
                        printf("You have Cancelled the transaction. Thank you\n");
                    }
                    break;

                case 2:
                    printf("Enter the BancABC recieving account number:\n");
                    scanf("%d",&Bank_acc_no);

                    printf("Enter reciepient phone number:\n");
                    scanf("%d",&reciepient_number);

                    printf("Enter Amount you want to transfer:\n");
                    scanf("%d",&AMOUNT);

                    printf("Reason for transfer\n");
                    scanf("%s",&Reason);

                    printf("\nSending RTGS$ %d to BancABC account no %d for %s:\n",AMOUNT, Bank_acc_no, Reason);
                    printf("Enter\n");
                    printf("1. Confirm\n");
                    printf("2. Cancel\n");
                    scanf("%d",&third_option);

                    if(third_option == 1)
                    {
                        printf("\nYou have successfully sent RTGS$ %d to BancABC acc %d\n", AMOUNT, Bank_acc_no);
                        printf("Approval code:- PP920762.1194.Y87465\n");
                    }
                    else
                    {
                        printf("You have Cancelled the transaction. Thank you\n");
                    }
                    break;

                case 3:
                    printf("Enter the CABS recieving account number:\n");
                    scanf("%d",&Bank_acc_no);

                    printf("Enter reciepient phone number:\n");
                    scanf("%d",&reciepient_number);

                    printf("Enter Amount you want to transfer:\n");
                    scanf("%d",&AMOUNT);

                    printf("Reason for transfer\n");
                    scanf("%s",&Reason);

                    printf("\nSending RTGS$ %d to CABS account no %d for %s:\n",AMOUNT, Bank_acc_no, Reason);
                    printf("Enter\n");
                    printf("1. Confirm\n");
                    printf("2. Cancel\n");
                    scanf("%d",&third_option);

                    if(third_option == 1)
                    {
                        printf("\nYou have successfully sent RTGS$ %d to CABS acc %d\n", AMOUNT, Bank_acc_no);
                        printf("Approval code:- PP920762.1194.Y87465\n");
                    }
                    else
                    {
                        printf("You have Cancelled the transaction. Thank you\n");
                    }
                    break;

                case 4:
                    printf("Enter the CBZ recieving account number:\n");
                    scanf("%d",&Bank_acc_no);

                    printf("Enter reciepient phone number:\n");
                    scanf("%d",&reciepient_number);

                    printf("Enter Amount you want to transfer:\n");
                    scanf("%d",&AMOUNT);

                    printf("Reason for transfer\n");
                    scanf("%s",&Reason);

                    printf("\nSending RTGS$ %d to CBZ account no %d for %s:\n",AMOUNT, Bank_acc_no, Reason);
                    printf("Enter\n");
                    printf("1. Confirm\n");
                    printf("2. Cancel\n");
                    scanf("%d",&third_option);

                    if(third_option == 1)
                    {
                        printf("\nYou have successfully sent RTGS$ %d to CBZ acc %d\n", AMOUNT, Bank_acc_no);
                        printf("Approval code:- PP920762.1194.Y87465\n");
                    }
                    else
                    {
                        printf("You have Cancelled the transaction. Thank you\n");
                    }
                    break;

                case 5:
                    printf("Enter the Ecobank recieving account number:\n");
                    scanf("%d",&Bank_acc_no);

                    printf("Enter reciepient phone number:\n");
                    scanf("%d",&reciepient_number);

                    printf("Enter Amount you want to transfer:\n");
                    scanf("%d",&AMOUNT);

                    printf("Reason for transfer\n");
                    scanf("%s",&Reason);

                    printf("\nSending RTGS$ %d to Ecobank account no %d for %s:\n",AMOUNT, Bank_acc_no, Reason);
                    printf("Enter\n");
                    printf("1. Confirm\n");
                    printf("2. Cancel\n");
                    scanf("%d",&third_option);

                    if(third_option == 1)
                    {
                        printf("\nYou have successfully sent RTGS$ %d to Ecobank acc %d\n", AMOUNT, Bank_acc_no);
                        printf("Approval code:- PP920762.1194.Y87465\n");
                    }
                    else
                    {
                        printf("You have Cancelled the transaction. Thank you\n");
                    }
                    break;

                case 6:
                    printf("Enter the FBC Bank recieving account number:\n");
                    scanf("%d",&Bank_acc_no);

                    printf("Enter reciepient phone number:\n");
                    scanf("%d",&reciepient_number);

                    printf("Enter Amount you want to transfer:\n");
                    scanf("%d",&AMOUNT);

                    printf("Reason for transfer\n");
                    scanf("%s",&Reason);

                    printf("\nSending RTGS$ %d to FBC Bank account no %d for %s:\n",AMOUNT, Bank_acc_no, Reason);
                    printf("Enter\n");
                    printf("1. Confirm\n");
                    printf("2. Cancel\n");
                    scanf("%d",&third_option);

                    if(third_option == 1)
                    {
                        printf("\nYou have successfully sent RTGS$ %d to FBC Bank acc %d\n", AMOUNT, Bank_acc_no);
                        printf("Approval code:- PP920762.1194.Y87465\n");
                    }
                    else
                    {
                        printf("You have Cancelled the transaction. Thank you\n");
                    }
                    break;

                case 7:
                    printf("Enter the First Capital recieving account number:\n");
                    scanf("%d",&Bank_acc_no);

                    printf("Enter reciepient phone number:\n");
                    scanf("%d",&reciepient_number);

                    printf("Enter Amount you want to transfer:\n");
                    scanf("%d",&AMOUNT);

                    printf("Reason for transfer\n");
                    scanf("%s",&Reason);

                    printf("\nSending RTGS$ %d to First Capital account no %d for %s:\n",AMOUNT, Bank_acc_no, Reason);
                    printf("Enter\n");
                    printf("1. Confirm\n");
                    printf("2. Cancel\n");
                    scanf("%d",&third_option);

                    if(third_option == 1)
                    {
                        printf("\nYou have successfully sent RTGS$ %d to First Capital acc %d\n", AMOUNT, Bank_acc_no);
                        printf("Approval code:- PP920762.1194.Y87465\n");
                    }
                    else
                    {
                        printf("You have Cancelled the transaction. Thank you\n");
                    }
                    break;

                case 8:
                    printf("Enter the Nedbank recieving account number:\n");
                    scanf("%d",&Bank_acc_no);

                    printf("Enter reciepient phone number:\n");
                    scanf("%d",&reciepient_number);

                    printf("Enter Amount you want to transfer:\n");
                    scanf("%d",&AMOUNT);

                    printf("Reason for transfer\n");
                    scanf("%s",&Reason);

                    printf("\nSending RTGS$ %d to Nedbank account no %d for %s:\n",AMOUNT, Bank_acc_no, Reason);
                    printf("Enter\n");
                    printf("1. Confirm\n");
                    printf("2. Cancel\n");
                    scanf("%d",&third_option);

                    if(third_option == 1)
                    {
                        printf("\nYou have successfully sent RTGS$ %d to Nedbank acc %d\n", AMOUNT, Bank_acc_no);
                        printf("Approval code:- PP920762.1194.Y87465\n");
                    }
                    else
                    {
                        printf("You have Cancelled the transaction. Thank you\n");
                    }
                    break;

                case 9:
                    printf("Enter the NMB recieving account number:\n");
                    scanf("%d",&Bank_acc_no);

                    printf("Enter reciepient phone number:\n");
                    scanf("%d",&reciepient_number);

                    printf("Enter Amount you want to transfer:\n");
                    scanf("%d",&AMOUNT);

                    printf("Reason for transfer\n");
                    scanf("%s",&Reason);

                    printf("\nSending RTGS$ %d to NMB account no %d for %s:\n",AMOUNT, Bank_acc_no, Reason);
                    printf("Enter\n");
                    printf("1. Confirm\n");
                    printf("2. Cancel\n");
                    scanf("%d",&third_option);

                    if(third_option == 1)
                    {
                        printf("\nYou have successfully sent RTGS$ %d to NMB acc %d\n", AMOUNT, Bank_acc_no);
                        printf("Approval code:- PP920762.1194.Y87465\n");
                    }
                    else
                    {
                        printf("You have Cancelled the transaction. Thank you\n");
                    }
                    break;

                case 10:
                    printf("Enter the NBS recieving account number:\n");
                    scanf("%d",&Bank_acc_no);

                    printf("Enter reciepient phone number:\n");
                    scanf("%d",&reciepient_number);

                    printf("Enter Amount you want to transfer:\n");
                    scanf("%d",&AMOUNT);

                    printf("Reason for transfer\n");
                    scanf("%s",&Reason);

                    printf("\nSending RTGS$ %d to NBS account no %d for %s:\n",AMOUNT, Bank_acc_no, Reason);
                    printf("Enter\n");
                    printf("1. Confirm\n");
                    printf("2. Cancel\n");
                    scanf("%d",&third_option);

                    if(third_option == 1)
                    {
                        printf("\nYou have successfully sent RTGS$ %d to NBS acc %d\n", AMOUNT, Bank_acc_no);
                        printf("Approval code:- PP920762.1194.Y87465\n");
                    }
                    else
                    {
                        printf("You have Cancelled the transaction. Thank you\n");
                    }
                    break;

                case 11:
                    printf("Enter the POSB recieving account number:\n");
                    scanf("%d",&Bank_acc_no);

                    printf("Enter reciepient phone number:\n");
                    scanf("%d",&reciepient_number);

                    printf("Enter Amount you want to transfer:\n");
                    scanf("%d",&AMOUNT);

                    printf("Reason for transfer\n");
                    scanf("%s",&Reason);

                    printf("\nSending RTGS$ %d to POSB account no %d for %s:\n",AMOUNT, Bank_acc_no, Reason);
                    printf("Enter\n");
                    printf("1. Confirm\n");
                    printf("2. Cancel\n");
                    scanf("%d",&third_option);

                    if(third_option == 1)
                    {
                        printf("\nYou have successfully sent RTGS$ %d to POSB acc %d\n", AMOUNT, Bank_acc_no);
                        printf("Approval code:- PP920762.1194.Y87465\n");
                    }
                    else
                    {
                        printf("You have Cancelled the transaction. Thank you\n");
                    }
                    break;

                case 12:
                    printf("Enter the Stanbic recieving account number:\n");
                    scanf("%d",&Bank_acc_no);

                    printf("Enter reciepient phone number:\n");
                    scanf("%d",&reciepient_number);

                    printf("Enter Amount you want to transfer:\n");
                    scanf("%d",&AMOUNT);

                    printf("Reason for transfer\n");
                    scanf("%s",&Reason);

                    printf("\nSending RTGS$ %d to Stanbic account no %d for %s:\n",AMOUNT, Bank_acc_no, Reason);
                    printf("Enter\n");
                    printf("1. Confirm\n");
                    printf("2. Cancel\n");
                    scanf("%d",&third_option);

                    if(third_option == 1)
                    {
                        printf("\nYou have successfully sent RTGS$ %d to Stanbic acc %d\n", AMOUNT, Bank_acc_no);
                        printf("Approval code:- PP920762.1194.Y87465\n");
                    }
                    else
                    {
                        printf("You have Cancelled the transaction. Thank you\n");
                    }
                    break;

                case 13:
                    printf("Enter the Standard Charted recieving account number:\n");
                    scanf("%d",&Bank_acc_no);

                    printf("Enter reciepient phone number:\n");
                    scanf("%d",&reciepient_number);

                    printf("Enter Amount you want to transfer:\n");
                    scanf("%d",&AMOUNT);

                    printf("Reason for transfer\n");
                    scanf("%s",&Reason);

                    printf("\nSending RTGS$ %d to Standard Charted account no %d for %s:\n",AMOUNT, Bank_acc_no, Reason);
                    printf("Enter\n");
                    printf("1. Confirm\n");
                    printf("2. Cancel\n");
                    scanf("%d",&third_option);

                    if(third_option == 1)
                    {
                        printf("\nYou have successfully sent RTGS$ %d to Standard Charted acc %d\n", AMOUNT, Bank_acc_no);
                        printf("Approval code:- PP920762.1194.Y87465\n");
                    }
                    else
                    {
                        printf("You have Cancelled the transaction. Thank you\n");
                    }
                    break;

                case 14:
                    printf("Enter the ZB Bank recieving account number:\n");
                    scanf("%d",&Bank_acc_no);

                    printf("Enter reciepient phone number:\n");
                    scanf("%d",&reciepient_number);

                    printf("Enter Amount you want to transfer:\n");
                    scanf("%d",&AMOUNT);

                    printf("Reason for transfer\n");
                    scanf("%s",&Reason);

                    printf("\nSending RTGS$ %d to ZB Bank account no %d for %s:\n",AMOUNT, Bank_acc_no, Reason);
                    printf("Enter\n");
                    printf("1. Confirm\n");
                    printf("2. Cancel\n");
                    scanf("%d",&third_option);

                    if(third_option == 1)
                    {
                        printf("\nYou have successfully sent RTGS$ %d to ZB Bank acc %d\n", AMOUNT, Bank_acc_no);
                        printf("Approval code:- PP920762.1194.Y87465\n");
                    }
                    else
                    {
                        printf("You have Cancelled the transaction. Thank you\n");
                    }
                    break;

                case 15:
                    printf("Enter the Empower Bank recieving account number:\n");
                    scanf("%d",&Bank_acc_no);

                    printf("Enter reciepient phone number:\n");
                    scanf("%d",&reciepient_number);

                    printf("Enter Amount you want to transfer:\n");
                    scanf("%d",&AMOUNT);

                    printf("Reason for transfer\n");
                    scanf("%s",&Reason);

                    printf("\nSending RTGS$ %d to Empower Bank account no %d for %s:\n",AMOUNT, Bank_acc_no, Reason);
                    printf("Enter\n");
                    printf("1. Confirm\n");
                    printf("2. Cancel\n");
                    scanf("%d",&third_option);

                    if(third_option == 1)
                    {
                        printf("\nYou have successfully sent RTGS$ %d to Empower Bank acc %d\n", AMOUNT, Bank_acc_no);
                        printf("Approval code:- PP920762.1194.Y87465\n");
                    }
                    else
                    {
                        printf("You have Cancelled the transaction. Thank you\n");
                    }
                    break;

                case 16:
                    printf("Enter the FBC Bld Society recieving account number:\n");
                    scanf("%d",&Bank_acc_no);

                    printf("Enter reciepient phone number:\n");
                    scanf("%d",&reciepient_number);

                    printf("Enter Amount you want to transfer:\n");
                    scanf("%d",&AMOUNT);

                    printf("Reason for transfer\n");
                    scanf("%s",&Reason);

                    printf("\nSending RTGS$ %d to FBC Bld Society account no %d for %s:\n",AMOUNT, Bank_acc_no, Reason);
                    printf("Enter\n");
                    printf("1. Confirm\n");
                    printf("2. Cancel\n");
                    scanf("%d",&third_option);

                    if(third_option == 1)
                    {
                        printf("\nYou have successfully sent RTGS$ %d to FBC Bld Society acc %d\n", AMOUNT, Bank_acc_no);
                        printf("Approval code:- PP920762.1194.Y87465\n");
                    }
                    else
                    {
                        printf("You have Cancelled the transaction. Thank you\n");
                    }
                    break;

                case 17:
                    printf("Enter the African Century recieving account number:\n");
                    scanf("%d",&Bank_acc_no);

                    printf("Enter reciepient phone number:\n");
                    scanf("%d",&reciepient_number);

                    printf("Enter Amount you want to transfer:\n");
                    scanf("%d",&AMOUNT);

                    printf("Reason for transfer\n");
                    scanf("%s",&Reason);

                    printf("\nSending RTGS$ %d to African Century account no %d for %s:\n",AMOUNT, Bank_acc_no, Reason);
                    printf("Enter\n");
                    printf("1. Confirm\n");
                    printf("2. Cancel\n");
                    scanf("%d",&third_option);

                    if(third_option == 1)
                    {
                        printf("\nYou have successfully sent RTGS$ %d to African Century acc %d\n", AMOUNT, Bank_acc_no);
                        printf("Approval code:- PP920762.1194.Y87465\n");
                    }
                    else
                    {
                        printf("You have Cancelled the transaction. Thank you\n");
                    }
                    break;

                case 18:
                    printf("Enter the Success Bank recieving account number:\n");
                    scanf("%d",&Bank_acc_no);

                    printf("Enter reciepient phone number:\n");
                    scanf("%d",&reciepient_number);

                    printf("Enter Amount you want to transfer:\n");
                    scanf("%d",&AMOUNT);

                    printf("Reason for transfer\n");
                    scanf("%s",&Reason);

                    printf("\nSending RTGS$ %d to Success Bank account no %d for %s:\n",AMOUNT, Bank_acc_no, Reason);
                    printf("Enter\n");
                    printf("1. Confirm\n");
                    printf("2. Cancel\n");
                    scanf("%d",&third_option);

                    if(third_option == 1)
                    {
                        printf("\nYou have successfully sent RTGS$ %d to Success Bank acc %d\n", AMOUNT, Bank_acc_no);
                        printf("Approval code:- PP920762.1194.Y87465\n");
                    }
                    else
                    {
                        printf("You have Cancelled the transaction. Thank you\n");
                    }
                    break;

                case 19:
                    printf("Enter the GetBucks recieving account number:\n");
                    scanf("%d",&Bank_acc_no);

                    printf("Enter reciepient phone number:\n");
                    scanf("%d",&reciepient_number);

                    printf("Enter Amount you want to transfer:\n");
                    scanf("%d",&AMOUNT);

                    printf("Reason for transfer\n");
                    scanf("%s",&Reason);

                    printf("\nSending RTGS$ %d to GetBucks account no %d for %s:\n",AMOUNT, Bank_acc_no, Reason);
                    printf("Enter\n");
                    printf("1. Confirm\n");
                    printf("2. Cancel\n");
                    scanf("%d",&third_option);

                    if(third_option == 1)
                    {
                        printf("\nYou have successfully sent RTGS$ %d to GetBucks acc %d\n", AMOUNT, Bank_acc_no);
                        printf("Approval code:- PP920762.1194.Y87465\n");
                    }
                    else
                    {
                        printf("You have Cancelled the transaction. Thank you\n");
                    }
                    break;

                case 20:
                    printf("Enter the MetBank recieving account number:\n");
                    scanf("%d",&Bank_acc_no);

                    printf("Enter reciepient phone number:\n");
                    scanf("%d",&reciepient_number);

                    printf("Enter Amount you want to transfer:\n");
                    scanf("%d",&AMOUNT);

                    printf("Reason for transfer\n");
                    scanf("%s",&Reason);

                    printf("\nSending RTGS$ %d to MetBank account no %d for %s:\n",AMOUNT, Bank_acc_no, Reason);
                    printf("Enter\n");
                    printf("1. Confirm\n");
                    printf("2. Cancel\n");
                    scanf("%d",&third_option);

                    if(third_option == 1)
                    {
                        printf("\nYou have successfully sent RTGS$ %d to MetBank acc %d\n", AMOUNT, Bank_acc_no);
                        printf("Approval code:- PP920762.1194.Y87465\n");
                    }
                    else
                    {
                        printf("You have Cancelled the transaction. Thank you\n");
                    }
                    break;

                case 21:
                    printf("Enter the LION recieving account number:\n");
                    scanf("%d",&Bank_acc_no);

                    printf("Enter reciepient phone number:\n");
                    scanf("%d",&reciepient_number);

                    printf("Enter Amount you want to transfer:\n");
                    scanf("%d",&AMOUNT);

                    printf("Reason for transfer\n");
                    scanf("%s",&Reason);

                    printf("\nSending RTGS$ %d to LION account no %d for %s:\n",AMOUNT, Bank_acc_no, Reason);
                    printf("Enter\n");
                    printf("1. Confirm\n");
                    printf("2. Cancel\n");
                    scanf("%d",&third_option);

                    if(third_option == 1)
                    {
                        printf("\nYou have successfully sent RTGS$ %d to LION acc %d\n", AMOUNT, Bank_acc_no);
                        printf("Approval code:- PP920762.1194.Y87465\n");
                    }
                    else
                    {
                        printf("You have Cancelled the transaction. Thank you\n");
                    }
                    break;

                case 22:
                    printf("Enter the ZWMB recieving account number:\n");
                    scanf("%d",&Bank_acc_no);

                    printf("Enter reciepient phone number:\n");
                    scanf("%d",&reciepient_number);

                    printf("Enter Amount you want to transfer:\n");
                    scanf("%d",&AMOUNT);

                    printf("Reason for transfer\n");
                    scanf("%s",&Reason);

                    printf("\nSending RTGS$ %d to ZWMB account no %d for %s:\n",AMOUNT, Bank_acc_no, Reason);
                    printf("Enter\n");
                    printf("1. Confirm\n");
                    printf("2. Cancel\n");
                    scanf("%d",&third_option);

                    if(third_option == 1)
                    {
                        printf("\nYou have successfully sent RTGS$ %d to ZWMB acc %d\n", AMOUNT, Bank_acc_no);
                        printf("Approval code:- PP920762.1194.Y87465\n");
                    }
                    else
                    {
                        printf("You have Cancelled the transaction. Thank you\n");
                    }
                    break;
                }
                break;

                case 2:
                    printf("Select Destination:\n");
                    printf("1. MyCash\n");
                    printf("2. Telecash\n");
                    printf("3. OneMoney\n");

                    printf("Press * for Main Menu and 0 For Previous Menu\n");
                    scanf("%d",&Send_to_Bank);

                    switch(Send_to_Bank)
                    {
                    case 1:
                        printf("Enter destination mobile number\n");
                        printf("\nPress * for Main Menu and 0 For Previous Menu\n");
                        scanf("%d",&customer_number);

                        printf("Enter Amount:\n");
                        printf("\nPress * for Main Menu and 0 For Previous Menu\n");
                        scanf("%d",&AMOUNT);

                        printf("\nSending RTGS$ %d to MyCash account %d\n",AMOUNT, customer_number);
                        printf("Enter\n");
                        printf("1. Confirm\n");
                        printf("2. Cancel\n");
                        scanf("%d",&third_option);

                        if(third_option == 1)
                        {
                            printf("You have successfully transfered RTGS$ %d to MyCash account +263%d\n");
                            printf("Approval code:- PP850772.2154.D87495\n");
                        }
                        else
                        {
                             printf("You have Cancelled the transaction. Thank you\n");
                        }
                        break;

                    case 2:
                        printf("Enter destination mobile number\n");
                        printf("\nPress * for Main Menu and 0 For Previous Menu\n");
                        scanf("%d",&customer_number);

                        printf("Enter Amount:\n");
                        printf("\nPress * for Main Menu and 0 For Previous Menu\n");
                        scanf("%d",&AMOUNT);

                        printf("\nSending RTGS$ %d to Telecash account %d\n",AMOUNT, customer_number);
                        printf("Enter\n");
                        printf("1. Confirm\n");
                        printf("2. Cancel\n");
                        scanf("%d",&third_option);

                        if(third_option == 1)
                        {
                            printf("You have successfully transfered RTGS$ %d to Telecash account +263%d\n");
                            printf("Approval code:- PP850772.2154.D87495\n");
                        }
                        else
                        {
                             printf("You have Cancelled the transaction. Thank you\n");
                        }
                        break;

                    case 3:
                        printf("Enter destination mobile number\n");
                        printf("\nPress * for Main Menu and 0 For Previous Menu\n");
                        scanf("%d",&customer_number);

                        printf("Enter Amount:\n");
                        printf("\nPress * for Main Menu and 0 For Previous Menu\n");
                        scanf("%d",&AMOUNT);

                        printf("\nSending RTGS$ %d to OneMoney account %d\n",AMOUNT, customer_number);
                        printf("Enter\n");
                        printf("1. Confirm\n");
                        printf("2. Cancel\n");
                        scanf("%d",&third_option);

                        if(third_option == 1)
                        {
                            printf("You have successfully transfered RTGS$ %d to OneMoney account +263%d\n", AMOUNT, customer_number);
                            printf("Approval code:- PP850772.2154.D87495\n");
                        }
                        else
                        {
                             printf("You have Cancelled the transaction. Thank you\n");
                        }
                        break;
                    }

            }
            break;

        }
        break;

                    case 2:
                        printf("1. Pay Bill\n");
                        printf("2. Pay Merchant\n");
                        printf("3. Pay School Fees\n");
                        printf("4. Payment Approval\n");
                        printf("5. Transfer to Church\n");
                        printf("6. Ecocash rewards\n");
                        printf("7. Regular Payments\n");
                        printf("8. Add Biller");

                        printf("Press\n");
                        printf("n Next\n");
                        scanf("%d",&option2);

                        switch(option2)
                        {
                        case 1:
                            printf("Enter Biller Code:\n");
                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                            scanf("%d",&BillerCode);

                            printf("Enter Amount:\n");
                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                            scanf("%d",&AMOUNT);

                            printf("Enter Account Number:\n");
                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                            scanf("%d",&customer_number);

                            printf("PayMent of RTGS$ %d To KaysMedia %d Account %d\n",AMOUNT, BillerCode, customer_number);
                            printf("Enter\n");

                            printf("\n1. Confirm\n");
                            printf("2. Cancel\n");
                            printf("\nPress * for Main Menu and 0 for Previos Menu\n");
                            scanf("%d",&third_option);

                            if(third_option == 1)
                            {
                                printf("Successfully Paid RTGS$ %d to KaysMedia %d\n",AMOUNT,BillerCode);
                                printf("Approval code:- PP850772.2154.D87495\n");
                            }
                            else
                            {
                                printf("You have Cancelled the transaction. Thank you\n");
                            }
                            break;

                        case 2:
                            printf("Please enter merchant code\n");
                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                            scanf("%d",&BillerCode);

                            printf("Enter Amount\n");
                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                            scanf("%d",&AMOUNT);

                            printf("Merchant payment of RTGS$ %d to %d KaysMesia LIMITED\n",AMOUNT, BillerCode);
                            printf("1. Confirm\n");
                            printf("2. Cancel\n");
                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                            scanf("%d",&third_option);

                            if(third_option == 1)
                            {
                                printf("RTGS$%d paid to MERCHANT KAYSMEDIA(%d)Merchant.\n", AMOUNT, BillerCode);
                                printf("Txn ID MP220323.1402.K33782.\n");
                            }
                            else
                            {
                                printf("You have Cancelled the transaction. Thank you\n");
                            }
                            break;

                        case 3:
                            printf("Please enter merchant code\n");
                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                            scanf("%d",&BillerCode);

                            printf("Enter Amount\n");
                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                            scanf("%d",&AMOUNT);

                            printf("Enter Reference Number\n");
                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                            scanf("%d",&REFNO);


                            printf("Paying RTGS$ %d from your wallet to TELONE CENTER FOR LEARNING\n",AMOUNT, BillerCode);
                            printf("(MSISDN-784953460) and Ref Number-%d\n",REFNO);
                            printf("1. Confirm\n");
                            printf("2. Cancel\n");
                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                            scanf("%d",&third_option);

                            if(third_option == 1)
                            {
                                printf("RTGS$%d fees paid to MERCHANT TELONE CENTER FOR LEARNING(%d)Merchant.\n", AMOUNT, BillerCode);
                                printf("Txn ID MP220323.1402.K33782.\n");
                            }
                            else
                            {
                                printf("You have Cancelled the transaction. Thank you\n");
                            }
                            break;

                        case 4:
                            printf("Pending Transaction list is empty\n");
                            break;

                        case 5:
                            printf("Enter Billing Merchant Code\n");
                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                            scanf("%d",&BillerCode);

                            printf("Enter Amount\n");
                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                            scanf("%d",&AMOUNT);

                            printf("Please Select:\n");
                            printf("1. Offering\n");
                            printf("2. Tithes\n");
                            printf("3. Building Fund\n");
                            printf("4. Others\n");
                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                            scanf("%d",&REFNO);

                            switch(REFNO)
                            {
                            case 1:
                                printf("Enter Assembly\n");
                                printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                scanf("%s",&ASSEMBLY);

                                printf("Paying RTGS$%d from your wallet to Merchant-AFM BETHEL\n",AMOUNT);
                                printf("ASSEMBLY(MSISDN-774807441) and Ref Number-Offering\n");
                                printf("Enter\n");
                                printf("1. Confirm\n");
                                printf("2. Cancel\n");
                                scanf("%d",&third_option);

                                if(third_option == 1)
                                {
                                    printf("Your Merchant payment to AFM BETHEL ASSEMBLY(%d)\n",BillerCode);
                                    printf("of RTGS$ %d with reference Offerings, %s was successful\n",AMOUNT, ASSEMBLY);
                                    printf("Txn ID : MP330232.0115.J728688\n");
                                }
                                else
                                {
                                    printf("You have Cancelled the transaction. Thank you\n");
                                }
                                break;

                            case 2:
                               printf("Enter Assembly\n");
                                printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                scanf("%s",&ASSEMBLY);

                                printf("Paying RTGS$%d from your wallet to Merchant-AFM BETHEL\n",AMOUNT);
                                printf("ASSEMBLY(MSISDN-774807441) and Ref Number-Tithes\n");
                                printf("Enter\n");
                                printf("1. Confirm\n");
                                printf("2. Cancel\n");
                                scanf("%d",&third_option);

                                if(third_option == 1)
                                {
                                    printf("Your Merchant payment to AFM BETHEL ASSEMBLY(%d)\n",BillerCode);
                                    printf("of RTGS$ %d with reference Tithes, %s was successful\n",AMOUNT, ASSEMBLY);
                                    printf("Txn ID : MP330232.0115.J728688\n");
                                }
                                else
                                {
                                    printf("You have Cancelled the transaction. Thank you\n");
                                }
                                break;

                            case 3:
                                printf("Enter Assembly\n");
                                printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                scanf("%s",&ASSEMBLY);

                                printf("Paying RTGS$%d from your wallet to Merchant-AFM BETHEL\n",AMOUNT);
                                printf("ASSEMBLY(MSISDN-774807441) and Ref Number-Building Fund\n");
                                printf("Enter\n");
                                printf("1. Confirm\n");
                                printf("2. Cancel\n");
                                scanf("%d",&third_option);

                                if(third_option == 1)
                                {
                                    printf("Your Merchant payment to AFM BETHEL ASSEMBLY(%d)\n",BillerCode);
                                    printf("of RTGS$ %d with reference Building Fund, %s was successful\n",AMOUNT, ASSEMBLY);
                                    printf("Txn ID : MP330232.0115.J728688\n");
                                }
                                else
                                {
                                    printf("You have Cancelled the transaction. Thank you\n");
                                }
                                break;

                            case 4:
                                printf("Enter Money Purpose\n");
                                printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                scanf("%s",&PURPOSE);


                                printf("Enter Assembly\n");
                                printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                scanf("%s",&ASSEMBLY);

                                printf("Paying RTGS$%d from your wallet to Merchant-AFM BETHEL\n",AMOUNT);
                                printf("ASSEMBLY(MSISDN-774807441) and Ref Number-%s\n",PURPOSE);
                                printf("Enter\n");
                                printf("1. Confirm\n");
                                printf("2. Cancel\n");
                                scanf("%d",&third_option);

                                if(third_option == 1)
                                {
                                    printf("Your Merchant payment to AFM BETHEL ASSEMBLY(%d)\n",BillerCode);
                                    printf("of RTGS$ %d with reference %s, %s was successful\n",AMOUNT, PURPOSE, ASSEMBLY);
                                    printf("Txn ID : MP330232.0115.J728688\n");
                                }
                                else
                                {
                                    printf("You have Cancelled the transaction. Thank you\n");
                                }
                                break;
                            }
                            break;

                            case 6:
                                printf("Please Select\n");
                                printf("1. View Point Balance\n");
                                printf("2. Redeem Points\n");
                                printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                scanf("%d",&REFNO);

                                switch(REFNO)
                                {
                                case 1:
                                    printf("Ecocash Rewards balance enquiry request:\n");
                                    printf("Enter\n");
                                    printf("1. Confirm\n");
                                    printf("2. Cancel\n");
                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                    scanf("%d",&third_option);
                                     if(third_option == 1)
                                     {
                                         printf("Error occured. Please try again later\n");
                                     }
                                     else
                                     {
                                       printf("You have Cancelled the transaction. Thank you\n");
                                     }
                                     break;

                                case 2:
                                    printf("Ecocash Rewards redemption request:\n");
                                    printf("Enter\n");
                                    printf("1. To Confirm\n");
                                    printf("2. TO Cancel\n");
                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                    scanf("%d",&third_option);
                                     if(third_option == 1)
                                     {
                                         printf("Invalid(empty) response.");
                                     }
                                     else
                                     {
                                       printf("You have Cancelled the transaction. Thank you\n");
                                     }
                                     break;
                                }
                                break;
                                case 7:
                                    printf("Please Select\n");
                                    printf("1. Pay ZESA\n");
                                    printf("2. Pay Poertel\n");
                                    printf("3. Pay Toll Gates\n");
                                    printf("4. Pay ZOL\n");
                                    printf("5. Pay Econet PostPaid\n");
                                    printf("6. Pay ZIMRA\n");
                                    printf("7. Pay City of Harare\n");

                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                    printf("n Next\n");

                                    break;
                                case 8:
                                    printf("Enter Biller Code\n");
                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                    scanf("%d",&BillerCode);

                                    printf("Enter Biller Account Number\n");
                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                    scanf("%d",&customer_number);

                                    printf("You are associating A/c no.%d for %d.\n",customer_number, BillerCode);
                                    printf("Enter\n");
                                    printf("1. Confirm\n");
                                    printf("2. Cancel\n");
                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                    scanf("%d",&third_option);

                                    if(third_option == 1)
                                    {
                                        printf("Association of A/c no.%d for %d successful\n",customer_number, BillerCode);
                                    }
                                    else
                                    {
                                     printf("You have Cancelled the transaction. Thank you\n");
                                    }
                                    break;
                        }

                        break;
                    case 3:
                        printf("Please Select\n");
                        printf("1. From Agent\n");
                        printf("2. From ATM\n");
                        printf("3. Check Wallet Balance\n");

                        printf("\nPress * for Main Menu and 0 For Previous Menu\n");
                        scanf("%d",&option3);

                        switch(option3)
                        {
                        case 1:
                            printf("Enter Recieving channel Member's Agent Code\n");
                            printf("\nPress * for Main Menu and 0 For Previous Menu\n");
                            scanf("%d",&BillerCode);

                            printf("Enter Amount\n");
                            printf("\nPress * for Main Menu and 0 For Previous Menu\n");
                            scanf("%d",&AMOUNT);

                            printf("Cashout of RTGS$ %d to %d-KAYSMEDIA\n");
                            printf("Enter\n");
                            printf("1. Confirm\n");
                            printf("2. Cancel\n");
                            printf("\nPress * for Main Menu and 0 For Previous Menu\n");
                            scanf("%d",&third_option);

                            if(third_option == 1)
                            {
                                printf("Cashout of RTGS$%d at Agent %d-KAYSMEDIA successful\n");
                                printf("Approval code-MP330232.0115.J728688\n");

                            }
                            else
                            {
                               printf("You have Cancelled the transaction. Thank you\n");
                            }
                            break;

                        case 2:
                           printf("Enter Recieving channel Member's Agent Code\n");
                            printf("\nPress * for Main Menu and 0 For Previous Menu\n");
                            scanf("%d",&BillerCode);

                            printf("Enter Amount\n");
                            printf("\nPress * for Main Menu and 0 For Previous Menu\n");
                            scanf("%d",&AMOUNT);

                            printf("Cashout of RTGS$ %d to %d-KAYSMEDIA\n");
                            printf("Enter\n");
                            printf("1. Confirm\n");
                            printf("2. Cancel\n");
                            printf("\nPress * for Main Menu and 0 For Previous Menu\n");
                            scanf("%d",&third_option);

                            if(third_option == 1)
                            {
                                printf("Cashout of RTGS$%d at Agent %d-KAYSMEDIA successful\n");
                                printf("Approval code-MP330232.0115.J728688\n");

                            }
                            else
                            {
                               printf("You have Cancelled the transaction. Thank you\n");
                            }
                            break;

                        case 3:
                            printf("Your Balance is RTGS$:897452663.38. You can dowload your account\n");
                            printf("statement on the EcoCash App\n");
                            break;
                        }
                        break;

                    case 4:
                        printf("Please Select\n");
                        printf("1. Buy Airtime\n");
                        printf("2. Buy Bundles\n");

                        printf("\nPress * for Main Menu and For Previous Menu\n");
                        scanf("%d",&option4);

                        switch(option4)
                        {
                        case 1:
                            printf("Select Option:\n");
                            printf("1. My Mobile\n");
                            printf("2. Other Mobile\n");
                            scanf("%d",&REFNO);

                            switch(REFNO)
                            {
                            case 1:
                                printf("Enter Amount\n");
                                printf("\nPress * for Main Menu and For Previous Menu\n");
                                scanf("%d",&AMOUNT);

                                printf("Buying Airtime for Mobile Number 772731995, Amount: RTGS$\n");
                                printf("%d\n",AMOUNT);
                                printf("Enter\n");
                                printf("1. Confirm\n");
                                printf("2. Cancel\n");
                                printf("\nPress * for Main Menu and For Previous Menu\n");
                                scanf("%d",&third_option);

                                if(third_option == 1)
                                {
                                    printf("Voice Recharge RTGS$%d successful\n",AMOUNT);
                                }
                                else
                                {
                                  printf("You have Cancelled the transaction. Thank you\n");
                                }
                                break;

                            case 2:
                                printf("Enter Mobile Number\n");
                                printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                scanf("%d",&customer_number);

                                printf("Enter Amount\n");
                                printf("\nPress * for Main Menu and For Previous Menu\n");
                                scanf("%d",&AMOUNT);

                                printf("Buying Airtime for Mobile Number %d, Amount: RTGS$\n",customer_number);
                                printf("%d\n",AMOUNT);
                                printf("Enter\n");
                                printf("1. Confirm\n");
                                printf("2. Cancel\n");
                                printf("\nPress * for Main Menu and For Previous Menu\n");
                                scanf("%d",&third_option);

                                if(third_option == 1)
                                {
                                    printf("Voice Recharge RTGS$%d successful\n",AMOUNT);
                                }
                                else
                                {
                                  printf("You have Cancelled the transaction. Thank you\n");
                                }
                                break;
                            }
                            break;

                            case 2:
                                printf("1. Facebook\n");
                                printf("2. Whatsapp\n");
                                printf("3. Daily Data\n");
                                printf("4. Weekly Data\n");
                                printf("5. Monthly Data\n");
                                printf("6. SMS\n");
                                printf("7. Sasai\n");
                                printf("8. Instagram\n");
                                printf("9. Twitter\n");
                                printf("10. Voice\n");
                                printf("11. Private Wifi\n");
                                printf("12. E Learning\n");
                                scanf("%d",&REFNO);

                                switch(REFNO)
                                {
                                case 1:
                                    printf("Please Select\n");
                                    printf("1. My Mobile\n");
                                    printf("2. Other Mobile\n");
                                    scanf("%d",&Send_to_Bank);

                                    switch(Send_to_Bank)
                                    {
                                    case 1:
                                        printf("1. $31.0-Facebook(20MB)ZWL 31.00\n");
                                        printf("2. $70.0-Facebook(45MB)ZWL 70.00\n");
                                        printf("3. $215.0-Facebook(140MB)ZWL 215.00\n");
                                        printf("4. $580.0-Facebook(400MB)ZWL 580.00\n");
                                        printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                        scanf("%d",&BankingMenu);

                                        switch(BankingMenu)
                                        {
                                        case 1:
                                            printf("Purchase of RTGS$31 Facebook(20MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$31 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 2:
                                           printf("Purchase of RTGS$70 Facebook(45MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$70 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 3:
                                            printf("Purchase of RTGS$215 Facebook(140MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$215 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 4:
                                            printf("Purchase of RTGS$580 Facebook(400MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$580 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;
                                        }
                                        break;

                                        case 2:
                                            printf("Enter Recieving Mobile Number:\n");
                                            printf("\nPress * for Main Menu and 0 Previous Menu\n");
                                            scanf("%d",&customer_number);


                                        printf("1. $31.0-Facebook(20MB)ZWL 31.00\n");
                                        printf("2. $70.0-Facebook(45MB)ZWL 70.00\n");
                                        printf("3. $215.0-Facebook(140MB)ZWL 215.00\n");
                                        printf("4. $580.0-Facebook(400MB)ZWL 580.00\n");
                                        printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                        scanf("%d",&BankingMenu);

                                        switch(BankingMenu)
                                        {
                                        case 1:
                                            printf("Purchase of RTGS$31 Facebook(20MB) for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$31 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 2:
                                           printf("Purchase of RTGS$70 Facebook(45MB) for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$70 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 3:
                                            printf("Purchase of RTGS$215 Facebook(140MB) for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$215 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 4:
                                            printf("Purchase of RTGS$580 Facebook(400MB) for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$580 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;
                                        }
                                        break;
                                    }
                                    break;

                                case 2:
                                    printf("Please Select\n");
                                    printf("1. My Mobile\n");
                                    printf("2. Other Mobile\n");
                                    scanf("%d",&Send_to_Bank);

                                    switch(Send_to_Bank)
                                    {
                                    case 1:

                                            printf("1. $6.0-WhatsApp(4MB)ZWL 6.00\n");
                                            printf("2. $18.0-WhatsApp(12MB)ZWL 18.00\n");
                                            printf("3. $31.0-WhatsApp(20MB)ZWL 31.00\n");
                                            printf("4. $70.0-WhatsApp(45MB)ZWL 70.00\n");
                                            printf("5. $100.0-WhatsApp(65MB)ZWL 100.00\n");
                                            printf("6. $215.0-WhatsApp(140MB)ZWL 215.00\n");
                                            printf("7. $350.0-WhatsApp(240MB)ZWL 350.00\n");
                                            printf("8. $580.0-WhatsApp(400MB)ZWL 580.00\n");
                                        printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                        scanf("%d",&BankingMenu);

                                        switch(BankingMenu)
                                        {
                                        case 1:
                                            printf("Purchase of RTGS$6 WhatsApp(4MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$6 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 2:
                                           printf("Purchase of RTGS$18 WhatsApp(12MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$18 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 3:
                                            printf("Purchase of RTGS$31 WhatsApp(20MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$31 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 4:
                                            printf("Purchase of RTGS$70 WhatsApp(45MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$70 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 5:
                                            printf("Purchase of RTGS$100 WhatsApp(65MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$100 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 6:
                                            printf("Purchase of RTGS$215 WhatsApp(140MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$215 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 7:
                                            printf("Purchase of RTGS$350 WhatsApp(240MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$350 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 8:
                                            printf("Purchase of RTGS$580 WhatsApp(400MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$580 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;
                                        }
                                        break;

                                        case 2:
                                            printf("Enter Recieving Mobile Number:\n");
                                            printf("\nPress * for Main Menu and 0 Previous Menu\n");
                                            scanf("%d",&customer_number);

                                            printf("1. $6.0-WhatsApp(4MB)ZWL 6.00\n");
                                            printf("2. $18.0-WhatsApp(12MB)ZWL 18.00\n");
                                            printf("3. $31.0-WhatsApp(20MB)ZWL 31.00\n");
                                            printf("4. $70.0-WhatsApp(45MB)ZWL 70.00\n");
                                            printf("5. $100.0-WhatsApp(65MB)ZWL 100.00\n");
                                            printf("6. $215.0-WhatsApp(140MB)ZWL 215.00\n");
                                            printf("7. $350.0-WhatsApp(240MB)ZWL 350.00\n");
                                            printf("8. $580.0-WhatsApp(400MB)ZWL 580.00\n");
                                        printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                        scanf("%d",&BankingMenu);

                                        switch(BankingMenu)
                                        {
                                        case 1:
                                            printf("Purchase of RTGS$6 WhatsApp(4MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$6 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 2:
                                           printf("Purchase of RTGS$18 WhatsApp(12MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$18 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 3:
                                            printf("Purchase of RTGS$31 WhatsApp(20MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$31 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 4:
                                            printf("Purchase of RTGS$70 WhatsApp(45MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$70 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 5:
                                            printf("Purchase of RTGS$100 WhatsApp(65MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$100 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 6:
                                            printf("Purchase of RTGS$215 WhatsApp(140MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$215 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 7:
                                            printf("Purchase of RTGS$350 WhatsApp(240MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$350 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 8:
                                            printf("Purchase of RTGS$580 WhatsApp(400MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$580 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;
                                        }
                                        break;
                                }
                                break;

                                        case 3:
                                            printf("Please Select\n");
                                    printf("1. My Mobile\n");
                                    printf("2. Other Mobile\n");
                                    scanf("%d",&Send_to_Bank);

                                    switch(Send_to_Bank)
                                    {
                                    case 1:

                                            printf("1. $31.0-Daily Data Bundle(20MB)ZWL 31.00\n");
                                            printf("2. $62.0-Daily Data Bundle(40MB)ZWL 62.00\n");
                                            printf("3. $123.0-Daily Data Bundle(80MB)ZWL 123.00\n");
                                            printf("4. $230.0-Daily Data Bundle(150MB)ZWL 230.00\n");
                                            printf("5. $370.0-Daily Data Bundle(250MB)ZWL 370.00\n");
                                            printf("6. $802.0-Daily Data Bundle(600MB)ZWL 802.00\n");
                                            printf("7. $1200.0-Daily Data Bundle(1200MB)ZWL 1200.00\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&BankingMenu);

                                        switch(BankingMenu)
                                        {
                                        case 1:
                                            printf("Purchase of RTGS$31 Daily Data Bundle(20MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$31 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 2:
                                           printf("Purchase of RTGS$62 Daily Data Bundle(40MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$62 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 3:
                                            printf("Purchase of RTGS$123 Daily Data Bundle(80MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$123 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 4:
                                            printf("Purchase of RTGS$230 Daily Data Bundle(150MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$230 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 5:
                                            printf("Purchase of RTGS$370 Daily Data Bundle(250MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$370 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 6:
                                            printf("Purchase of RTGS$802 Daily Data Bundle(600MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$802 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 7:
                                            printf("Purchase of RTGS$1200 Daily Data Bundle(1200MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$1200 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;
                                        }
                                        break;

                                            case 2:
                                            printf("Enter Recieving Mobile Number:\n");
                                            printf("\nPress * for Main Menu and 0 Previous Menu\n");
                                            scanf("%d",&customer_number);

                                            printf("1. $31.0-Daily Data Bundle(20MB)ZWL 31.00\n");
                                            printf("2. $62.0-Daily Data Bundle(40MB)ZWL 62.00\n");
                                            printf("3. $123.0-Daily Data Bundle(80MB)ZWL 123.00\n");
                                            printf("4. $230.0-Daily Data Bundle(150MB)ZWL 230.00\n");
                                            printf("5. $370.0-Daily Data Bundle(250MB)ZWL 370.00\n");
                                            printf("6. $802.0-Daily Data Bundle(600MB)ZWL 802.00\n");
                                            printf("7. $1200.0-Daily Data Bundle(1200MB)ZWL 1200.00\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&BankingMenu);

                                        switch(BankingMenu)
                                        {
                                        case 1:
                                            printf("Purchase of RTGS$31 Daily Data Bundle(20MB) for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$31 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 2:
                                           printf("Purchase of RTGS$62 Daily Data Bundle(40MB) for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$62 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 3:
                                            printf("Purchase of RTGS$123 Daily Data Bundle(80MB) for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$123 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 4:
                                            printf("Purchase of RTGS$230 Daily Data Bundle(150MB) for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$230 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 5:
                                            printf("Purchase of RTGS$370 Daily Data Bundle(250MB) for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$370 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 6:
                                            printf("Purchase of RTGS$802 Daily Data Bundle(600MB) for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$802 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 7:
                                            printf("Purchase of RTGS$1200 Daily Data Bundle(1200MB) for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$1200 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        }
                                            break;
                                            }
                                            break;

                                        case 4:
                                    printf("Please Select\n");
                                    printf("1. My Mobile\n");
                                    printf("2. Other Mobile\n");
                                    scanf("%d",&Send_to_Bank);

                                    switch(Send_to_Bank)
                                    {
                                    case 1:

                                            printf("1. $31.0-Weekly Data Bundle(20MB)ZWL 31.00\n");
                                            printf("2. $94.0-Weekly Data Bundle(60MB)ZWL 94.00\n");
                                            printf("3. $250.0-Weekly Data Bundle(160MB)ZWL 250.00\n");
                                            printf("4. $385.0-Weekly Data Bundle(250MB)ZWL 385.00\n");
                                            printf("5. $530.0-Weekly Data Bundle(370MB)ZWL 530.00\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&BankingMenu);

                                        switch(BankingMenu)
                                        {
                                        case 1:
                                            printf("Purchase of RTGS$31 Daily Data Bundle(20MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$31 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 2:
                                           printf("Purchase of RTGS$94 Weekly Data Bundle(60MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$94 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 3:
                                            printf("Purchase of RTGS$250 Weekly Data Bundle(160MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$250 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 4:
                                            printf("Purchase of RTGS$385 Weekly Data Bundle(2500MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$385 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 5:
                                            printf("Purchase of RTGS$530 Weekly Data Bundle(370MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$530 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;
                                            }
                                            break;
                                        case 2:
                                            printf("Enter Recieving Mobile Number:\n");
                                            printf("\nPress * for Main Menu and 0 Previous Menu\n");
                                            scanf("%d",&customer_number);

                                            printf("1. $31.0-Weekly Data Bundle(20MB)ZWL 31.00\n");
                                            printf("2. $94.0-Weekly Data Bundle(60MB)ZWL 94.00\n");
                                            printf("3. $250.0-Weekly Data Bundle(160MB)ZWL 250.00\n");
                                            printf("4. $385.0-Weekly Data Bundle(250MB)ZWL 385.00\n");
                                            printf("5. $530.0-Weekly Data Bundle(370MB)ZWL 530.00\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&BankingMenu);

                                        switch(BankingMenu)
                                        {
                                        case 1:
                                            printf("Purchase of RTGS$31 Weekly Data Bundle(20MB) for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$31 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 2:
                                           printf("Purchase of RTGS$94 Weekly Data Bundle(60MB) for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$94 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 3:
                                            printf("Purchase of RTGS$250 Weekly Data Bundle(160MB) for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$250 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 4:
                                            printf("Purchase of RTGS$385 Weekly Data Bundle(250MB) for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$385 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 5:
                                            printf("Purchase of RTGS$530 Weekly Data Bundle(370MB) for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$530 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;
                                }
                                break;
                                    } break;

                                    case 5:
                                            printf("Please Select\n");
                                    printf("1. My Mobile\n");
                                    printf("2. Other Mobile\n");
                                    scanf("%d",&Send_to_Bank);

                                    switch(Send_to_Bank)
                                    {
                                    case 1:

                                            printf("1. $157.0-100MB Data + 300MB BuddieBeatz MusicApp ZWL157.00\n");
                                            printf("2. $420.0-Monthly Data Bundle(270MB)ZWL 420.00\n");
                                            printf("3. $770.0-Monthly Data Bundle(500MB)ZWL 770.00\n");
                                            printf("4. $1050.0-Monthly Data Bundle(700MB)ZWL 1050.00\n");
                                            printf("5. $2000.0-Weekly Data Bundle(1400MB)ZWL 2000.00\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&BankingMenu);

                                        switch(BankingMenu)
                                        {
                                        case 1:
                                            printf("Purchase of RTGS$157 100MB Data + 300MB BuddieBeatz MusicApp ZWL157.0\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$157 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 2:
                                           printf("Purchase of RTGS$420 Monthly Data Bundle(270MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$420 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 3:
                                            printf("Purchase of RTGS$770 Monthly Data Bundle(500MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$770 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 4:
                                            printf("Purchase of RTGS$1050 Monthly Data Bundle(700MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$1050 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 5:
                                            printf("Purchase of RTGS$2000 Weekly Data Bundle(1400MB)\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option)
                                            {
                                                printf("RTGS$2000 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;
                                            }
                                            break;
                                        case 2:
                                            printf("Enter Recieving Mobile Number:\n");
                                            printf("\nPress * for Main Menu and 0 Previous Menu\n");
                                            scanf("%d",&customer_number);

                                            printf("1. $157.0-100MB Data + 300MB BuddieBeatz MusicApp ZWL157.00\n");
                                            printf("2. $420.0-Monthly Data Bundle(270MB)ZWL 420.00\n");
                                            printf("3. $770.0-Monthly Data Bundle(500MB)ZWL 770.00\n");
                                            printf("4. $1050.0-Monthly Data Bundle(700MB)ZWL 1050.00\n");
                                            printf("5. $2000.0-Weekly Data Bundle(1400MB)ZWL 2000.00\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&BankingMenu);

                                        switch(BankingMenu)
                                        {
                                        case 1:
                                            printf("Purchase of RTGS$157 100MB Data + 300MB BuddieBeatz MusicApp ZWL157.00 for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$157 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 2:
                                           printf("Purchase of RTGS$420 Monthly Data Bundle(270MB) for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$420 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 3:
                                            printf("Purchase of RTGS$770 Monthly Data Bundle(500MB) for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$770 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 4:
                                            printf("Purchase of RTGS$1050 Monthly Data Bundle(700MB) for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$1050 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 5:
                                            printf("Purchase of RTGS$2000 Monthly Data Bundle(1400MB) for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$2000 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;
                                }
                                break;
                                    } break;

                                        case 6:
                                            printf("Please Select\n");
                                    printf("1. My Mobile\n");
                                    printf("2. Other Mobile\n");
                                    scanf("%d",&Send_to_Bank);

                                    switch(Send_to_Bank)
                                    {
                                    case 1:

                                            printf("1. $24.75-SMS 25 Daily ZWL 24.75\n");
                                            printf("2. $34.5-SMS 35 Daily ZWL 34.50\n");
                                            printf("3. $66.7-SMS 75 Weekly ZWL 66.70\n");
                                            printf("4. $110.55-SMS 125 Weekly ZWL 110.55\n");
                                            printf("5. $169.65-SMS 200 Weekly ZWL 169.65\n");
                                            printf("6. $254.15-SMS 300 Weekly ZWL 254.15\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&BankingMenu);

                                        switch(BankingMenu)
                                        {
                                        case 1:
                                            printf("Purchase of RTGS$24.75-SMS 25 Daily\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$24.75 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 2:
                                           printf("Purchase of RTGS34.5-SMS 35 Daily ZWL 34.50\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$34.5 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 3:
                                            printf("Purchase of RTGS$66.7-SMS 75 Weekly\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$66.7 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 4:
                                            printf("Purchase of RTGS$110.55-SMS 125 Weekly\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$110.55 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 5:
                                            printf("Purchase of RTGS$169.65-SMS 200 Weekly ZWL 169.65\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$169.65 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 6:
                                            printf("Purchase of RTGS$254.15-SMS 300 Weekly ZWL 169.65\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$254.15 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;
                                            }
                                            break;
                                        case 2:
                                            printf("Enter Recieving Mobile Number:\n");
                                            printf("\nPress * for Main Menu and 0 Previous Menu\n");
                                            scanf("%d",&customer_number);

                                            printf("1. $24.75-SMS 25 Daily ZWL 24.75\n");
                                            printf("2. $34.5-SMS 35 Daily ZWL 34.50\n");
                                            printf("3. $66.7-SMS 75 Weekly ZWL 66.70\n");
                                            printf("4. $110.55-SMS 125 Weekly ZWL 110.55\n");
                                            printf("5. $169.65-SMS 200 Weekly ZWL 169.65\n");
                                            printf("6. $254.15-SMS 300 Weekly ZWL 254.15\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&BankingMenu);

                                        switch(BankingMenu)
                                        {
                                        case 1:
                                            printf("Purchase of RTGS$24.75-SMS 25 Daily for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$24.75 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 2:
                                           printf("Purchase of RTGS34.5-SMS 35 Daily ZWL 34.50 for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$34.5 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 3:
                                            printf("Purchase of RTGS$66.7-SMS 75 Weekly for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option  == 1)
                                            {
                                                printf("RTGS$66.7 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 4:
                                            printf("Purchase of RTGS$110.55-SMS 125 Weekly for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$110.55 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 5:
                                            printf("Purchase of RTGS$169.65-SMS 200 Weekly for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$169.65 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 6:
                                            printf("Purchase of RTGS$254.15-SMS 300 for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$254.15 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;
                                }
                                break;
                                    } break;

                                        case 7:
                                    printf("Please Select\n");
                                    printf("1. My Mobile\n");
                                    printf("2. Other Mobile\n");
                                    scanf("%d",&Send_to_Bank);

                                    switch(Send_to_Bank)
                                    {
                                    case 1:

                                            printf("1. $2.0-Sasai 20MB ZWL 2.00\n");
                                            printf("2. $5.0-Sasai 45MB ZWL 5.00\n");
                                            printf("3. $6.0-Sasai 65MB ZWL 6.00\n");
                                            printf("4. $14.0-Sasai 140MB ZWL 14.00\n");
                                            printf("5. $25.0-Sasai 400MB ZWL 25.00\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&BankingMenu);

                                        switch(BankingMenu)
                                        {
                                        case 1:
                                            printf("Purchase of RTGS$2.0-Sasai 20MB ZWL 2.00\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$2.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 2:
                                           printf("Purchase of RTGS$5.0-Sasai 20MB ZWL 2.00\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$5.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 3:
                                            printf("Purchase of RTGS$6.0-Sasai 20MB ZWL 2.00\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$6.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 4:
                                            printf("Purchase of RTGS$14.0-Sasai 20MB ZWL 2.00\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$14.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 5:
                                            printf("Purchase of RTGS$25.0-Sasai 20MB ZWL 2.00\n");
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$25.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;
                                            }
                                            break;
                                        case 2:
                                            printf("Enter Recieving Mobile Number:\n");
                                            printf("\nPress * for Main Menu and 0 Previous Menu\n");
                                            scanf("%d",&customer_number);

                                            printf("1. $24.75-SMS 25 Daily ZWL 24.75\n");
                                            printf("2. $34.5-SMS 35 Daily ZWL 34.50\n");
                                            printf("3. $66.7-SMS 75 Weekly ZWL 66.70\n");
                                            printf("4. $110.55-SMS 125 Weekly ZWL 110.55\n");
                                            printf("5. $169.65-SMS 200 Weekly ZWL 169.65\n");
                                            printf("6. $254.15-SMS 300 Weekly ZWL 254.15\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&BankingMenu);

                                        switch(BankingMenu)
                                        {
                                        case 1:
                                            printf("Purchase of RTGS$24.75-SMS 25 Daily for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$24.75 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 2:
                                           printf("Purchase of RTGS34.5-SMS 35 Daily ZWL 34.50 for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$34.5 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 3:
                                            printf("Purchase of RTGS$66.7-SMS 75 Weekly for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$66.7 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 4:
                                            printf("Purchase of RTGS$110.55-SMS 125 Weekly for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$110.55 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 5:
                                            printf("Purchase of RTGS$169.65-SMS 200 Weekly for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$169.65 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                        case 6:
                                            printf("Purchase of RTGS$254.15-SMS 300 for %d\n",customer_number);
                                            printf("Enter\n");
                                            printf("1. Confirm\n");
                                            printf("2. Cancel\n");
                                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                            scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$254.15 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;
                                }
                                break;
                                    } break;
                                        case 8:
                                            printf("Select Option:\n");
                                            printf("1. My Mobile\n");
                                            printf("2. Other Mobile\n");
                                            printf("\nPress * for Main Menu and 0 For Previous Menu\n");
                                            scanf("%d",&Send_to_Bank);

                                            switch(Send_to_Bank)
                                            {
                                            case 1:
                                                printf("1. $31.0-Instagram(20MB) ZWL31.00\n");
                                                printf("2. $70.0-Instagram(45MB) ZWL70.00\n");
                                                printf("3. $193.0-Instagram(140MB) ZWL193.00\n");
                                                printf("4. $503.0-Instagram(400MB) ZWL503.00\n");
                                                scanf("%d",&BankingMenu);

                                                switch(BankingMenu)
                                                {
                                                case 1:
                                                    printf("Purchase of RTGS$31.00-Instagram(20MB)\n");
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$31.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 2:
                                                   printf("Purchase of RTGS$70.00-Instagram(45MB)\n");
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$70.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 3:
                                                    printf("Purchase of RTGS$193.00-Instagram(140MB)\n");
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$193.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 4:
                                                    printf("Purchase of RTGS$503.00-Instagram(400MB)\n");
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$503.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;
                                                }
                                                break;
                                                case 2:
                                                    printf("Enter Recieving Mobile Number:\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&customer_number);

                                                   printf("1. $31.0-Instagram(20MB) ZWL31.00\n");
                                                printf("2. $70.0-Instagram(45MB) ZWL70.00\n");
                                                printf("3. $193.0-Instagram(140MB) ZWL193.00\n");
                                                printf("4. $503.0-Instagram(400MB) ZWL503.00\n");
                                                scanf("%d",&BankingMenu);

                                                switch(BankingMenu)
                                                {
                                                case 1:
                                                    printf("Purchase of RTGS$31.00-Instagram(20MB) for %d\n",customer_number);
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$31.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 2:
                                                   printf("Purchase of RTGS$70.00-Instagram(45MB) for %d\n",customer_number);
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$70.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 3:
                                                    printf("Purchase of RTGS$193.00-Instagram(140MB) for %d\n",customer_number);
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$193.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 4:
                                                    printf("Purchase of RTGS$503.00-Instagram(400MB) for %d\n",customer_number);
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$503.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;
                                                }
                                                break;
                                            }
                                            break;

                                                case 9:
                                                    printf("Select Option:\n");
                                            printf("1. My Mobile\n");
                                            printf("2. Other Mobile\n");
                                            printf("\nPress * for Main Menu and 0 For Previous Menu\n");
                                            scanf("%d",&Send_to_Bank);

                                            switch(Send_to_Bank)
                                            {
                                            case 1:
                                                printf("1. $31.0-Twitter(20MB) ZWL31.00\n");
                                                printf("2. $70.0-Twitter(45MB) ZWL70.00\n");
                                                printf("3. $193.0-Twitter(140MB) ZWL193.00\n");
                                                printf("4. $503.0-Twitter(400MB) ZWL503.00\n");
                                                scanf("%d",&BankingMenu);

                                                switch(BankingMenu)
                                                {
                                                case 1:
                                                    printf("Purchase of RTGS$31.00-Twitter(20MB)\n");
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$31.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 2:
                                                   printf("Purchase of RTGS$70.00-Twitter(45MB)\n");
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$70.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 3:
                                                    printf("Purchase of RTGS$193.00-Twitter(140MB)\n");
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$193.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 4:
                                                    printf("Purchase of RTGS$503.00-Twitter(400MB)\n");
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$503.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;
                                                }
                                                break;
                                                case 2:
                                                    printf("Enter Recieving Mobile Number:\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&customer_number);

                                                   printf("1. $31.0-Twitter(20MB) ZWL31.00\n");
                                                printf("2. $70.0-Twitter(45MB) ZWL70.00\n");
                                                printf("3. $193.0-Twitter(140MB) ZWL193.00\n");
                                                printf("4. $503.0-Twitter(400MB) ZWL503.00\n");
                                                scanf("%d",&BankingMenu);

                                                switch(BankingMenu)
                                                {
                                                case 1:
                                                    printf("Purchase of RTGS$31.00-Twitter(20MB) for %d\n",customer_number);
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$31.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 2:
                                                   printf("Purchase of RTGS$70.00-Twitter(45MB) for %d\n",customer_number);
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$70.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 3:
                                                    printf("Purchase of RTGS$193.00-Twitter(140MB) for %d\n",customer_number);
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$193.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 4:
                                                    printf("Purchase of RTGS$503.00-Twitter(400MB) for %d\n",customer_number);
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$503.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;
                                                }
                                                break;
                                            }
                                            break;

                                                case 10:
                                                    printf("Select Option:\n");
                                            printf("1. My Mobile\n");
                                            printf("2. Other Mobile\n");
                                            printf("\nPress * for Main Menu and 0 For Previous Menu\n");
                                            scanf("%d",&Send_to_Bank);

                                            switch(Send_to_Bank)
                                            {
                                            case 1:
                                                printf("1. $19.2-Daily 2 mins ZWL19.20\n");
                                                printf("2. $38.4-Daily 4 mins ZWL38.40\n");
                                                printf("3. $96.0-Daily 10 mins ZWL96.00\n");
                                                printf("4. $288.0-Weekly 30 mins ZWL288.00\n");
                                                printf("5. $432.0-Weekly 45 mins ZWL432.00\n");
                                                printf("6. $65.0-Night Chat Voice Bundle ZWL65.00\n");
                                                scanf("%d",&BankingMenu);

                                                switch(BankingMenu)
                                                {
                                                case 1:
                                                    printf("Purchase of RTGS$19.20 Daily 2 mins\n");
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$19.20 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 2:
                                                   printf("Purchase of RTGS$38.40 Daily 4 mins\n");
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$38.40 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 3:
                                                    printf("Purchase of RTGS$96.00 Daily 10 mins\n");
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$96.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 4:
                                                    printf("Purchase of RTGS$288.00 Weekly 30 mins\n");
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$288.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 5:
                                                    printf("Purchase of RTGS$432.00 Weekly 45 mins\n");
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$432.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 6:
                                                    printf("Purchase of RTGS$65.00 Night Chat Voice Bundle\n");
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$65.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;
                                                }
                                                break;
                                                case 2:
                                                    printf("Enter Recieving Mobile Number:\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&customer_number);

                                                   printf("1. $19.2-Daily 2 mins ZWL19.20\n");
                                                printf("2. $38.4-Daily 4 mins ZWL38.40\n");
                                                printf("3. $96.0-Daily 10 mins ZWL96.00\n");
                                                printf("4. $288.0-Weekly 30 mins ZWL288.00\n");
                                                printf("5. $432.0-Weekly 45 mins ZWL432.00\n");
                                                printf("6. $65.0-Night Chat Voice Bundle ZWL65.00\n");
                                                scanf("%d",&BankingMenu);

                                                switch(BankingMenu)
                                                {
                                                case 1:
                                                    printf("Purchase of RTGS$19.20 Daily 2 mins for %d\n",customer_number);
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$19.20 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 2:
                                                   printf("Purchase of RTGS$38.40 Daily 4 mins for %d\n",customer_number);
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$38.40 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 3:
                                                    printf("Purchase of RTGS$96.00 Daily 10 mins for %d\n",customer_number);
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$96.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 4:
                                                    printf("Purchase of RTGS$288.00 Weekly 30 mins for %d\n",customer_number);
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$432.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 5:
                                                    printf("Purchase of RTGS$432 Weekly 45mins for %d\n",customer_number);
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$503.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 6:
                                                    printf("Purchase of RTGS$65.00 NIght Chat Voice Bundle for %d\n",customer_number);
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$65.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;
                                                }
                                                break;
                                            }
                                            break;

                                                case 11:
                                                    printf("Select Option:\n");
                                            printf("1. My Mobile\n");
                                            printf("2. Other Mobile\n");
                                            printf("\nPress * for Main Menu and 0 For Previous Menu\n");
                                            scanf("%d",&Send_to_Bank);

                                            switch(Send_to_Bank)
                                            {
                                            case 1:
                                                printf("1. $4320.0 - Private WiFi Bundle 8GB ZWL4,320.00\n");
                                                printf("2. $6600.0 - Private WIFi Bundle 15GB ZWL6,600.00\n");
                                                printf("3. $7860.0 - Private WiFi Bundle 25GB ZWL7,860.00\n");
                                                printf("4. $12000.0 - Private WiFi Bundle 50GB ZWL12,000.00\n");
                                                scanf("%d",&BankingMenu);

                                                switch(BankingMenu)
                                                {
                                                case 1:
                                                    printf("Purchase of RTGS$4320.00 Private WiFi Bundle 8GB\n");
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$4,320.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 2:
                                                   printf("Purchase of RTGS$6600.00 Private WiFi Bundle 15GB\n");
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$6,600.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 3:
                                                    printf("Purchase of RTGS$7860.00 Private WiFi Bundle 25GB\n");
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$7,860.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 4:
                                                    printf("Purchase of RTGS$12000.00 Private WiFi Bundle 50GB\n");
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$503.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;
                                                }
                                                break;
                                                case 2:
                                                    printf("Enter Recieving Mobile Number:\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&customer_number);

                                                   printf("1. $4320.0 - Private WiFi Bundle 8GB ZWL4,320.00\n");
                                                printf("2. $6600.0 - Private WIFi Bundle 15GB ZWL6,600.00\n");
                                                printf("3. $7860.0 - Private WiFi Bundle 25GB ZWL7,860.00\n");
                                                printf("4. $12000.0 - Private WiFi Bundle 50GB ZWL12,000.00\n");
                                                scanf("%d",&BankingMenu);

                                                switch(BankingMenu)
                                                {
                                                case 1:
                                                    printf("Purchase of RTGS$4320.0 - Private WiFi Bundle 8GB for %d\n",customer_number);
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$4,320.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 2:
                                                   printf("Purchase of RTGS$6600.0 - Private WIFi Bundle 15GB for %d\n",customer_number);
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$6,600.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 3:
                                                    printf("Purchase of RTGS$7860.0 - Private WiFi Bundle 25GB for %d\n",customer_number);
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$7,860.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;

                                                case 4:
                                                    printf("Purchase of RTGS$12000.0 - Private WiFi Bundle 50GB for %d\n",customer_number);
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$12,000.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;
                                                }
                                                break;
                                            }
                                            break;

                                                case 12:
                                            printf("Select Option:\n");
                                            printf("1. My Mobile\n");
                                            printf("2. Other Mobile\n");
                                            printf("\nPress * for Main Menu and 0 For Previous Menu\n");
                                            scanf("%d",&Send_to_Bank);

                                            switch(Send_to_Bank)
                                            {
                                            case 1:
                                                printf("1. $4920.0 - E Learning 10GB ZWL 4,920.00\n");
                                                printf("\nPress * for Main Menu and 0 For Previous Menu\n");
                                                scanf("%d", &BankingMenu);

                                                switch(BankingMenu)
                                                {
                                                case 1:
                                                    printf("Purchase of RTGS$4920.0 - E Learning Bundle 10GB\n");
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$4,920.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;


                                                }
                                                break;
                                                 case 2:

                                                     printf("Enter Recieving Mobile Number:\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&customer_number);

                                                     printf("1. $4920.0 - E Learning 10GB ZWL 4,920.00\n");
                                                printf("\nPress * for Main Menu and 0 For Previous Menu\n");
                                                scanf("%d", &BankingMenu);

                                                switch(BankingMenu)
                                                {
                                                    case 1:
                                                   printf("Purchase of RTGS$4920.0 - E Learning Bundle 10GB for %d\n",customer_number);
                                                    printf("Enter\n");
                                                    printf("1. Confirm\n");
                                                    printf("2. Cancel\n");
                                                    printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                                    scanf("%d",&third_option);

                                            if(third_option == 1)
                                            {
                                                printf("RTGS$4,920.00 paid to EWZ MOBILE BROADBAND(26828)\n");
                                                printf("Merchant. Txn ID MP220325.1842.F89479.\n");
                                            }
                                            else
                                            {
                                                printf("You have Cancelled the transaction. Thank you\n");
                                            }
                                            break;
                                                }
                                                break;

                                            }
                                            break;

                                }
                                break;
                        }
                        break;
                    case 5:
                        printf("Please Select\n");
                        printf("1. Western Union Pick Money\n");
                        printf("2. MoneyGram Recieve Money\n");

                        printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                        scanf("%d", &Send_to_Bank);

                        switch(Send_to_Bank)
                        {
                        case 1:
                            printf("Please Enter MTCN\n");
                            printf("\nPress * for Main Menu and 0 For Previous Menu\n");
                            scanf("%d", &BankingMenu);

                            switch(BankingMenu)
                            {
                            case 1:
                                printf("WU not allowed for reciever\n");
                            }
                            break;

                            case 2:
                                printf("Terms & Conditions\n");
                                printf("https://www.econet.co.zw/ecocash/ecocash-diaspora\n");
                                printf("Press 1 to accept. 2 to cancel\n");
                                printf("1. Accept\n");
                                printf("2. Cancel\n");

                                printf("\nPress * for Main Menu and 0 For Previous Menu\n");
                                scanf("%d", &BankingMenu);

                                switch(BankingMenu)
                                {
                                case 1:
                                    printf("Please enter MoneyGram 8 digit Reference Number:");
                                    printf("\nPress * for Main Menu and 0 For Previous Menu\n");
                                    scanf("%d", &customer_number);
                                    printf("Please Enter Amount\n");
                                    scanf("%d", &AMOUNT);

                                    if(customer_number <= 999999999)
                                    {
                                      printf("Confirm Recieve Money  %d amount MoneyGram trasnsaction %d\n",AMOUNT,customer_number);
                                      printf("1. Confirm\n");
                                      printf("2. Cancel\n");
                                      printf("\nPress * for Main Menu and 0 For Previous Menu\n");

                                      scanf("%d", &third_option);
                                      if(third_option == 1)
                                      {
                                          printf("MoneyGram Recieve Money successful\n");
                                      }
                                      else
                                      {
                                          printf("You have canceled the transaction. Thank You.\n");
                                      }
                                    }
                                    else
                                    {
                                        printf("Party processing failed\n");
                                    }
                                    break;
                                }
                                break;

                        }

                        break;

                    case 6:
                        printf("Please Select\n");
                        printf("1. EcoCash Kashagu\n");
                        printf("2. EcoCash Savings Club\n");

                        printf("\nPress * for Main Menu and 0 For Previous Menu\n");

                        break;

                    case 7:
                        printf("1. Ecocash Debit Card\n");
                        printf("2. Account Enquiry\n");
                        printf("3. Next of Kin\n");
                        printf("4. Change Language\n");
                        printf("5. Multi-Currency\n");
                        printf("6. Pin Reset\n");
                        printf("7. View Pending Transactions\n");
                        printf("8. Self Care\n");

                        printf("n Next\n");
                        break;

                    case 8:
                        printf("Please Select\n");
                        printf("1. Wallet to Bank\n");
                        printf("2. Bank to Wallet\n");
                        printf("3. Account Statement\n");
                        printf("4. Balance Enquiry\n");

                        printf("Press * for Main Menu or 0 For Previous Menu\n");
                        printf("n Next\n");
                        scanf("%d", &option8);

                        switch(option8)
                        {
                        case 1:
                            printf("Enter Amount:\n");

                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                            scanf("%d",&AMOUNT);

                            printf("Select Bank Account:\n");
                            printf("1. ABCSUBS\n");
                            printf("2. STEWARDBANK\n");
                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                            scanf("%d",&BankingMenu);

                            switch(BankingMenu)
                            {
                            case 1:
                                printf("Fund transfer .RTGS$ %d from your mMoney account to your bank account-ABCSUBS \n",AMOUNT);
                                printf("1. Confirm\n");
                                printf("2. Cancel\n");

                                printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                scanf("%d",&third_option);

                              if(third_option == 1)
                              {
                                  printf("You have successfuly transferd RTGS$ %d to your bank accpunt-ABCSUBS\n",AMOUNT);
                                  printf("Approval code:- PP850772.2154.D87495\n");
                              }
                              else
                              {
                                printf("You have Cancelled the transaction. Thank you\n");
                              }
                              break;

                            case 2:
                              printf("Fund transfer .RTGS$ %d from your mMoney account to your bank account-STEWARDBANK \n",AMOUNT);
                                printf("1. Confirm\n");
                                printf("2. Cancel\n");

                                printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                scanf("%d",&third_option);

                              if(third_option == 1)
                              {
                                  printf("You have successfuly transferd RTGS$ %d to your bank account-STEWARDBANK\n",AMOUNT);
                                  printf("Approval code:- PP850772.2154.D87495\n");
                              }
                              else
                              {
                                printf("You have Cancelled the transaction. Thank you\n");
                              }
                              break;
                            }
                            break;

                        case 2:
                            printf("Enter Amount:\n");

                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                            scanf("%d",&AMOUNT);

                            printf("Select Bank Account:\n");
                            printf("1. ABCSUBS\n");
                            printf("2. STEWARDBANK\n");
                            printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                            scanf("%d",&BankingMenu);

                            switch(BankingMenu)
                            {
                            case 1:
                                printf("Fund transfer .RTGS$ %d from to your bank account-ABCSUBS to your mMoney account\n",AMOUNT);
                                printf("1. Confirm\n");
                                printf("2. Cancel\n");

                                printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                scanf("%d",&third_option);

                              if(third_option == 1)
                              {
                                  printf("You have successfuly transferd RTGS$ %d to your bank accpunt-ABCSUBS\n",AMOUNT);
                                  printf("Approval code:- PP850772.2154.D87495\n");
                              }
                              else
                              {
                                printf("You have Cancelled the transaction. Thank you\n");
                              }
                              break;

                            case 2:
                              printf("Fund transfer .RTGS$ %d from your bank account-STEWARDBANK to your mMoney account\n",AMOUNT);
                                printf("1. Confirm\n");
                                printf("2. Cancel\n");

                                printf("\nPress * for Main Menu and 0 for Previous Menu\n");
                                scanf("%d",&third_option);

                              if(third_option == 1)
                              {
                                  printf("You have successfuly transferd RTGS$ %d from your bank account-STEWARDBANK\n",AMOUNT);
                                  printf("Approval code:- PP850772.2154.D87495\n");
                              }
                              else
                              {
                                printf("You have Cancelled the transaction. Thank you\n");
                              }
                              break;
                            }
                            break;

                            case 3:
                                printf("Select Bank Account:\n");
                                printf("1. ABCSUBS: 0772731995\n");
                                printf("2. STEWARDBANK: 0772731995\n");
                                scanf("%d",&BankingMenu);

                                if(BankingMenu != 0)
                                {
                                printf("Transaction Failed with TXN Id:MS330232.2918.c1311 due to\n");
                                printf("No Service Charge is defined\n");
                                }
                                break;

                            case 4:
                                printf("Your Balance is RTGS$:650000.38. You can dowload your account\n");
                                printf("statement on the EcoCash App\n");
                        }
                        break;
        }


    }else{
        printf("MPIN entered is incorrect\n");
        printf("Please re-enter\n");

        for(i = 0; i < 2; i++)
        {
            scanf("%d",&pin);
            if(pin == pass)
            {
                printf("Mujaya Nyasha Anorema\n");
                break;
            }
            else
            {
              printf("MPIN entered is incorrect\n");
              printf("\nMaximum number of attempts reached\n");
              printf("Please visit your nearest EcoCash branch\n");
              printf("to re-activate your account. Thank you\n");
            }
            break;
        }
    }
    }else{
    printf("USSD code incorrect or connection error\n");
    }
    return 0;
}
