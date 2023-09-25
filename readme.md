# Algoprog cheatcode suniB

by B27 - KMG

**Note: You can use C library and syntax in .cpp file (C++), some of the files here have cpp extension but they are written in C.**

## SOCS Quick tip
- Always remember \n
- Use double instead of float (%lf)
- Always use tricky test case to test your code
- 


Hope this helps.

## Quick Nav

Algorithm and Programming

- [Flow control](#flow-control)
- [Loop]
- [Array]
- [Pointers]
- [Function]
- [Recursion]
- [Sorting]
- [Searching]
- [Memory allocation]
- [Files]
- [Struct]
- [Union]
- [Enums]

# Flow Control

- [If..Else](#ifelse)
- [Switch](#switch)

## If..Else

```
int num = 5;
if (num >= 5)
{
    printf("%d\n", num);
}
else
{
    printf("%d is smaller than 5", num);
}
// 5
```

+Bonus (Short hand if-else)

```
(condition) ? expressionTrue : expresionFalse;

int date = 28;
(date == 28) ? printf("Happy Birthday!") : printf("Hello");
// Happy Birthday!

char birthday = (date == 28) ? 'Y' : 'n';
// Y
```

## Switch

```
    int num = 5;
    switch(num)
    {
        case 1:
            printf("%d is 1", num);
            break;
        case 2:
            printf("%d is 2", num);
            break;
        case 5:
            printf("%d is 5", num);
            break;
        default:
            printf("%d is not 1, 2, or 5", num);
            break;
    }
    // 5 is 5
```

# Loop

- [For Loop](#for-loop)
- [While Loop](#while-loop)
- [Do..While Loop](#dowhile-loop)

## For Loop

Use this loop if you **know how many times** you want to loop through a block of code.

```
for (int i = 0; i < 5; i++)**
{
    printf("%d ", i); // Notice the space after the %d
}
// 1 2 3 4
```

## While Loop

```
int i = 0;
while(i < 5)
{
    printf("%d ", i);
    i++;
}
// 0 1 2 3 4
```

## Do..While Loop

The difference from while loop is do/while will execute the code at least once before it check the condition.

```
int i = 1;
do
{
    printf("Even though the stop condition is met, I'll run this code one time.\n");
    i++;
}
while (i < 1);
// Even though the stop condition is met, I'll run this code one time.
```

# Array
