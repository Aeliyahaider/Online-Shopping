int posProduct(int id)
{
    int pos = 0;

    if (first == NULL)
    {
        return pos;
    }
    else
    {
        for (ptr = first;ptr != NULL;ptr = ptr->next)
        {
            pos = pos + 1;
            if (ptr->id == id)
            {
                return pos;
            }
        }

    }

}
