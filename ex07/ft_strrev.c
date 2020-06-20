/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stembe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 16:06:07 by stembe            #+#    #+#             */
/*   Updated: 2020/06/20 16:15:49 by stembe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev(char *str){
	char* answer 
	answer = malloc(100 * sizeof(str));
	int count;
	int count_ascending;
	count_ascending = 0;
	count = sizeof(str);
	while(0<=count){
		answer[count_ascending] = str[count];
		--count;
		++count_ascending;
	}
	return answer;
}
