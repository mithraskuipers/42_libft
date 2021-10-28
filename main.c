# include "ft_split.c"

int main(void)
{
    char    s[] = "Austin zit naast mij en is heel erg hard aan het werk";
    ft_split(s, ' ');

    system("leaks a.out");
    return (0);
}
