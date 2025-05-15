{
        if (ptr->id == id)
        {
            printf("\n Enter the quantity[1-10]: ");
            scanf("%d",&qty);
            if (qty<=10) {
                checkStock(id, qty);
                newnode2 = create_node2(id, qty);
                pos=posCart(id);
                if(pos==0)
