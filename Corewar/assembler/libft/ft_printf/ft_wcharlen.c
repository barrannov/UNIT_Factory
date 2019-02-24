/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcharlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmulish <dmulish@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 16:46:54 by dmulish           #+#    #+#             */
/*   Updated: 2018/02/27 18:43:19 by dmulish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_wcharlen(wchar_t s)
{
	size_t	n;

	n = 0;
	if (s < 128)
		n++;
	else if (s > 127 && s < 2048)
		n += 2;
	else if (s > 2047 && s < 65536)
		n += 3;
	else if (s > 65535 && s < 1114112)
		n += 4;
	return (n);
}