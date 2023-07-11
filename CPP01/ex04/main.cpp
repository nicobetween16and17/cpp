#include "sed.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout<<"Bad format, try ./exe <file> <toreplace> <replacement>";
		return (1);
	}
	std::string filename(av[1]);
	std::string search(av[2]);
	std::string replace(av[3]);
	std::string line;
	std::ifstream file(filename);
	if (!file.is_open())
	{
		std::cout<<"No such filename";
		return (1);
	}

	std::string output;
	while (std::getline(file, line))
	{
		std::size_t len = 0;
		while ((len = line.find(search)) != std::string::npos)
		{
			line.erase(len, search.length());
			line.insert(len, replace);
		}
		output.append(line);
		output.append("\n");
	}
	file.close();
	std::ofstream file_mod(filename + std::string(".replace"));
	file_mod << output;
	file_mod.close();
	return (0);
}