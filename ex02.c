/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 09:30:30 by rhallste          #+#    #+#             */
/*   Updated: 2017/07/09 13:35:49 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	nmatch(char *s1, char *s2);

int	main(void)
{

	int i = 1;

printf("%d -> %d\n", i++, nmatch("asdf", "asdf") == 1);
printf("%d -> %d\n", i++, nmatch("", "") == 1);
printf("%d -> %d\n", i++, nmatch("a", "a") == 1);
printf("%d -> %d\n", i++, nmatch("aa", "aa") == 1);
printf("%d -> %d\n", i++, nmatch("aaa", "aaa") == 1);

printf("%d -> %d\n", i++, nmatch("", "asdf") == 0);
printf("%d -> %d\n", i++, nmatch("asdf", "") == 0);
printf("%d -> %d\n", i++, nmatch("asdf", "a") == 0);
printf("%d -> %d\n", i++, nmatch("a", "asdf") == 0);
printf("%d -> %d\n", i++, nmatch("asdf", "asde") == 0);
//10
printf("%d -> %d\n", i++, nmatch("asde", "asdf") == 0);
printf("%d -> %d\n", i++, nmatch("asdf", "asdff") == 0);
printf("%d -> %d\n", i++, nmatch("asdff", "asdf") == 0);
printf("%d -> %d\n", i++, nmatch("aasdf", "asdf") == 0);
printf("%d -> %d\n", i++, nmatch("asdf", "aasdf") == 0);

printf("%d -> %d\n", i++, nmatch("", "*") == 1);
printf("%d -> %d\n", i++, nmatch("a", "*") == 1);
printf("%d -> %d\n", i++, nmatch("aa", "*") == 1);
printf("%d -> %d\n", i++, nmatch("asdf", "*") == 1);
printf("%d -> %d\n", i++, nmatch("asdfasdf", "*") == 1);
//20
printf("%d -> %d\n", i++, nmatch("asdf", "a*") == 1);
printf("%d -> %d\n", i++, nmatch("asdfasdf", "a*") == 1);
printf("%d -> %d\n", i++, nmatch("a", "a*") == 1);
printf("%d -> %d\n", i++, nmatch("aa", "a*") == 1);
printf("%d -> %d\n", i++, nmatch("aasdf", "a*") == 1);

printf("%d -> %d\n", i++, nmatch("", "a*") == 0);
printf("%d -> %d\n", i++, nmatch("f", "a*") == 0);
printf("%d -> %d\n", i++, nmatch("fdsa", "a*") == 0);
printf("%d -> %d\n", i++, nmatch("faaaa", "a*") == 0);
printf("%d -> %d\n", i++, nmatch("faaasdf", "a*") == 0);
//30
printf("%d -> %d\n", i++, nmatch("fdsa", "*a") == 1);
printf("%d -> %d\n", i++, nmatch("a", "*a") == 1);
printf("%d -> %d\n", i++, nmatch("aa", "*a") == 1);
printf("%d -> %d\n", i++, nmatch("fdsaaaaaaafdsa", "*a") == 1);
printf("%d -> %d\n", i++, nmatch("dfsaaaaaaaaaaaa", "*a") == 1);

printf("%d -> %d\n", i++, nmatch("", "*a") == 0);
printf("%d -> %d\n", i++, nmatch("f", "*a") == 0);
printf("%d -> %d\n", i++, nmatch("asdf", "*a") == 0);
printf("%d -> %d\n", i++, nmatch("aaaaaf", "*a") == 0);
printf("%d -> %d\n", i++, nmatch("fdsaaaaf", "*a") == 0);
//40
printf("%d -> %d\n", i++, nmatch("abc", "abc*") == 1);
printf("%d -> %d\n", i++, nmatch("abcdef", "abc*") == 1);
printf("%d -> %d\n", i++, nmatch("abccccccc", "abc*") == 1);
printf("%d -> %d\n", i++, nmatch("abcabc", "abc*") == 1);
printf("%d -> %d\n", i++, nmatch("abcdabcdabc", "abc*") == 1);

printf("%d -> %d\n", i++, nmatch("", "abc*") == 0);
printf("%d -> %d\n", i++, nmatch("f", "abc*") == 0);
printf("%d -> %d\n", i++, nmatch("abbc", "abc*") == 0);
printf("%d -> %d\n", i++, nmatch("ab", "abc*") == 0);
printf("%d -> %d\n", i++, nmatch("abb", "abc*") == 0);
// 50

printf("%d -> %d\n", i++, nmatch("abc", "*abc") == 1);
printf("%d -> %d\n", i++, nmatch("defabc", "*abc") == 1);
printf("%d -> %d\n", i++, nmatch("aaaaaaabc", "*abc") == 1);
printf("%d -> %d\n", i++, nmatch("abcabc", "*abc") == 1);
printf("%d -> %d\n", i++, nmatch("abcdabcdabc", "*abc") == 1);

printf("%d -> %d\n", i++, nmatch("", "*abc") == 0);
printf("%d -> %d\n", i++, nmatch("f", "*abc") == 0);
printf("%d -> %d\n", i++, nmatch("abbc", "*abc") == 0);
printf("%d -> %d\n", i++, nmatch("ab", "*abc") == 0);
printf("%d -> %d\n", i++, nmatch("abb", "*abc") == 0);
//60
printf("%d -> %d\n", i++, nmatch("a", "*a*") == 1);
printf("%d -> %d\n", i++, nmatch("aaa", "*a*") == 3);
printf("%d -> %d\n", i++, nmatch("aaabc", "*a*") == 3);
printf("%d -> %d\n", i++, nmatch("bcabc", "*a*") == 1);
printf("%d -> %d\n", i++, nmatch("sdfa", "*a*") == 1);

printf("%d -> %d\n", i++, nmatch("", "*a*") == 0);
printf("%d -> %d\n", i++, nmatch("f", "*a*") == 0);
printf("%d -> %d\n", i++, nmatch("bcd", "*a*") == 0);
printf("%d -> %d\n", i++, nmatch("bb", "*a*") == 0);
printf("%d -> %d\n", i++, nmatch("ASDF", "*a*") == 0);
//70
printf("%d -> %d\n", i++, nmatch("ab", "*ab*") == 1);
printf("%d -> %d\n", i++, nmatch("abcd", "*ab*") == 1);
printf("%d -> %d\n", i++, nmatch("efabcd", "*ab*") == 1);
printf("%d -> %d\n", i++, nmatch("ababab", "*ab*") == 3);
printf("%d -> %d\n", i++, nmatch("bab", "*ab*") == 1);

printf("%d -> %d\n", i++, nmatch("asdf", "*ab*") == 0);
printf("%d -> %d\n", i++, nmatch("ba", "*ab*") == 0);
printf("%d -> %d\n", i++, nmatch("", "*ab*") == 0);
printf("%d -> %d\n", i++, nmatch("f", "*ab*") == 0);
printf("%d -> %d\n", i++, nmatch("bbbbbbaaaaa", "*ab*") == 0);
//80
printf("%d -> %d\n", i++, nmatch("", "**") == 1);
printf("%d -> %d\n", i++, nmatch("a", "**") == 2);
printf("%d -> %d\n", i++, nmatch("ab", "**") == 3);
printf("%d -> %d\n", i++, nmatch("abc", "**") == 4);
printf("%d -> %d\n", i++, nmatch("abcd", "**") == 5);

printf("%d -> %d\n", i++, nmatch("a", "a**") == 1);
printf("%d -> %d\n", i++, nmatch("ab", "a**") == 2);
printf("%d -> %d\n", i++, nmatch("abc", "a**") == 3);
printf("%d -> %d\n", i++, nmatch("aaaa", "a**") == 4);
printf("%d -> %d\n", i++, nmatch("asdfa", "a**") == 5);
//90
printf("%d -> %d\n", i++, nmatch("", "a**") == 0);
printf("%d -> %d\n", i++, nmatch("f", "a**") == 0);
printf("%d -> %d\n", i++, nmatch("fa", "a**") == 0);
printf("%d -> %d\n", i++, nmatch("faaaaaaa", "a**") == 0);
printf("%d -> %d\n", i++, nmatch("fafdsafdsa", "a**") == 0);

printf("%d -> %d\n", i++, nmatch("asdf", "*a**") == 4);
printf("%d -> %d\n", i++, nmatch("sdfa", "*a**") == 1);
printf("%d -> %d\n", i++, nmatch("faffff", "*a**") == 5);
printf("%d -> %d\n", i++, nmatch("fdsaasdf", "*a**") == 9);
printf("%d -> %d\n", i++, nmatch("aaaaaaa", "*a**") == 28);
// 100

printf("%d -> %d\n", i++, nmatch("", "*a**") == 0);
printf("%d -> %d\n", i++, nmatch("qwerqwer", "*a**") == 0);
printf("%d -> %d\n", i++, nmatch("bbbbbb", "*a**") == 0);
printf("%d -> %d\n", i++, nmatch("c", "*a**") == 0);
printf("%d -> %d\n", i++, nmatch("AAAAAAAAAA", "*a**") == 0);

printf("%d -> %d\n", i++, nmatch("main.c", "*.c") == 1);
printf("%d -> %d\n", i++, nmatch("main.c.c", "*.c") == 1);
printf("%d -> %d\n", i++, nmatch("main.h", "*.c") == 0);
printf("%d -> %d\n", i++, nmatch("main.cc", "*.c") == 0);
printf("%d -> %d\n", i++, nmatch("main.c", "*.*") == 1);
//110
printf("%d -> %d\n", i++, nmatch("test.main.c", "test.*.c") == 1);
printf("%d -> %d\n", i++, nmatch("test..c", "test.*.c") == 1);
printf("%d -> %d\n", i++, nmatch("test.main.h", "test.*.c") == 0);
printf("%d -> %d\n", i++, nmatch("main.c", "test.*.c") == 0);
printf("%d -> %d\n", i++, nmatch("test.c", "test.*.c") == 0);

printf("%d -> %d\n", i++, nmatch("abcde", "a*c*e") == 1);
printf("%d -> %d\n", i++, nmatch("abcde", "*b*d*") == 1);
printf("%d -> %d\n", i++, nmatch("abcde", "a*e*c") == 0);
printf("%d -> %d\n", i++, nmatch("abcde", "*d*c*") == 0);
printf("%d -> %d\n", i++, nmatch("abcde", "a*d*d") == 0);
//120

printf("%d -> %d\n", i++, nmatch("abcbd", "*b*") == 2);
printf("%d -> %d\n", i++, nmatch("abc", "a**") == 3);
printf("%d -> %d\n", i++, nmatch("test.asdf.c.bak", "*.*.*") == 3);
printf("%d -> %d\n", i++, nmatch("test.bak", "*.*.*") == 0);
printf("%d -> %d\n", i++, nmatch("", "************************") == 1);

printf("%d -> %d\n", i++, nmatch("*a", "*") == 1);
printf("%d -> %d\n", i++, nmatch("**", "*") == 1);
printf("%d -> %d\n", i++, nmatch("*ab", "*b") == 1);
printf("%d -> %d\n", i++, nmatch("a*a", "a*") == 1);
printf("%d -> %d\n", i++, nmatch("**a", "*a") == 1);
//130
printf("Hello with 2 start: %d\n", nmatch("Hello", "**"));
return(0);
}
