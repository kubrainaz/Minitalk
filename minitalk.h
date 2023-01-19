/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinaz <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:24:46 by kinaz             #+#    #+#             */
/*   Updated: 2022/10/06 16:24:49 by kinaz            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h> 
# include <unistd.h> 

int		ft_atoi(const char	*str);
void	ft_itoa(int pid);
void	convert_binary_to_char(int c);
void	signal_handler(int sig);
void	send_character_bits(int c, int pid);
void	send_message(char *message, int pid);

#endif
