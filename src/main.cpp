#include <iostream>
#include <opencv2/core/core.hpp>
#include <boost/program_options.hpp>

namespace po = boost::program_options;

int main(int argc, char* argv[]){
    cv::Mat mat = (cv::Mat_<double>(3, 3) << 1, 2, 3, 4, 5, 6, 7, 8, 9);

    po::options_description desc("Allowed options");

	desc.add_options()
		("help,a", "produce help message")
		("greet,b", po::value<std::string>(), "hi")
	;

	po::variables_map vm;
	po::store(po::parse_command_line(argc, argv, desc), vm);
	po::notify(vm);

	if (vm.count("help")) {
		std::cout << desc << std::endl;

		return 0;
	}

    return 0;
}
