int posCart(int id)
{
    int pos = 0;

    if (first2 == NULL)
    {
        return pos;
    }
    else
    {
        for (ptr2 = first2;ptr2 != NULL;ptr2 = ptr2->next2)
        {
            pos = pos + 1;
            if (ptr2->id == id)
            {
                return pos;
            }
        }

    }
}
