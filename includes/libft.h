/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsivanat <vsivanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:55:51 by vsivanat          #+#    #+#             */
/*   Updated: 2024/05/04 18:40:31 by vsivanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "ft_printf.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

// Structure for linked list
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

# ifndef GNL_BUFFER_SIZE
#  define GNL_BUFFER_SIZE 100
# endif

//==============================================================================
//--------------------------------- Conversion ---------------------------------
//==============================================================================
double				ft_atof(const char *str);
int					ft_atoi(const char *str);
int					ft_isspace(int c);
char				*ft_itoa(int n);
int					ft_tolower(int c);
int					ft_toupper(int c);

//==============================================================================
//------------------------------------ List -------------------------------------
//==============================================================================
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd_back(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

//==============================================================================
//---------------------------------- Memory ------------------------------------
//==============================================================================
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t count, size_t size);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);

//==============================================================================
//----------------------------- Other Functions -------------------------------
//==============================================================================
void				ft_free_arr(void **arr);
char				*get_next_line(int fd);

//==============================================================================
//----------------------------------- Output -----------------------------------
//==============================================================================
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *str, int fd);
void				ft_putendl_fd(char *str, int fd);
void				ft_putnbr_fd(int n, int fd);

//==============================================================================
//--------------------------------- String -------------------------------------
//==============================================================================
char				**ft_split(char const *s, char c);
char				*ft_strchr(const char *str, int n);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strdup(const char *s1);
void				ft_striteri(char *str, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
int					ft_strlen_c(const char *str, char c);
size_t				ft_strlen(const char *str);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
char				*ft_strrchr(const char *str, int n);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *str, unsigned int start, size_t len);

// Character functions
int					ft_isalnum(int n);
int					ft_isalpha(int n);
int					ft_isascii(int n);
int					ft_isdigit(int n);
int					ft_isprint(int n);

#endif
