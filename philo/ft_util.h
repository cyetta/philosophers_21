/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 18:13:12 by cyetta            #+#    #+#             */
/*   Updated: 2022/04/14 21:17:35 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTIL_H
# define FT_UTIL_H
# define ERR_ARGUMENT 1
# include <sys/time.h>

typedef struct timeval	t_timeval;

int		ft_strlen(char *str);
int		ft_puts(char *str);
int		ft_putsn(char *str);
int		ft_atoi(const char *str);
int		ft_atoi_ovfl(const char *str, int *resault);
long	ft_timestamp(t_timeval tv);
long	ft_msleep(long ms);
#endif
