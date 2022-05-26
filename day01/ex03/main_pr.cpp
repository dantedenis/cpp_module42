#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

static std::string	panel[11] = {
	"Progress: [..........]",
	"Progress: [*.........]",
	"Progress: [**........]",
	"Progress: [***.......]",
	"Progress: [****......]",
	"Progress: [*****.....]",
	"Progress: [******....]",
	"Progress: [*******...]",
	"Progress: [********..]",
	"Progress: [*********.]",
	"Progress: [**********]",
};

static std::string progress = "|\\-|/";

int main(int argc, char **argv){
	std::stringstream	buf;
	buf << argv[1] << ' ' << argv[2] << ' ' << argv[3];
	int	total, count, per;
	std::string	name_file;
	buf >> count >> total >> name_file;
	per = count * 100 / total;
	std::cout	<< '\r' << std::setfill(' ') << progress[count % 5] << std::left;
	std::cout	<< std::setw(10) << panel[per / 10]
				<< std::right << std::setw(3) << per
				<< std::left << std::setw(2) << "%" << std::setw(50)<< name_file;
	return 0;
}
