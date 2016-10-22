void	ft_putchar(char c);

char	ft_get_line(int x, char a, char b)
{
	int i;
	
	if (x == 1)
	{
		ft_putchar(a);
	}
	if (x > 1)
	{
		i = 2; 
		ft_putchar(a);
		while (i < x)
		{
			ft_putchar(b);
			i++;
		}
		ft_putchar(a);
	}
	ft_putchar('\n');
}

char	rush(int x, int y)
{
	int i;
	
	if (y == 1)
	{
		ft_get_line(x, 'o', '-');
	}
	if (y > 1)
	{
		i = 2;
		ft_get_line(x, 'o', '-');
		while (i < y)
		{
			ft_get_line(x, '|', ' ');
			i++;
		}
		ft_get_line(x, 'o', '-');
	}
}
