#include <opencv2/core/core.hpp>
#include <iostream>

int main(){
    std::cout << "hello world!" << std::endl;

    cv::Mat mat = (cv::Mat_<double>(3, 3) << 1, 2, 3, 4, 5, 6, 7, 8, 9);

    return 0;
}
