#include <stdio.h>
#include <glib.h>

int main(int argc, char *argv[])
{
    GSList *slist = NULL;
	GSList *st;

	gint nums[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	gint i;
	for(i = 0; i < 10; i++) {
	    slist = g_slist_append(slist, &nums[i]);
	}
	g_printf("Begin:\n");

	for(i = 0; i < 10; i++) {
	    st = g_slist_nth(slist, i);
		g_printf("%d,", *((gint *)st->data));
	}
	g_printf("\nDone\n");

	slist = g_slist_reverse(slist);
	g_printf("Begin:\n");

	for(i = 0; i < 10; i++) {
	    st = g_slist_nth(slist, i);
		g_printf("%d,", *((gint *)st->data));
	}
	g_printf("\nDone\n");

	for(i = 0; i< 10; i++) {
	    slist = g_slist_prepend(slist, &nums[i]);
	}
    g_printf("Begin:\n");
	for(i = 0; i < 20; i++) {
	    st = g_slist_nth(slist, i);
		g_printf("%d,", *((gint *)st->data));
	}
	g_printf("\nDone\n");
    
	slist = g_slist_insert(slist, &nums[5], 100);
    g_printf("Begin:\n");
	for(i = 0; i < 21; i++) {
	    st = g_slist_nth(slist, i);
		g_printf("%d,", *((gint *)st->data));
	}
	g_printf("\nDone\n");
	g_slist_free(slist);
}
