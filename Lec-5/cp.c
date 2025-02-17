#include <stdio.h>
#include <stdint.h>

// Define BYTE as an alias for uint8_t
typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
	// Open the source file in binary read mode
	FILE *src = fopen(argv[1], "rb");
	// Open the destination file in binary write mode
	FILE *dst = fopen(argv[2], "wb");

	// Variable to store each byte read from the source file
	BYTE b;

	// Read from the source file and write to the destination file byte by byte
	while (fread(&b, sizeof(b), 1, src) != 0)
	{
		fwrite(&b, sizeof(b), 1, dst);
	}

	// Close the source file
	fclose(src);
	// Close the destination file
	fclose(dst);
}