#include <stdio.h>
#include "ft_printf.h"

void	print_flag(struct s_flag  flag)
{
	printf("flag: ");
	if (flag.hash)
		printf("# ");
	if (flag.zero)
		printf("0 ");
	if (flag.space)
		printf("\' \' ");
	if (flag.plus)
		printf("+ ");
	if (flag.hash)
		printf("-");
	printf("\n");
}

void	print_mod(struct s_mod  mod)
{
	printf("mod: ");
	if (mod.h)
		printf("h ");
	if (mod.hh)
		printf("hh ");
	if (mod.l)
		printf("l ");
	if (mod.ll)
		printf("ll ");
	if (mod.bl)
		printf("L");
	printf("\n");
}

int		main(int ac, char **av)
{
	t_format_list	*format_list;
/*
	int		i = 1;
	while (format_list)
	{
		printf("ELEM %d\n", i);
		printf("conv: %c\n", format_list->conv);
		print_flag(format_list->flag);
		print_mod(format_list->mod);
		printf("position: %d\n", format_list->position);
		printf("len: %d\n", format_list->len);
		printf("width: %d\n", format_list->width);
		printf("precision: %d\n", format_list->precision);
		printf("precision_flag: %d\n\n", format_list->precision_flag);
		format_list = format_list->next;
		i++;
	}
*/
	int a = -5;
	double	d = 0.002;
	ft_printf("{% %}\n");
//	ft_printf("%.18f\n", d);
//	printf("d: %s\n", ft_itoa_base(*((unsigned long long *)&d + 1), 2));
//	printf("m: %s\n", ft_itoa_base(*((unsigned long long *)&md + 1), 2));
	printf("%+--# hhhlll%\n");
	return (0);
}
