#include "../inc/header.h"

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b)) {
	if (list) {
		for (t_list *i = list; i; i = i->next) {
			for (t_list *j = list; j->next; j = j->next) {
				if (cmp(i->data, i->next->data)) {
					void *temp = i->data;
					i->data = j->next->data;
					j->next->data = temp;
				}
			}
		}
	}
	return list;
}
