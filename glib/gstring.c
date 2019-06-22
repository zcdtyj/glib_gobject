#include <glib.h>

int main(int argc, char *argv[])
{
    GString *string = g_string_new("Justin");
	g_printf("%s %d %d", string->str, string->len, string->allocated_len);
	g_string_free(string, TRUE);

	
    string = g_string_new_len("Justin", 32);
	g_printf("%s %d %d", string->str, string->len, string->allocated_len);
	g_string_free(string, TRUE);
	return 0;
}
