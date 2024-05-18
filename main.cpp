#include <iostream>

int main(int argc, char *argv[])
{
	// Check if the correct number of arguments is provided
	if (argc != 7)
	{
		std::cerr << "Usage: " << argv[0] << " -d directory -p port -u password_file\n";
		return 1;
	}
std::string directory, password_file; 
	int port = 0;													
    return 0;
}