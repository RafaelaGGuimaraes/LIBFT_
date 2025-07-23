#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/* Parte 1 - Libc functions */
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);

size_t	ft_strlen(const char *s);


/* Parte 2 - Funções adicionais */
// char	*ft_substr(...);  ← você adicionará aqui depois

/* Parte bônus */
// t_list	*ft_lstnew(...); ← só se fizer bônus



#endif