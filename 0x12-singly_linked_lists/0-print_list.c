#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
unsigned int i = 0;
const list_t *tmp, *new;
tmp = new = h;
while (new != NULL)
{
if (new->str == NULL)
{
printf("[0] (nil)\n");
i++;
}
else
{
printf("[%u] %s\n", new->len, new->str);
i++;
}
tmp = tmp->next;
new = tmp;
}
return (i);
}
