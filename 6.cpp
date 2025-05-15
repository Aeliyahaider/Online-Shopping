{
                    if (first2 == last2 && first2 == NULL)
                    {
                        first2 = last2 = newnode2;
                        first2->next2 = NULL;
                        last2->next2 = NULL;
                    }
                    else
                    {
                        temp2 = first2;
                        first2 = newnode2;
                        first2->next2 = temp2;
                    }
                }
