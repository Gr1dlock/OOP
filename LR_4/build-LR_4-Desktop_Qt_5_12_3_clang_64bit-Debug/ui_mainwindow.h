/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QFormLayout *formLayout_7;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QFrame *line;
    QFrame *frame_3;
    QFormLayout *formLayout;
    QLabel *label_2;
    QSpinBox *spinBox;
    QLabel *label_3;
    QSpinBox *spinBox_2;
    QLabel *label_4;
    QSpinBox *spinBox_3;
    QPushButton *pushButton_5;
    QFrame *frame_4;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton_6;
    QDoubleSpinBox *doubleSpinBox_5;
    QDoubleSpinBox *doubleSpinBox_6;
    QDoubleSpinBox *doubleSpinBox_7;
    QFrame *frame_5;
    QFormLayout *formLayout_3;
    QLabel *label_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QDoubleSpinBox *doubleSpinBox_4;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 974);
        MainWindow->setMinimumSize(QSize(1920, 974));
        QFont font;
        font.setPointSize(14);
        MainWindow->setFont(font);
        horizontalLayout = new QHBoxLayout(MainWindow);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame_2 = new QFrame(MainWindow);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMaximumSize(QSize(330, 16777215));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(frame_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(310, 870));
        frame->setMaximumSize(QSize(300, 840));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        formLayout_7 = new QFormLayout(frame);
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_7->setWidget(0, QFormLayout::SpanningRole, label);

        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout_7->setWidget(1, QFormLayout::SpanningRole, comboBox);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout_7->setWidget(2, QFormLayout::SpanningRole, pushButton);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        formLayout_7->setWidget(3, QFormLayout::SpanningRole, pushButton_2);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        formLayout_7->setWidget(4, QFormLayout::SpanningRole, pushButton_3);

        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        formLayout_7->setWidget(5, QFormLayout::SpanningRole, pushButton_4);

        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        formLayout_7->setWidget(6, QFormLayout::SpanningRole, line);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(frame_3);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        spinBox = new QSpinBox(frame_3);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(-1000);
        spinBox->setMaximum(1000);
        spinBox->setSingleStep(0);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBox);

        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        spinBox_2 = new QSpinBox(frame_3);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMinimum(-2000);
        spinBox_2->setMaximum(3000);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinBox_2);

        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        spinBox_3 = new QSpinBox(frame_3);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setMinimum(-3000);
        spinBox_3->setMaximum(3000);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBox_3);

        pushButton_5 = new QPushButton(frame_3);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, pushButton_5);


        formLayout_7->setWidget(7, QFormLayout::LabelRole, frame_3);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        formLayout_2 = new QFormLayout(frame_4);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_5 = new QLabel(frame_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(frame_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(frame_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_7);

        pushButton_6 = new QPushButton(frame_4);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, pushButton_6);

        doubleSpinBox_5 = new QDoubleSpinBox(frame_4);
        doubleSpinBox_5->setObjectName(QString::fromUtf8("doubleSpinBox_5"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_5);

        doubleSpinBox_6 = new QDoubleSpinBox(frame_4);
        doubleSpinBox_6->setObjectName(QString::fromUtf8("doubleSpinBox_6"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_6);

        doubleSpinBox_7 = new QDoubleSpinBox(frame_4);
        doubleSpinBox_7->setObjectName(QString::fromUtf8("doubleSpinBox_7"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, doubleSpinBox_7);


        formLayout_7->setWidget(7, QFormLayout::FieldRole, frame_4);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        formLayout_3 = new QFormLayout(frame_5);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_8 = new QLabel(frame_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_8);

        pushButton_7 = new QPushButton(frame_5);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        formLayout_3->setWidget(1, QFormLayout::SpanningRole, pushButton_7);

        pushButton_8 = new QPushButton(frame_5);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        formLayout_3->setWidget(2, QFormLayout::SpanningRole, pushButton_8);

        pushButton_9 = new QPushButton(frame_5);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        formLayout_3->setWidget(3, QFormLayout::SpanningRole, pushButton_9);

        doubleSpinBox_4 = new QDoubleSpinBox(frame_5);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, doubleSpinBox_4);


        formLayout_7->setWidget(8, QFormLayout::SpanningRole, frame_5);


        verticalLayout->addWidget(frame);


        horizontalLayout->addWidget(frame_2);


        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(addModel()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(addCamera()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow, SLOT(removeObject()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), MainWindow, SLOT(setCamera()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), MainWindow, SLOT(moveObject()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), MainWindow, SLOT(scaleObject()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), MainWindow, SLOT(rotateObjectX()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), MainWindow, SLOT(rotateObjectY()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), MainWindow, SLOT(rotateObjectZ()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\227\320\260\320\277\320\276\320\273\320\275\320\265\320\275\320\270\320\265 \320\276\320\261\320\273\320\260\321\201\321\202\320\265\320\271", nullptr));
        label->setText(QApplication::translate("MainWindow", "Choose object:", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Add model", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Add camera", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Remove object", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Set camera", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "X:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Y:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Z:", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "Move object", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "X:", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Y:", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Z:", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "Scale object", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Angle:", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "Rotate around X", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "Rotate around Y", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "Rotate around Z", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
