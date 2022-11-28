#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: the structure of list_t
 * Return: node count
 */

size_t print_list(const list_t *h)
{
	list_t *head;
	list_t *new;
	list_t print = {"list", 5, NULL};
	size_t i;

	head = &print;
	new = malloc(sizeof(list_t));

	if (new == NULL)

		    {

			            printf("Error\n");

				            return (1);

					        }

	    new->str = strdup("Print");

	        new->len = 5;

		    new->next = head;

		        head = new;

			    n = print_list(head);

			        printf("-> %lu elements\n", n);



				    printf("\n");

				        free(new->str);

					    new->str = NULL;

					        n = print_list(head);

						    printf("-> %lu elements\n", n);



						        free(new);

							    return (0);
}
