#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include "libft.h"

int	ft_printf(const char *str, ...);

typedef struct a_struct
{
	va_list	args;
	int sign;
	int	prc;
	int	pnt;
	int	dash;
	int count;
	int	wdt;
	int	is_zero;
	int zero;
	int	sp;
}	obj;

void	printf_percentage(obj *flags);
void    process_char(obj *flags);
void	printf_char(obj *flags);
void    printf_char_wdt(obj *flags);
void	printf_char_wdt_dash(obj *flags);
void    process_str(obj *flags);
void	printf_str(obj *flags);
void	process_ptr(obj *flags);
void	printf_ptr(obj *flags);
void	process_dec(obj *flags);
void	printf_dec(obj *flags);
void	process_int(obj *flags);
void	printf_int(obj *flags);
void	process_u(obj *flags);
void	printf_u(obj *flags);
char	*ft_rev(char *str);
char	*to_hex(unsigned long long num);
void	process_x(obj *flags, char c);
void	printf_xl(obj *flags);
void	printf_xu(obj *flags);
# endif