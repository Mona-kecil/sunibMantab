#include <stdio.h>

int main(int argc, char const *argv[])
{
    char string[101];

    scanf("%[^\n]", string);

    printf("#include <stdio.h>\nint main()\n{\n    printf(\"%%s\\n\",\"%s\");\n    return 0;\n}\n", string);
    return 0;
}