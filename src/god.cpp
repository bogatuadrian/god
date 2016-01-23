#include <iostream>

static void usage(char *exec)
{
	std::cout << "Usage: " << exec << " " << "binary-file" << std::endl;
}

int main(int argc, char **argv)
{
	if (argc < 2) {
		usage(argv[0]);
		return 1;
	}

	return 0;
}
