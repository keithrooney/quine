#include<stdio.h>
#include<string.h>

int main() {
	char quotation = 34;
	char *program[] = {
		"#include<stdio.h>",
		"#include<string.h>",
		"",
		"int main() {",
		"	char quotation = 34;",
		"	char *program[] = {",
		"		",
		"	};",
		"	int x;",
		"	for(x = 0; x < 6; x++) {",
		"		printf(\"%s\\n\", program[x]);",
		"	}",
		"	for(x = 0; x < sizeof(program)/sizeof(char*); x++) {",
		"		printf(\"%s%c%s%c\\n\", program[6], quotation, program[x], quotation);",
		"	}",
		"	for(x = 7; x < sizeof(program)/sizeof(char*); x++) {",
		"		printf(\"%s\\n\", program[x]);",
		"	}",
		"	return 0;",
		"}"
	};
	int x;
	for(x = 0; x < 6; x++) {
		printf("%s\n", program[x]);
	}
	for(x = 0; x < sizeof(program)/sizeof(char*); x++) {
		printf("%s%c%s%c\n", program[6], quotation, program[x], quotation);
	}
	for(x = 7; x < sizeof(program)/sizeof(char*); x++) {
		printf("%s\n", program[x]);
	}
	return 0;
}
