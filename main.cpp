#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

/*#region Image*/
int main(void)
{
    string path = "resources/test.png";
    Mat img = imread(path);
    imshow("Image", img);
    waitKey(0);
}
/*#endregion*/