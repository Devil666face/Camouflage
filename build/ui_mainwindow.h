/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_5;
    QFrame *frame_weapons;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_weapons;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_count;
    QSpinBox *spinBox_count;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget_weapons;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_input;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_input;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_uint;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_weather;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_6;
    QComboBox *comboBox_local;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *comboBox_visual;
    QCheckBox *checkBox_fog;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_7;
    QDoubleSpinBox *doubleSpinBox_wind;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1026, 636);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_5 = new QHBoxLayout(centralwidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        frame_weapons = new QFrame(centralwidget);
        frame_weapons->setObjectName(QString::fromUtf8("frame_weapons"));
        frame_weapons->setFrameShape(QFrame::WinPanel);
        frame_weapons->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_weapons);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_weapons = new QGroupBox(frame_weapons);
        groupBox_weapons->setObjectName(QString::fromUtf8("groupBox_weapons"));
        verticalLayout_6 = new QVBoxLayout(groupBox_weapons);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_count = new QLabel(groupBox_weapons);
        label_count->setObjectName(QString::fromUtf8("label_count"));

        horizontalLayout_2->addWidget(label_count);

        spinBox_count = new QSpinBox(groupBox_weapons);
        spinBox_count->setObjectName(QString::fromUtf8("spinBox_count"));

        horizontalLayout_2->addWidget(spinBox_count);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_6->addLayout(horizontalLayout_2);

        tableWidget_weapons = new QTableWidget(groupBox_weapons);
        if (tableWidget_weapons->columnCount() < 3)
            tableWidget_weapons->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_weapons->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_weapons->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_weapons->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_weapons->setObjectName(QString::fromUtf8("tableWidget_weapons"));

        verticalLayout_6->addWidget(tableWidget_weapons);


        verticalLayout->addWidget(groupBox_weapons);


        horizontalLayout_5->addWidget(frame_weapons);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        frame_input = new QFrame(centralwidget);
        frame_input->setObjectName(QString::fromUtf8("frame_input"));
        frame_input->setMinimumSize(QSize(0, 0));
        frame_input->setMaximumSize(QSize(400, 16777215));
        frame_input->setFrameShape(QFrame::WinPanel);
        frame_input->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_input);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_input = new QGroupBox(frame_input);
        groupBox_input->setObjectName(QString::fromUtf8("groupBox_input"));
        verticalLayout_2 = new QVBoxLayout(groupBox_input);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_uint = new QGroupBox(groupBox_input);
        groupBox_uint->setObjectName(QString::fromUtf8("groupBox_uint"));
        groupBox_uint->setFlat(true);
        gridLayout = new QGridLayout(groupBox_uint);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(groupBox_uint);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(groupBox_uint);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        gridLayout->addWidget(doubleSpinBox, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox_uint);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 2, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(146, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        label_6 = new QLabel(groupBox_uint);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(groupBox_uint);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));

        gridLayout->addWidget(doubleSpinBox_2, 1, 1, 1, 1);

        label_8 = new QLabel(groupBox_uint);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(152, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 3, 1, 2);


        verticalLayout_2->addWidget(groupBox_uint);

        groupBox_weather = new QGroupBox(groupBox_input);
        groupBox_weather->setObjectName(QString::fromUtf8("groupBox_weather"));
        groupBox_weather->setFlat(true);
        groupBox_weather->setCheckable(false);
        gridLayout_2 = new QGridLayout(groupBox_weather);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(groupBox_weather);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(87, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 0, 1, 1, 1);

        comboBox_local = new QComboBox(groupBox_weather);
        comboBox_local->addItem(QString());
        comboBox_local->addItem(QString());
        comboBox_local->addItem(QString());
        comboBox_local->addItem(QString());
        comboBox_local->addItem(QString());
        comboBox_local->addItem(QString());
        comboBox_local->setObjectName(QString::fromUtf8("comboBox_local"));
        comboBox_local->setMaximumSize(QSize(200, 16777215));

        gridLayout_2->addWidget(comboBox_local, 0, 2, 1, 3);

        label = new QLabel(groupBox_weather);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(81, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 1, 1, 1);

        comboBox_visual = new QComboBox(groupBox_weather);
        comboBox_visual->addItem(QString());
        comboBox_visual->addItem(QString());
        comboBox_visual->addItem(QString());
        comboBox_visual->addItem(QString());
        comboBox_visual->addItem(QString());
        comboBox_visual->setObjectName(QString::fromUtf8("comboBox_visual"));
        comboBox_visual->setMaximumSize(QSize(200, 16777215));

        gridLayout_2->addWidget(comboBox_visual, 1, 2, 1, 3);

        checkBox_fog = new QCheckBox(groupBox_weather);
        checkBox_fog->setObjectName(QString::fromUtf8("checkBox_fog"));

        gridLayout_2->addWidget(checkBox_fog, 2, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(471, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 2, 1, 1, 4);

        label_2 = new QLabel(groupBox_weather);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 3, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(81, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 3, 1, 1, 2);

        doubleSpinBox_wind = new QDoubleSpinBox(groupBox_weather);
        doubleSpinBox_wind->setObjectName(QString::fromUtf8("doubleSpinBox_wind"));

        gridLayout_2->addWidget(doubleSpinBox_wind, 3, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(groupBox_weather);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);


        gridLayout_2->addLayout(horizontalLayout, 3, 4, 1, 1);


        verticalLayout_2->addWidget(groupBox_weather);


        verticalLayout_3->addWidget(groupBox_input);


        verticalLayout_4->addWidget(frame_input);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_5->addLayout(verticalLayout_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1026, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\207\320\265\321\202 \321\201\321\200\320\265\320\264\321\201\321\202\320\262 \321\201\320\272\321\200\321\213\321\202\320\270\321\217 \320\264\320\273\321\217 \320\227\320\240\320\224\320\235", nullptr));
        groupBox_weapons->setTitle(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\321\201\321\202\320\262\320\260 \321\201\320\272\321\200\321\213\321\202\320\270\321\217", nullptr));
        label_count->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\200\320\265\320\264\321\201\321\202\320\262 \321\201\320\272\321\200\321\213\321\202\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_weapons->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\320\224\320\270\320\260\320\277\320\260\320\267\320\276\320\275 \321\201\320\272\321\200\321\213\321\202\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_weapons->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\321\201\321\202\320\262\320\276 \321\201\320\272\321\200\321\213\321\202\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_weapons->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\200\320\265\320\264\321\201\321\202\320\262", nullptr));
        groupBox_input->setTitle(QCoreApplication::translate("MainWindow", "\320\230\321\201\321\205\320\276\320\264\320\275\320\260\321\217 \320\276\320\261\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\260", nullptr));
        groupBox_uint->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\277\320\276\320\264\321\200\320\260\320\267\320\264\320\265\320\273\320\265\320\275\320\270\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260 \320\277\320\276\320\267\320\270\321\206\320\270\320\270", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\274", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\250\320\270\321\200\320\270\320\275\320\260 \320\277\320\276\320\267\320\270\321\206\320\270\320\270", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\274", nullptr));
        groupBox_weather->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\201\321\202\320\275\320\276\321\201\321\202\321\214 \320\270 \320\277\320\276\320\263\320\276\320\264\320\275\321\213\320\265 \321\203\321\201\320\273\320\276\320\262\320\270\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\244\320\276\320\275 \320\274\320\265\321\201\321\202\320\275\320\276\321\201\321\202\320\270", nullptr));
        comboBox_local->setItemText(0, QCoreApplication::translate("MainWindow", "\320\233\320\265\321\201", nullptr));
        comboBox_local->setItemText(1, QCoreApplication::translate("MainWindow", "\320\242\321\200\320\260\320\262\320\260", nullptr));
        comboBox_local->setItemText(2, QCoreApplication::translate("MainWindow", "\320\237\320\265\321\201\320\276\320\272", nullptr));
        comboBox_local->setItemText(3, QCoreApplication::translate("MainWindow", "\320\241\320\275\320\265\320\263", nullptr));
        comboBox_local->setItemText(4, QCoreApplication::translate("MainWindow", "\320\223\321\200\321\203\320\275\321\202\320\276\320\262\320\260\321\217 \320\264\320\276\321\200\320\276\320\263\320\260", nullptr));
        comboBox_local->setItemText(5, QCoreApplication::translate("MainWindow", "\320\220\321\201\321\204\320\260\320\273\321\214\321\202\320\276\320\262\320\260\321\217 \320\264\320\276\321\200\320\276\320\263\320\260", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "\320\243\321\201\320\273\320\276\320\262\320\270\321\217 \320\262\320\270\320\264\320\270\320\274\320\276\321\201\321\202\320\270", nullptr));
        comboBox_visual->setItemText(0, QCoreApplication::translate("MainWindow", "\320\235\320\276\321\207\321\214", nullptr));
        comboBox_visual->setItemText(1, QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\265\321\200\320\272\320\270", nullptr));
        comboBox_visual->setItemText(2, QCoreApplication::translate("MainWindow", "\320\237\320\260\321\201\320\274\321\203\321\200\320\275\321\213\320\271 \320\264\320\265\320\275\321\214", nullptr));
        comboBox_visual->setItemText(3, QCoreApplication::translate("MainWindow", "\320\241\320\276\320\273\320\275\320\265\321\207\320\275\321\213\320\271 \320\264\320\265\320\275\321\214", nullptr));
        comboBox_visual->setItemText(4, QCoreApplication::translate("MainWindow", "\320\241\320\276\320\273\320\275\320\265\321\207\320\275\321\213\320\271 \320\264\320\265\320\275\321\214 c \320\270\320\264\320\265\320\260\320\273\321\214\320\275\321\213\320\274\320\270 \321\203\321\201\320\273.", nullptr));

        checkBox_fog->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\273\320\270\321\207\320\270\320\265 \321\202\321\203\320\274\320\260\320\275\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\262\320\265\321\202\321\200\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\274/\321\201", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
