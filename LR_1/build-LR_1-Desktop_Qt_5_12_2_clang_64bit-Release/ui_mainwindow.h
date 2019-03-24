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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
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
    QSplitter *splitter;
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
    QSpinBox *spinBoxDX;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QSpinBox *spinBoxDY;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QSpinBox *spinBoxDZ;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *transferButton;
    QSpacerItem *horizontalSpacer_9;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_12;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QDoubleSpinBox *spinBoxOX;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QDoubleSpinBox *spinBoxOY;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QDoubleSpinBox *spinBoxOZ;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *rotateButton;
    QSpacerItem *horizontalSpacer_15;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_22;
    QSpacerItem *horizontalSpacer_21;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_13;
    QDoubleSpinBox *spinBoxKX;
    QSpacerItem *horizontalSpacer_22;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_14;
    QDoubleSpinBox *spinBoxKY;
    QSpacerItem *horizontalSpacer_23;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_15;
    QDoubleSpinBox *spinBoxKZ;
    QSpacerItem *horizontalSpacer_24;
    QHBoxLayout *horizontalLayout_23;
    QSpacerItem *horizontalSpacer_25;
    QPushButton *scaleButton;
    QSpacerItem *horizontalSpacer_26;
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

        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(575, 10, 400, 590));
        splitter->setOrientation(Qt::Vertical);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
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

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QFont font1;
        font1.setPointSize(18);
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

        spinBoxDX = new QSpinBox(groupBox_2);
        spinBoxDX->setObjectName(QString::fromUtf8("spinBoxDX"));
        spinBoxDX->setFont(font);
        spinBoxDX->setMaximum(1000);
        spinBoxDX->setSingleStep(10);

        horizontalLayout_4->addWidget(spinBoxDX);


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

        spinBoxDY = new QSpinBox(groupBox_2);
        spinBoxDY->setObjectName(QString::fromUtf8("spinBoxDY"));
        spinBoxDY->setFont(font);
        spinBoxDY->setMaximum(1000);
        spinBoxDY->setSingleStep(10);

        horizontalLayout_7->addWidget(spinBoxDY);


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

        spinBoxDZ = new QSpinBox(groupBox_2);
        spinBoxDZ->setObjectName(QString::fromUtf8("spinBoxDZ"));
        spinBoxDZ->setFont(font);
        spinBoxDZ->setMaximum(1000);
        spinBoxDZ->setSingleStep(10);

        horizontalLayout_8->addWidget(spinBoxDZ);


        horizontalLayout_10->addLayout(horizontalLayout_8);

        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_10 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_10);

        transferButton = new QPushButton(groupBox_2);
        transferButton->setObjectName(QString::fromUtf8("transferButton"));
        transferButton->setFont(font);

        horizontalLayout_9->addWidget(transferButton);

        horizontalSpacer_9 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);


        verticalLayout_2->addLayout(horizontalLayout_9);

        splitter->addWidget(groupBox_2);
        groupBox_3 = new QGroupBox(splitter);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font1);
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_11 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_11);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);

        horizontalLayout_12->addWidget(label_3);

        horizontalSpacer_12 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_12);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font);

        horizontalLayout_5->addWidget(label_4);

        spinBoxOX = new QDoubleSpinBox(groupBox_3);
        spinBoxOX->setObjectName(QString::fromUtf8("spinBoxOX"));
        spinBoxOX->setFont(font);
        spinBoxOX->setDecimals(0);
        spinBoxOX->setMinimum(-360.000000000000000);
        spinBoxOX->setMaximum(360.000000000000000);
        spinBoxOX->setSingleStep(5.000000000000000);

        horizontalLayout_5->addWidget(spinBoxOX);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setFont(font);

        horizontalLayout_5->addWidget(label_9);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setFont(font);

        horizontalLayout_6->addWidget(label_7);

        spinBoxOY = new QDoubleSpinBox(groupBox_3);
        spinBoxOY->setObjectName(QString::fromUtf8("spinBoxOY"));
        spinBoxOY->setFont(font);
        spinBoxOY->setDecimals(0);
        spinBoxOY->setMinimum(-360.000000000000000);
        spinBoxOY->setMaximum(360.000000000000000);
        spinBoxOY->setSingleStep(5.000000000000000);

        horizontalLayout_6->addWidget(spinBoxOY);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setFont(font);

        horizontalLayout_6->addWidget(label_10);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setFont(font);

        horizontalLayout_11->addWidget(label_8);

        spinBoxOZ = new QDoubleSpinBox(groupBox_3);
        spinBoxOZ->setObjectName(QString::fromUtf8("spinBoxOZ"));
        spinBoxOZ->setFont(font);
        spinBoxOZ->setDecimals(0);
        spinBoxOZ->setMinimum(-360.000000000000000);
        spinBoxOZ->setMaximum(360.000000000000000);
        spinBoxOZ->setSingleStep(5.000000000000000);

        horizontalLayout_11->addWidget(spinBoxOZ);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setFont(font);

        horizontalLayout_11->addWidget(label_11);


        verticalLayout_3->addLayout(horizontalLayout_11);


        horizontalLayout_12->addLayout(verticalLayout_3);

        horizontalSpacer_13 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_13);


        verticalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalSpacer_14 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_14);

        rotateButton = new QPushButton(groupBox_3);
        rotateButton->setObjectName(QString::fromUtf8("rotateButton"));
        rotateButton->setFont(font);

        horizontalLayout_14->addWidget(rotateButton);

        horizontalSpacer_15 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_15);


        verticalLayout_4->addLayout(horizontalLayout_14);

        splitter->addWidget(groupBox_3);
        groupBox_4 = new QGroupBox(splitter);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
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

        spinBoxKX = new QDoubleSpinBox(groupBox_4);
        spinBoxKX->setObjectName(QString::fromUtf8("spinBoxKX"));
        spinBoxKX->setFont(font);

        horizontalLayout_19->addWidget(spinBoxKX);


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

        spinBoxKY = new QDoubleSpinBox(groupBox_4);
        spinBoxKY->setObjectName(QString::fromUtf8("spinBoxKY"));
        spinBoxKY->setFont(font);

        horizontalLayout_20->addWidget(spinBoxKY);


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

        spinBoxKZ = new QDoubleSpinBox(groupBox_4);
        spinBoxKZ->setObjectName(QString::fromUtf8("spinBoxKZ"));
        spinBoxKZ->setFont(font);

        horizontalLayout_21->addWidget(spinBoxKZ);


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

        splitter->addWidget(groupBox_4);
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
        cleanButton->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\204\320\260\320\271\320\273\320\260:", nullptr));
        openButton->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        saveButton->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\275\320\276\321\201", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "dx:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "dy:", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "dz:", nullptr));
        transferButton->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\275\320\265\321\201\321\202\320\270", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\320\237\320\276\320\262\320\276\321\200\320\276\321\202", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\222\320\276\320\272\321\200\321\203\320\263:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "OX:", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\320\263\321\200\320\260\320\264\321\203\321\201\320\276\320\262", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "OY:", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\320\263\321\200\320\260\320\264\321\203\321\201\320\276\320\262", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "OZ:", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "\320\263\321\200\320\260\320\264\321\203\321\201\320\276\320\262", nullptr));
        rotateButton->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\262\320\265\321\200\320\275\321\203\321\202\321\214", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "kx:", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "ky:", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "kz:", nullptr));
        scaleButton->setText(QApplication::translate("MainWindow", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
