#include <unistd.h>

void	ft_putstr_rec(char *str, int i) // la fonction wrappée
{
	if (!str[i])
	{
		write(1, str, i);
		return ;
	}
	ft_putstr_rec(str, i+1);
}

void	ft_putstr(char *str) //fontcion wrapper (= qui sert a appeller une autre)
{
	ft_putstr_rec(str, 0);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		ft_putstr(argv[1]);
	}
}
