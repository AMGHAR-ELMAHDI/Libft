void ft_swap(char buffer[], int len)
{
    int start;
    int end;

    start = 0;
    end = len - 1;
    while(start < end)
    {
        buffer[start] = buffer[end];
        start++;
        end--;
    }
}

char* itoa(int num, char* str, int base)
{
    int i = 0;
    int isNegative = 1;


    if (num == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }

    if (num < 0 && base == 10)
    {
        isNegative = -1;
        num = -num;
    }

    while (num != 0)
    {
        int rem = num % base;
        str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
        num = num/base;
    }

    if (isNegative == -1)
        str[i++] = '-';

    str[i] = '\0';
    ft_swap(str, i);
    return str;
}

int main()
{
    char str[100];
    printf("10= %s\n",itoa(1567, str, 10));
    printf("10= %s\n",itoa(-1567, str, 10));
    printf("2= %s\n",itoa(1567, str, 2));
    printf("16= %s\n",itoa(1567, str, 16));
    printf("8= %s",itoa(1567, str, 8));
    return 0;
}
