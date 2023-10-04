# Algoprog cheatcode suniB

**Note: You can use C library and syntax in .cpp file (C++), some of the files here have cpp extension but they are written in C.**

## SOCS1 Quick tip

- Always remember \n
- Always check the constraint
- Use double instead of float (%lf)
- Avoid getchar if isn't necessary
- 

Hope this helps.

## Quick Nav

Algorithm and Programming

- [Flow control](#flow-control)
- [Loop](#loop)
- [Array] (#array)
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

One statement if

```
// if (condition) expressionTrue;
int num = 5;
if (num >= 5) num++;
// num = 6
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

**Some unique statement you can use inside a loop**
- Break (Once this statement is executed, the loop will stop immediately)
- Continue (Once this statement is executed, the loop will jump to next iteration)

**Example**
```
for (int i = 1; i <= 5; i++)
{
    if (i == 3)
    {
        continue;
    }
    printf("%d ", i); 
    // 1 2 4 5 
}

for (int i = 1; i <= 5; i++)
{
    if (i == 3)
    {
        break;
    }
    printf("%d ", i);
    // 1 2 3
}
```

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
### Definition
Array is a data structure that can store multiple values of the same type. You can imagine it like a train, a train consists of several carriages that are connected to each other. This way, you only need 1 'train' to carry multiple carriages. Each carriage will hold a unique number called **index number**. Index number **start from 0**.

The carriage can only carry items of the same type, such as humans, animals, or cargo. Similarly, **the values in each cell of an array are of the same data type**.

To create an array, first declare the data type then specify the name of the array followed by a square brackets that holds a number (array size). Example
```
int score[4];
// This line of code will initialize an integer array called score with a size of 4 (Can hold 4 integer value)

char name[4];
// This line of code will initialize a char array called name with a size of 4 (Can hold 3 char value + 1 null terminator "\0")
```

If we visualize the array, it kinda looks like this
```
int score[4];

| Index | 0 | 1 | 2 | 3 |
|-------|---|---|---|---|
| Value |   |   |   |   |

As you can see, now score variable is able to hold 4 value at once!
```
### Assigning value to an array
You can assign a value to one of the cell by referencing their index number, example
```
score[0] = 5;

now it will look like this!

| Index | 0 | 1 | 2 | 3 |
|-------|---|---|---|---|
| Value | 5 |   |   |   |
```
Or you can assign the value right when you declare the array, for example
```
char name[] = "Dale";

This way, we don't need to specify the array size, it will automatically fit the assigned value.
```

Again, if visualized it will look like this
```
| Index | 0 | 1 | 2 | 3 | 4  |
|-------|---|---|---|---|----|
| Value |'D'|'a'|'l'|'e'|'\0'|
```

### Accessing an array
