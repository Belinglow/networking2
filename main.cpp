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
for (int i = 1; i < argc; i += 2)
	{														
		std::string arg = argv[i]; x i
		if (arg == "-d")
		{													 
			directory = argv[i + 1]; 
		}
		else if (arg == "-p")
		{																
			port = std::stoi(argv[i + 1]); 
		}
		else if (arg == "-u")
		{															  
			password_file = argv[i + 1]; 
		}
	}








    return 0;
}