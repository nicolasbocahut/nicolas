void	ft_putchar(char c);

void ft_putstr(char *str)
{
	int i;

	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}