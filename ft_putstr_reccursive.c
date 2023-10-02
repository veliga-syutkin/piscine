#include <unistd.h>

void	ft_putstr_reccursive(char *str)
{
	if (*str != '\0')
		{
			write(1, str, 1);
			ft_putstr_reccursive(str + 1);
		}
}

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		ft_putstr_reccursive(argv[1]);
	}
}
