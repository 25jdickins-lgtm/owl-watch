#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    // Loads your owl photo file
    Mat image = imread("owl.png");

    // Check if the image loaded correctly
    if(image.empty()) {
        cout << "Could not open or find the owl image!" << endl;
        return -1;
    }

    // Displays the owl image in a window
    imshow("Owl Window", image);
    waitKey(0);

    return 0;
}
