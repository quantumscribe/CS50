#include <stdio.h>
#include <stdint.h>

typedef unint8_t BYTE;

int main(int argc, char *argv[])
{
	FILE *src = fopen(rgv[1] "rb");
	FILE *dst = fopen(argv[2], "wb");

	BYTE b;

	while (fread(&b, sizeof(b), 1, src) != 0)
	{
		fwrite(&b, sizeof(b), 1, dst);
	}

	fclose(src);
	fclose(dst);
}