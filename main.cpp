#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/objdetect.hpp>
#include<iostream>

using namespace std;
using namespace cv;

void main() {
	VideoCapture video(1);
	CascadeClassifier facedetect;
	Mat img;
	facedetect.load("haarcascade+frontalface_default.xml");

	while (true) {
		vector<Rect> faces;
		facedetect.detectMultiScale(img, faces, 1.3, 5);

		for (int i = 0; i < faces.size(); i++) {
			rectangle(img, faces[i].tl(), faces[i].br(), Scalar(50, 50, 255), 3);
		}

		imshow("Frame", img);
		waitKey(1);
	}
}

