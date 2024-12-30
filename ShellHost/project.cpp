#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    // 创建VideoCapture对象，参数为0表示打开默认摄像头
    VideoCapture cap(0);

    // 检查摄像头是否成功打开
    if (!cap.isOpened())
    {
        cout << "Failed to open camera!" << endl;
        return -1;
    }

    // 创建窗口
    namedWindow("Camera", WINDOW_NORMAL);

    // 循环读取摄像头捕捉到的帧并显示
    while (true)
    {
        // 读取一帧图像
        Mat frame;
        cap.read(frame);

        // 检查是否成功读取到一帧图像
        if (frame.empty())
        {
            cout << "Failed to read frame from camera!" << endl;
            break;
        }

        // 显示图像
        imshow("Camera", frame);

        // 按下q键退出循环
        if (waitKey(1) == 'q')
            break;
    }

    // 释放摄像头资源和所有窗口
    cap.release();
    destroyAllWindows();

    return 0;
}