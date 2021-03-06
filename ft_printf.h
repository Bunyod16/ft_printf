#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft.h"

typedef struct s_struct
{
	va_list	args;
	int		sign;
	int		prc;
	int		pnt;
	int		dash;
	int		count;
	int		wdt;
	int		sp;
	int		zero;
	int		big_x;
	int		hash;
}	t_obj;

int		ft_printf(const char *str, ...);
void	process_char(t_obj *flags);
void	printf_char(t_obj *flags);
void	printf_char_wdt(t_obj *flags);
void	printf_char_wdt_dash(t_obj *flags);
void	process_str(t_obj *flags);
void	process_ptr(t_obj *flags);
void	printf_ptr(t_obj *flags);
void	process_dec(t_obj *flags);
void	printf_dec(t_obj *flags);
void	ft_putnbr_fd_long(unsigned int num, int fd);
void	process_u(t_obj *flags);
char	*ft_rev(char *str);
char	*to_hex(unsigned long long num);
void	process_x(t_obj *flags);
void	ft_putnchar_fd(char c, int n, int fd);
char	*ft_long_itoa(long long num);
#endif