#include<iostream>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int h_max_value = 0, h_min_value = 0;
int s_max_value = 0, s_min_value = 0;
int v_max_value = 0, v_min_value = 0;

int main()
{
	Mat test_01 = imread("O:\\RM.png");

	namedWindow("hsv����", WINDOW_AUTOSIZE);
	namedWindow("ԭͼ", WINDOW_AUTOSIZE);

	//����������
	createTrackbar("h-max", "hsv����", &h_max_value, 180,0);
	createTrackbar("h-min", "hsv����", &h_max_value, 180,0);
	createTrackbar("s-max", "hsv����", &h_max_value, 255,0);
	createTrackbar("s-min", "hsv����", &h_max_value, 255,0);
	createTrackbar("v-max", "hsv����", &h_max_value, 255,0);
	createTrackbar("v-min", "hsv����", &h_max_value, 255,0);

	imshow("ԭͼ", test_01);
	imshow("hsv����", test_01);

	waitKey(0);
	return 0;
}