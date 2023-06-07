/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstword_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:36:29 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/19 14:36:56 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //to use write function

int	main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while(argv[1][i] == ' '|| argv[1][i] == '\t')
			i++;
		while(argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}