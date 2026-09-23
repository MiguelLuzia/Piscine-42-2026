/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurigne <sdurigne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 17:24:51 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/20 18:48:19 by sdurigne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_entry
{
	char			*key;
	char			*value;
	struct s_entry	*next;
}	t_entry;

typedef struct s_ctx
{
	int	first;
	int	check_only;
}	t_ctx;

void	ft_putchar(char c);
char	*ft_strdup(char *src);
int		ft_len(char *str);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*normalize_input(char *str);
char	*read_line(int fd, int *status);
char	*ft_strndup_range(char *src, int start, int end);
int		is_blank(char *line);
t_entry	*parse_line(char *line, int *status);
int		key_exists(t_entry *dict, char *key);
t_entry	*load_dict(char *file_name, int *status);
t_entry	*find_entry(t_entry *dict, char *key);
void	free_dict(t_entry *dict);
int		print_word(t_entry *dict, char *key, t_ctx *ctx);
int		print_under_1000(char *group, t_entry *dict, t_ctx *ctx);
int		make_scale_key(char *dst, int size, int power);
int		print_number(char *number, t_entry *dict, t_ctx *ctx);

#endif
