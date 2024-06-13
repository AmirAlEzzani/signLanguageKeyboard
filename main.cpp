#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>

using namespace cv;
int main() {
    Mat image;
    VideoCapture cam(0);
    namedWindow("camera");

    while (1) {
        cam >> img;
        imshow("camera", img);

        if (waitKey(1) == 27) // esc key
            break;
    }
    cam.release();
    return 0;
}
