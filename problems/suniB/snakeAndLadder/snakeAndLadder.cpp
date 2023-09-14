#include <stdio.h>

int main()
{
	int rep, loc;

    // Dice logic
    scanf("%d", &rep);
    
    for (int i = 0; i < rep; i++)
    {
        int temp;
        scanf("%d", &temp);
        loc += temp;
    }

    // Snake and ladder logic
    // Snake pos
    switch(loc)
    {
        case 53:
            loc = 37;
            break;
        case 80:
            loc = 59;
            break;
        case 97:
            loc = 88;
            break;
    }

    // Ladder pos
    switch (loc)
    {
    case 9:
        loc = 21;
        break;
    case 33:
        loc = 42;
        break;
    case 76:
        loc = 92;
        break;
    }
    printf("%d\n", loc);
}
