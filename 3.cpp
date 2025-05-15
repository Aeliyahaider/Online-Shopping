void purchaseProduct()
{
    int ch;

    while (1)
    {
        system("cls");
        displayAllProduct();
        printf("\t\t\n WELCOME CUSTOMER!!\n\n");
        printf("\n1. Buy a product\n");
        printf("\n0. Back\n");
        printf("\nPlease enter your Choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1: {
                addToCart();
                break;
            }
            case 0:{
                return main();
            }
            default: printf("Valid choice not entered!");

        }

    }

}
