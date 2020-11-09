/********************************************************************************
** Form generated from reading UI file 'QtOpenCV_HSV_VS.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTOPENCV_HSV_VS_H
#define UI_QTOPENCV_HSV_VS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtOpenCV_HSV_VSClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QPushButton *defaultButton;
    QLabel *label_3;
    QSlider *H_Min_Slider;
    QSpinBox *hminBox;
    QLabel *label_4;
    QSlider *H_Max_Slider;
    QSpinBox *hmaxBox;
    QLabel *label;
    QSlider *S_Min_Slider;
    QSpinBox *sminBox;
    QLabel *label_2;
    QSlider *S_Max_Slider;
    QSpinBox *smaxBox;
    QLabel *label_5;
    QSlider *V_Min_Slider;
    QSpinBox *vminBox;
    QLabel *label_6;
    QSlider *V_Max_Slider;
    QSpinBox *vmaxBox;

    void setupUi(QMainWindow *QtOpenCV_HSV_VSClass)
    {
        if (QtOpenCV_HSV_VSClass->objectName().isEmpty())
            QtOpenCV_HSV_VSClass->setObjectName(QString::fromUtf8("QtOpenCV_HSV_VSClass"));
        QtOpenCV_HSV_VSClass->resize(548, 323);
        centralWidget = new QWidget(QtOpenCV_HSV_VSClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        defaultButton = new QPushButton(centralWidget);
        defaultButton->setObjectName(QString::fromUtf8("defaultButton"));

        gridLayout->addWidget(defaultButton, 0, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        H_Min_Slider = new QSlider(centralWidget);
        H_Min_Slider->setObjectName(QString::fromUtf8("H_Min_Slider"));
        H_Min_Slider->setMaximum(255);
        H_Min_Slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(H_Min_Slider, 2, 0, 1, 1);

        hminBox = new QSpinBox(centralWidget);
        hminBox->setObjectName(QString::fromUtf8("hminBox"));
        hminBox->setMaximum(255);

        gridLayout->addWidget(hminBox, 2, 1, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        H_Max_Slider = new QSlider(centralWidget);
        H_Max_Slider->setObjectName(QString::fromUtf8("H_Max_Slider"));
        H_Max_Slider->setMaximum(255);
        H_Max_Slider->setValue(255);
        H_Max_Slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(H_Max_Slider, 4, 0, 1, 1);

        hmaxBox = new QSpinBox(centralWidget);
        hmaxBox->setObjectName(QString::fromUtf8("hmaxBox"));
        hmaxBox->setMaximum(255);
        hmaxBox->setValue(255);

        gridLayout->addWidget(hmaxBox, 4, 1, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 5, 0, 1, 1);

        S_Min_Slider = new QSlider(centralWidget);
        S_Min_Slider->setObjectName(QString::fromUtf8("S_Min_Slider"));
        S_Min_Slider->setMaximum(255);
        S_Min_Slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(S_Min_Slider, 6, 0, 1, 1);

        sminBox = new QSpinBox(centralWidget);
        sminBox->setObjectName(QString::fromUtf8("sminBox"));
        sminBox->setMaximum(255);

        gridLayout->addWidget(sminBox, 6, 1, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 7, 0, 1, 1);

        S_Max_Slider = new QSlider(centralWidget);
        S_Max_Slider->setObjectName(QString::fromUtf8("S_Max_Slider"));
        S_Max_Slider->setMaximum(255);
        S_Max_Slider->setValue(255);
        S_Max_Slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(S_Max_Slider, 8, 0, 1, 1);

        smaxBox = new QSpinBox(centralWidget);
        smaxBox->setObjectName(QString::fromUtf8("smaxBox"));
        smaxBox->setMaximum(255);
        smaxBox->setValue(255);

        gridLayout->addWidget(smaxBox, 8, 1, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 9, 0, 1, 1);

        V_Min_Slider = new QSlider(centralWidget);
        V_Min_Slider->setObjectName(QString::fromUtf8("V_Min_Slider"));
        V_Min_Slider->setMaximum(255);
        V_Min_Slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(V_Min_Slider, 10, 0, 1, 1);

        vminBox = new QSpinBox(centralWidget);
        vminBox->setObjectName(QString::fromUtf8("vminBox"));
        vminBox->setMaximum(255);

        gridLayout->addWidget(vminBox, 10, 1, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 11, 0, 1, 1);

        V_Max_Slider = new QSlider(centralWidget);
        V_Max_Slider->setObjectName(QString::fromUtf8("V_Max_Slider"));
        V_Max_Slider->setMaximum(255);
        V_Max_Slider->setValue(255);
        V_Max_Slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(V_Max_Slider, 12, 0, 1, 1);

        vmaxBox = new QSpinBox(centralWidget);
        vmaxBox->setObjectName(QString::fromUtf8("vmaxBox"));
        vmaxBox->setMaximum(255);
        vmaxBox->setValue(255);

        gridLayout->addWidget(vmaxBox, 12, 1, 1, 1);

        QtOpenCV_HSV_VSClass->setCentralWidget(centralWidget);

        retranslateUi(QtOpenCV_HSV_VSClass);
        QObject::connect(vminBox, SIGNAL(valueChanged(int)), V_Min_Slider, SLOT(setValue(int)));
        QObject::connect(vmaxBox, SIGNAL(valueChanged(int)), V_Max_Slider, SLOT(setValue(int)));
        QObject::connect(sminBox, SIGNAL(valueChanged(int)), S_Min_Slider, SLOT(setValue(int)));
        QObject::connect(smaxBox, SIGNAL(valueChanged(int)), S_Max_Slider, SLOT(setValue(int)));
        QObject::connect(hminBox, SIGNAL(valueChanged(int)), H_Min_Slider, SLOT(setValue(int)));
        QObject::connect(hmaxBox, SIGNAL(valueChanged(int)), H_Max_Slider, SLOT(setValue(int)));
        QObject::connect(V_Min_Slider, SIGNAL(valueChanged(int)), vminBox, SLOT(setValue(int)));
        QObject::connect(V_Max_Slider, SIGNAL(valueChanged(int)), vmaxBox, SLOT(setValue(int)));
        QObject::connect(S_Min_Slider, SIGNAL(valueChanged(int)), sminBox, SLOT(setValue(int)));
        QObject::connect(S_Max_Slider, SIGNAL(valueChanged(int)), smaxBox, SLOT(setValue(int)));
        QObject::connect(H_Min_Slider, SIGNAL(valueChanged(int)), hminBox, SLOT(setValue(int)));
        QObject::connect(H_Max_Slider, SIGNAL(valueChanged(int)), hmaxBox, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(QtOpenCV_HSV_VSClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtOpenCV_HSV_VSClass)
    {
        QtOpenCV_HSV_VSClass->setWindowTitle(QCoreApplication::translate("QtOpenCV_HSV_VSClass", "QtOpenCV_HSV_VS", nullptr));
        label_7->setText(QCoreApplication::translate("QtOpenCV_HSV_VSClass", "Adjust the HSV range until the target object is the only part of the image isolated in white.", nullptr));
        defaultButton->setText(QCoreApplication::translate("QtOpenCV_HSV_VSClass", " Default Settings ", nullptr));
        label_3->setText(QCoreApplication::translate("QtOpenCV_HSV_VSClass", "H_MIN", nullptr));
        label_4->setText(QCoreApplication::translate("QtOpenCV_HSV_VSClass", "H_MAX", nullptr));
        label->setText(QCoreApplication::translate("QtOpenCV_HSV_VSClass", "S_MIN", nullptr));
        label_2->setText(QCoreApplication::translate("QtOpenCV_HSV_VSClass", "S_MAX", nullptr));
        label_5->setText(QCoreApplication::translate("QtOpenCV_HSV_VSClass", "V_MIN", nullptr));
        label_6->setText(QCoreApplication::translate("QtOpenCV_HSV_VSClass", "V_MAX", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtOpenCV_HSV_VSClass: public Ui_QtOpenCV_HSV_VSClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTOPENCV_HSV_VS_H
