#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

int main(){

    cv::Mat img = cv::imread("C:\\Users\\RajeshPachaikani\\Documents\\Programming\\opencv-tut-cmake\\img\\tiger.jpg");
    cv::imshow("IMAGE",img);
    cv::waitKey(0);
    return 0;
}
