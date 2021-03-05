#include <stdio.h>
#include <stdlib.h>



char name[20];
int level;

int main()
{
    printf("Hello!!!\nWhat can i call you?");
    scanf("%s", name);



    printf("\nOk nice!!\nNow, in a  a scale from 1 to 10 how well do you feel right now?");
    scanf("%d", level);

    if(level == 0)
        {printf("Awwwww man i know life has been rough af, but whats going on for you to be so down?");}
    else if(level == 1)
        {printf("Ohhhh man what's going on?");}
    else if(level ==2 )
        {printf("I know everything seems bad, but how about those simple things that are so beautiful?");}
    else if(level ==3 )
        {printf("\nDont be like that, i know this school fucking kills you, but if u really think about it, we are becoming so fucking strong and so much smarter every day!!!\nDon't you think it's worth it?");}
    else if(level == 4)
        {printf("Hey, if you are in a bad spot, its allways good to talk 'bout it!!");}
    else if(level == 5)
        {printf("You're just in the middle, swinging between happiness and sadness, but never too much of each one, am i right?");}
    else if(level == 6)
        {printf("You've felt better haven't you? It's still  better than those other times uhh.");}
    else if(level == 7)
        {printf("Of course  things could be better, but never forget they could be a lot worst.");}
    else if(level == 8)
        {printf("I'd say you're pretty good at the moment, although you could be happier, but that's just how life is.");}
    else if(level == 9)
        {printf("Woooaaaa i see your feeling hell good, i'm happy for you :).");}
    else if(level == 10)
        {printf("Ahhhhh that feeling, for me, it's like having no cares, just realaxing, having fun, enjoy the little things.\n These times are rare and fly just right right by you, and you sometimes don't even get to enjoy them.\n After all, you would be that happy if you payed attention to everything :=)");}
    else
    {printf("Uhhhhh i don't quite understand what you mean by that bud.....");}


    return 0;
}
