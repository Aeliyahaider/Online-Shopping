void addToCart()
{
    int id, qty,pos,cnt=0,i;
    char ch;
    printf("\n Enter the ID of the product you wish to add to cart: ");
    scanf("%d",&id);
    for (ptr = first;ptr != NULL;ptr = ptr->next)
