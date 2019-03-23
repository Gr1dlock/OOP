/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_25;
    QHBoxLayout *horizontalLayout_24;
    QSpacerItem *horizontalSpacer_27;
    QPushButton *cleanButton;
    QSpacerItem *horizontalSpacer_28;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *turnButton;
    QSpacerItem *horizontalSpacer_15;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_22;
    QSpacerItem *horizontalSpacer_21;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_13;
    QDoubleSpinBox *doubleSpinBox_3;
    QSpacerItem *horizontalSpacer_22;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_14;
    QDoubleSpinBox *doubleSpinBox_4;
    QSpacerItem *horizontalSpacer_23;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_15;
    QDoubleSpinBox *doubleSpinBox_5;
    QSpacerItem *horizontalSpacer_24;
    QHBoxLayout *horizontalLayout_23;
    QSpacerItem *horizontalSpacer_25;
    QPushButton *scaleButton;
    QSpacerItem *horizontalSpacer_26;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditFile;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *openButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *saveButton;
    QSpacerItem *horizontalSpacer_16;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QSpinBox *spinBox_2;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QSpinBox *spinBox_3;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *transferButton;
    QSpacerItem *horizontalSpacer_9;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 650);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 540, 540));
        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 540, 540, 69));
        groupBox_5->setFlat(true);
        horizontalLayout_25 = new QHBoxLayout(groupBox_5);
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        horizontalSpacer_27 = new QSpacerItem(160, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_27);

        cleanButton = new QPushButton(groupBox_5);
        cleanButton->setObjectName(QString::fromUtf8("cleanButton"));
        QFont font;
        font.setPointSize(15);
        cleanButton->setFont(font);

        horizontalLayout_24->addWidget(cleanButton);

        horizontalSpacer_28 = new QSpacerItem(160, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_28);


        horizontalLayout_25->addLayout(horizontalLayout_24);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(575, 276, 398, 160));
        QFont font1;
        font1.setPointSize(18);
        groupBox_3->setFont(font1);
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer_11 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_11);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        horizontalLayout_11->addWidget(label_7);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        radioButton = new QRadioButton(groupBox_3);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setFont(font);
        radioButton->setChecked(true);

        verticalLayout_4->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox_3);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font);

        verticalLayout_4->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(groupBox_3);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setFont(font);

        verticalLayout_4->addWidget(radioButton_3);


        horizontalLayout_11->addLayout(verticalLayout_4);


        horizontalLayout_13->addLayout(horizontalLayout_11);

        horizontalSpacer_12 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_12);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        horizontalLayout_12->addWidget(label_8);

        doubleSpinBox = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setFont(font);
        doubleSpinBox->setDecimals(0);
        doubleSpinBox->setMinimum(-361.000000000000000);
        doubleSpinBox->setMaximum(360.000000000000000);
        doubleSpinBox->setSingleStep(5.000000000000000);

        horizontalLayout_12->addWidget(doubleSpinBox);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        horizontalLayout_12->addWidget(label_9);


        horizontalLayout_13->addLayout(horizontalLayout_12);

        horizontalSpacer_13 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_13);


        verticalLayout_3->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalSpacer_14 = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_14);

        turnButton = new QPushButton(groupBox_3);
        turnButton->setObjectName(QString::fromUtf8("turnButton"));
        turnButton->setFont(font);

        horizontalLayout_14->addWidget(turnButton);

        horizontalSpacer_15 = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_15);


        verticalLayout_3->addLayout(horizontalLayout_14);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(575, 468, 400, 132));
        groupBox_4->setFont(font1);
        verticalLayout_7 = new QVBoxLayout(groupBox_4);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalSpacer_21 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_21);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        horizontalLayout_19->addWidget(label_13);

        doubleSpinBox_3 = new QDoubleSpinBox(groupBox_4);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setFont(font);

        horizontalLayout_19->addWidget(doubleSpinBox_3);


        horizontalLayout_22->addLayout(horizontalLayout_19);

        horizontalSpacer_22 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_22);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        horizontalLayout_20->addWidget(label_14);

        doubleSpinBox_4 = new QDoubleSpinBox(groupBox_4);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));
        doubleSpinBox_4->setFont(font);

        horizontalLayout_20->addWidget(doubleSpinBox_4);


        horizontalLayout_22->addLayout(horizontalLayout_20);

        horizontalSpacer_23 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_23);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);

        horizontalLayout_21->addWidget(label_15);

        doubleSpinBox_5 = new QDoubleSpinBox(groupBox_4);
        doubleSpinBox_5->setObjectName(QString::fromUtf8("doubleSpinBox_5"));
        doubleSpinBox_5->setFont(font);

        horizontalLayout_21->addWidget(doubleSpinBox_5);


        horizontalLayout_22->addLayout(horizontalLayout_21);

        horizontalSpacer_24 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_24);


        verticalLayout_7->addLayout(horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalSpacer_25 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_25);

        scaleButton = new QPushButton(groupBox_4);
        scaleButton->setObjectName(QString::fromUtf8("scaleButton"));
        scaleButton->setFont(font);

        horizontalLayout_23->addWidget(scaleButton);

        horizontalSpacer_26 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_26);


        verticalLayout_7->addLayout(horizontalLayout_23);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(575, 10, 400, 125));
        groupBox->setFlat(true);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEditFile = new QLineEdit(groupBox);
        lineEditFile->setObjectName(QString::fromUtf8("lineEditFile"));
        lineEditFile->setFont(font);

        horizontalLayout->addWidget(lineEditFile);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        openButton = new QPushButton(groupBox);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        openButton->setFont(font);

        horizontalLayout_2->addWidget(openButton);

        horizontalSpacer_4 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        saveButton = new QPushButton(groupBox);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setFont(font);

        horizontalLayout_2->addWidget(saveButton);

        horizontalSpacer_16 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_16);


        verticalLayout->addLayout(horizontalLayout_2);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(575, 139, 400, 133));
        groupBox_2->setFont(font1);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_4->addWidget(label_2);

        spinBox = new QSpinBox(groupBox_2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setFont(font);
        spinBox->setMaximum(1000);
        spinBox->setSingleStep(10);

        horizontalLayout_4->addWidget(spinBox);


        horizontalLayout_10->addLayout(horizontalLayout_4);

        horizontalSpacer_6 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        horizontalLayout_7->addWidget(label_5);

        spinBox_2 = new QSpinBox(groupBox_2);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setFont(font);
        spinBox_2->setMaximum(1000);
        spinBox_2->setSingleStep(10);

        horizontalLayout_7->addWidget(spinBox_2);


        horizontalLayout_10->addLayout(horizontalLayout_7);

        horizontalSpacer_7 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        horizontalLayout_8->addWidget(label_6);

        spinBox_3 = new QSpinBox(groupBox_2);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setFont(font);
        spinBox_3->setMaximum(1000);
        spinBox_3->setSingleStep(10);

        horizontalLayout_8->addWidget(spinBox_3);


        horizontalLayout_10->addLayout(horizontalLayout_8);

        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_10 = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_10);

        transferButton = new QPushButton(groupBox_2);
        transferButton->setObjectName(QString::fromUtf8("transferButton"));
        transferButton->setFont(font);

        horizontalLayout_9->addWidget(transferButton);

        horizontalSpacer_9 = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);


        verticalLayout_2->addLayout(horizontalLayout_9);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_5->setTitle(QString());
        cleanButton->setText(QApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\320\237\320\276\320\262\320\276\321\200\320\276\321\202", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\320\222\320\276\320\272\321\200\321\203\320\263:", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "OX", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "OY", nullptr));
        radioButton_3->setText(QApplication::translate("MainWindow", "OZ", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\320\243\320\263\320\276\320\273:", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\320\263\321\200\320\260\320\264\321\203\321\201\320\276\320\262", nullptr));
        turnButton->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\262\320\265\321\200\320\275\321\203\321\202\321\214", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "kx:", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "ky:", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "kz:", nullptr));
        scaleButton->setText(QApplication::translate("MainWindow", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\204\320\260\320\271\320\273\320\260:", nullptr));
        openButton->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        saveButton->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\275\320\276\321\201", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "dx:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "dy:", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "dz:", nullptr));
        transferButton->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\275\320\265\321\201\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
