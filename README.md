#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    // 1. Load your owl image file
    Mat original_image = imread("Screenshot 2026-10-17 12.06.32 PM.png");

    if (original_image.empty()) {
        cout << "Could not open or find the owl image file!" << endl;
        return -1;
    }

    // 2. Create an empty 500x500 equal square canvas
    Mat square_image;
    Size equal_size(500, 500);

    // 3. Force the owl image into a perfect equal box layout
    resize(original_image, square_image, equal_size, 0, 0, INTER_LINEAR);

    // 4. Show the clean equal box output
    imshow("Owl Watch Game Window", square_image);
    waitKey(0);

    return 0;
}
