/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   message.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkolomiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/21 18:17:49 by pkolomiy          #+#    #+#             */
/*   Updated: 2017/05/21 20:35:59 by pkolomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alum1.h"

void	mesg(char *str)
{
	while (*str++)
	{
		*str == '|' ? write(1, "\e[37;1m|\e[0m", 12) : 0;
		*str == '+' ? write(1, "\e[37;1m+\e[0m", 12) : 0;
		*str == '-' ? write(1, "\e[37;1m-\e[0m", 12) : 0;
		*str == '.' ? write(1, " ", 1) : 0;
		*str == '*' ? write(1, "\360\237\216\211", 4) : 0;
		*str == '#' ? write(1, "\342\230\271", 3) : 0;
		*str == 'n' ? write(1, "\n", 1) : 0;
	}
}

void	won(void)
{
	mesg(" +---------------------------------------------------------------+n");
	mesg(" |...............................................................|n");
	mesg(" |....*...*...***...*...*.....*.....*...***...*...*...*..*..*....|n");
	mesg(" |....*...*..*...*..*...*.....*.....*..*...*..**..*...*..*..*....|n");
	mesg(" |.....*.*...*...*..*...*.....*..*..*..*...*..*.*.*...*..*..*....|n");
	mesg(" |......*....*...*..*...*.....*..*..*..*...*..*..**..............|n");
	mesg(" |......*.....***....***.......**.**....***...*...*...*..*..*....|n");
	mesg(" |...............................................................|n");
	mesg(" +---------------------------------------------------------------+n");
}

void	lost(void)
{
	mesg(" +---------------------------------------------------------------+n");
	mesg(" |...............................................................|n");
	mesg(" |..#...#...###...#...#....#.......###....####..#####...#..#..#..|n");
	mesg(" |..#...#..#...#..#...#....#......#...#..#........#.....#..#..#..|n");
	mesg(" |...#.#...#...#..#...#....#......#...#...###.....#.....#..#..#..|n");
	mesg(" |....#....#...#..#...#....#......#...#......#....#..............|n");
	mesg(" |....#.....###....###.....#####...###...####.....#.....#..#..#..|n");
	mesg(" |...............................................................|n");
	mesg(" +---------------------------------------------------------------+n");
}
