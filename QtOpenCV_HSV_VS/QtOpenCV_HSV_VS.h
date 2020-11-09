#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtOpenCV_HSV_VS.h"
#include <opencv2/opencv.hpp>

class QtOpenCV_HSV_VS : public QMainWindow
{
    Q_OBJECT

public:
    QtOpenCV_HSV_VS(QWidget *parent = Q_NULLPTR);
    void Start();
    ~QtOpenCV_HSV_VS();

private slots:
    void on_defaultButton_clicked();

private:
    Ui::QtOpenCV_HSV_VSClass ui;

    //Variables to hold HSV values. (HSV = HUE, SATURATION and VALUE)
    int H_MIN, H_MAX, S_MIN, S_MAX, V_MIN, V_MAX;
    // Area and Sides of Threshold Contour
    double area;
    double sideLength;
    //capture frame width and height
    const int WIDTH = 640;
    const int HEIGHT = 480;

    //names that appear at the top of each window
    const std::string imageWindow = "Original Image";
    const std::string hsvWindow = "HSV Image";
    const std::string thresholdWindow = "Thresholded Image";
    bool breakLoop = false;

    //Matrix to store each frame of the webcam feed
    cv::Mat cameraFeed;
    //matrix storage for HSV image
    cv::Mat HSV;
    int x = 0, y = 0;
    cv::VideoCapture capture;

    //Struct to define the attributes of the objects to be tracked.
    typedef struct {
        std::string name;
        int x;
        int y;
        int H_MIN = H_MIN;
        int H_MAX = H_MAX;
        int S_MIN = S_MIN;
        int S_MAX = S_MAX;
        int V_MIN = V_MIN;
        int V_MAX = V_MAX;
        cv::Mat threshold;
    }item;

    // Dynamic object who's attributes (specifically HSV) can be changed in real time.
    item testObject;
};
