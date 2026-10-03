
            int dic;
            dic = Price * 20 / 100;
            printf("You final Price is %d",dic);
        }else
        {
           Price = Price * 10 / 100;
           printf("You final Price is %d",Price);
        }
        
        
    }else
    {
        if (Ans == 'no')
        {
            Price = Price * 15 / 100;
            printf("You final Price is %d",Price);
        }else
        {
             printf("You final Price is %d",Price);
        }