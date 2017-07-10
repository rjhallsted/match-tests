/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:39:08 by rhallste          #+#    #+#             */
/*   Updated: 2017/07/09 11:41:00 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	match(char *s1, char *s2);

int	main(void)
{
	int i;
	i = 1;
	
	printf("%d -> %d\n", i++, match("asdf", "asdf") == 1);
	printf("%d -> %d\n", i++, match("", "") == 1);
	printf("%d -> %d\n", i++, match("a", "a") == 1);
	printf("%d -> %d\n", i++, match("aa", "aa") == 1);
	printf("%d -> %d\n", i++, match("aaa", "aaa") == 1);

	printf("%d -> %d\n", i++, match("", "asdf") == 0);
	printf("%d -> %d\n", i++, match("asdf", "") == 0);
	printf("%d -> %d\n", i++, match("asdf", "a") == 0);
	printf("%d -> %d\n", i++, match("a", "asdf") == 0);
	printf("%d -> %d\n", i++, match("asdf", "asde") == 0);
//10
	printf("%d -> %d\n", i++, match("asde", "asdf") == 0);
	printf("%d -> %d\n", i++, match("asdf", "asdff") == 0);
	printf("%d -> %d\n", i++, match("asdff", "asdf") == 0);
	printf("%d -> %d\n", i++, match("aasdf", "asdf") == 0);
	printf("%d -> %d\n", i++, match("asdf", "aasdf") == 0);

	printf("%d -> %d\n", i++, match("", "*") == 1);
	printf("%d -> %d\n", i++, match("a", "*") == 1);
	printf("%d -> %d\n", i++, match("aa", "*") == 1);
	printf("%d -> %d\n", i++, match("asdf", "*") == 1);
	printf("%d -> %d\n", i++, match("asdfasdf", "*") == 1);
//20
	printf("%d -> %d\n", i++, match("asdf", "a*") == 1);
	printf("%d -> %d\n", i++, match("asdfasdf", "a*") == 1);
	printf("%d -> %d\n", i++, match("a", "a*") == 1);
	printf("%d -> %d\n", i++, match("aa", "a*") == 1);
	printf("%d -> %d\n", i++, match("aasdf", "a*") == 1);

	printf("%d -> %d\n", i++, match("", "a*") == 0);
	printf("%d -> %d\n", i++, match("f", "a*") == 0);
	printf("%d -> %d\n", i++, match("fdsa", "a*") == 0);
	printf("%d -> %d\n", i++, match("faaaa", "a*") == 0);
	printf("%d -> %d\n", i++, match("faaasdf", "a*") == 0);

//30	
	printf("%d -> %d\n", i++, match("fdsa", "*a") == 1);
	printf("%d -> %d\n", i++, match("a", "*a") == 1);
	printf("%d -> %d\n", i++, match("aa", "*a") == 1);
	printf("%d -> %d\n", i++, match("fdsaaaaaaafdsa", "*a") == 1);
	printf("%d -> %d\n", i++, match("dfsaaaaaaaaaaaa", "*a") == 1);

	printf("%d -> %d\n", i++, match("", "*a") == 0);
	printf("%d -> %d\n", i++, match("f", "*a") == 0);
	printf("%d -> %d\n", i++, match("asdf", "*a") == 0);
	printf("%d -> %d\n", i++, match("aaaaaf", "*a") == 0);
	printf("%d -> %d\n", i++, match("fdsaaaaf", "*a") == 0);
//40
	printf("%d -> %d\n", i++, match("abc", "abc*") == 1);
	printf("%d -> %d\n", i++, match("abcdef", "abc*") == 1);
	printf("%d -> %d\n", i++, match("abccccccc", "abc*") == 1);
	printf("%d -> %d\n", i++, match("abcabc", "abc*") == 1);
	printf("%d -> %d\n", i++, match("abcdabcdabc", "abc*") == 1);
		
	printf("%d -> %d\n", i++, match("", "abc*") == 0);
	printf("%d -> %d\n", i++, match("f", "abc*") == 0);
	printf("%d -> %d\n", i++, match("abbc", "abc*") == 0);
	printf("%d -> %d\n", i++, match("ab", "abc*") == 0);
	printf("%d -> %d\n", i++, match("abb", "abc*") == 0);
// 50

	printf("%d -> %d\n", i++, match("abc", "*abc") == 1);
	printf("%d -> %d\n", i++, match("defabc", "*abc") == 1);
	printf("%d -> %d\n", i++, match("aaaaaaabc", "*abc") == 1);
	printf("%d -> %d\n", i++, match("abcabc", "*abc") == 1);
	printf("%d -> %d\n", i++, match("abcdabcdabc", "*abc") == 1);

	printf("%d -> %d\n", i++, match("", "*abc") == 0);
	printf("%d -> %d\n", i++, match("f", "*abc") == 0);
	printf("%d -> %d\n", i++, match("abbc", "*abc") == 0);
	printf("%d -> %d\n", i++, match("ab", "*abc") == 0);
	printf("%d -> %d\n", i++, match("abb", "*abc") == 0);
//60
	printf("%d -> %d\n", i++, match("a", "*a*") == 1);
	printf("%d -> %d\n", i++, match("aaa", "*a*") == 1);
	printf("%d -> %d\n", i++, match("aaaaaaabc", "*a*") == 1);
	printf("%d -> %d\n", i++, match("bcabc", "*a*") == 1);
	printf("%d -> %d\n", i++, match("sdfa", "*a*") == 1);

	printf("%d -> %d\n", i++, match("", "*a*") == 0);
	printf("%d -> %d\n", i++, match("f", "*a*") == 0);
	printf("%d -> %d\n", i++, match("bcd", "*a*") == 0);
	printf("%d -> %d\n", i++, match("bb", "*a*") == 0);
	printf("%d -> %d\n", i++, match("ASDF", "*a*") == 0);
//70
	printf("%d -> %d\n", i++, match("ab", "*ab*") == 1);
	printf("%d -> %d\n", i++, match("abcd", "*ab*") == 1);
	printf("%d -> %d\n", i++, match("efabcd", "*ab*") == 1);
	printf("%d -> %d\n", i++, match("ababab", "*ab*") == 1);
	printf("%d -> %d\n", i++, match("bab", "*ab*") == 1);

	printf("%d -> %d\n", i++, match("asdf", "*ab*") == 0);
	printf("%d -> %d\n", i++, match("ba", "*ab*") == 0);
	printf("%d -> %d\n", i++, match("", "*ab*") == 0);
	printf("%d -> %d\n", i++, match("f", "*ab*") == 0);
	printf("%d -> %d\n", i++, match("bbbbbbaaaaa", "*ab*") == 0);
//80
	printf("%d -> %d\n", i++, match("", "**") == 1);
	printf("%d -> %d\n", i++, match("a", "**") == 1);
	printf("%d -> %d\n", i++, match("ab", "**") == 1);
	printf("%d -> %d\n", i++, match("abc", "**") == 1);
	printf("%d -> %d\n", i++, match("abcd", "**") == 1);

	printf("%d -> %d\n", i++, match("a", "a**") == 1);
	printf("%d -> %d\n", i++, match("ab", "a**") == 1);
	printf("%d -> %d\n", i++, match("abc", "a**") == 1);
	printf("%d -> %d\n", i++, match("aaaaaa", "a**") == 1);
	printf("%d -> %d\n", i++, match("asdfaaaaa", "a**") == 1);
//90
	printf("%d -> %d\n", i++, match("", "a**") == 0);
	printf("%d -> %d\n", i++, match("f", "a**") == 0);
	printf("%d -> %d\n", i++, match("fa", "a**") == 0);
	printf("%d -> %d\n", i++, match("faaaaaaa", "a**") == 0);
	printf("%d -> %d\n", i++, match("fafdsafdsa", "a**") == 0);

	printf("%d -> %d\n", i++, match("asdf", "*a**") == 1);
	printf("%d -> %d\n", i++, match("sdfa", "*a**") == 1);
	printf("%d -> %d\n", i++, match("faffff", "*a**") == 1);
	printf("%d -> %d\n", i++, match("fdsaasdf", "*a**") == 1);
	printf("%d -> %d\n", i++, match("aaaaaaa", "*a**") == 1);
// 100

	printf("%d -> %d\n", i++, match("", "*a**") == 0);
	printf("%d -> %d\n", i++, match("qwerqwer", "*a**") == 0);
	printf("%d -> %d\n", i++, match("bbbbbb", "*a**") == 0);
	printf("%d -> %d\n", i++, match("c", "*a**") == 0);
	printf("%d -> %d\n", i++, match("AAAAAAAAAA", "*a**") == 0);

	printf("%d -> %d\n", i++, match("main.c", "*.c") == 1);
	printf("%d -> %d\n", i++, match("main.c.c", "*.c") == 1);
	printf("%d -> %d\n", i++, match("main.h", "*.c") == 0);
	printf("%d -> %d\n", i++, match("main.cc", "*.c") == 0);
	printf("%d -> %d\n", i++, match("main.c", "*.*") == 1);
//110
	printf("%d -> %d\n", i++, match("test.main.c", "test.*.c") == 1);
	printf("%d -> %d\n", i++, match("test..c", "test.*.c") == 1);
	printf("%d -> %d\n", i++, match("test.main.h", "test.*.c") == 0);
	printf("%d -> %d\n", i++, match("main.c", "test.*.c") == 0);
	printf("%d -> %d\n", i++, match("test.c", "test.*.c") == 0);

	printf("%d -> %d\n", i++, match("abcde", "a*c*e") == 1);
	printf("%d -> %d\n", i++, match("abcde", "*b*d*") == 1);
	printf("%d -> %d\n", i++, match("abcde", "a*e*c") == 0);
	printf("%d -> %d\n", i++, match("abcde", "*d*c*") == 0);
	printf("%d -> %d\n", i++, match("abcde", "a*d*d") == 0);
//120
	printf("%d -> %d\n", i++, match("*a", "*") == 1);
	printf("%d -> %d\n", i++, match("**", "*") == 1);
	printf("%d -> %d\n", i++, match("*ab", "*b") == 1);
	printf("%d -> %d\n", i++, match("a*a", "a*") == 1);
	printf("%d -> %d\n", i++, match("**a", "*a") == 1);

}
