/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:02:58 by rpambo            #+#    #+#             */
/*   Updated: 2023/11/26 12:29:26 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FUNCTIONS_H
# define FUNCTIONS_H

int	check_row_left(int tab[4][4], int pos, int entry[16]);
int	check_col_up(int tab[4][4], int pos, int entry[16]);
int	check_row_right(int tab[4][4], int pos, int entry[16]);
int	check_col_down(int tab[4][4], int pos, int entry[16]);
int	ft_atoi(char *str);
int	ft_strlen(char *str);
int	*get_numbers(char *str);
int	check(int ac, char **av);
int	check_double(int tab[4][4], int pos, int num);
int	check_case(int tab[4][4], int pos, int entry[16]);

#endif
