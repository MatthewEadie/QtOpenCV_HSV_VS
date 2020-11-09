#include "QtOpenCV_HSV_VS.h"
#include "ui_QtOpenCV_HSV_VS.h"

//Pushing to GitHub

using namespace cv;
using namespace std;

QtOpenCV_HSV_VS::QtOpenCV_HSV_VS(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    //Default object of lime color for test purposes, uncomment when needed.
    //objects.push_back(setUpObject("lime", 32,72, 105, 205, 18, 167));

    //open capture object at location zero (default location for webcam)
    capture.open(0);
    //set height and width of capture frame
    capture.set(CAP_PROP_FRAME_WIDTH, WIDTH);
    capture.set(CAP_PROP_FRAME_HEIGHT, HEIGHT);

    namedWindow(imageWindow);
    namedWindow(hsvWindow);

    //To avoid windows stacking over each other,
    //these adjustmets could differ with screen sizes.
    moveWindow(imageWindow, 100, 0);
    moveWindow(hsvWindow, 1000, 0);
}

QtOpenCV_HSV_VS::~QtOpenCV_HSV_VS()
{
}

void QtOpenCV_HSV_VS::Start()
{
    while (true) {

        if (breakLoop == true) {
            return;
        }
        H_MIN = ui.hminBox->text().toInt();
        H_MAX = ui.hmaxBox->text().toInt();
        S_MIN = ui.sminBox->text().toInt();
        S_MAX = ui.smaxBox->text().toInt();
        V_MIN = ui.vminBox->text().toInt();
        V_MAX = ui.vmaxBox->text().toInt();


        capture.read(cameraFeed);
        testObject.name = "Default";
        cvtColor(cameraFeed, HSV, COLOR_RGB2HSV);
        inRange(HSV, Scalar(H_MIN, S_MIN, V_MIN), Scalar(H_MAX, S_MAX, V_MAX), testObject.threshold);

        imshow(imageWindow, cameraFeed);
        imshow(hsvWindow, HSV);
        imshow(thresholdWindow, testObject.threshold);


        //delay 30ms so that screen can refresh.
        waitKey(10);
    }
}

void QtOpenCV_HSV_VS::on_defaultButton_clicked() {
    ui.hminBox->setValue(0);
    ui.hmaxBox->setValue(255);
    ui.sminBox->setValue(0);
    ui.smaxBox->setValue(255);
    ui.vminBox->setValue(0);
    ui.vmaxBox->setValue(255);
}