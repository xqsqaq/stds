/********************************************************************************
** Form generated from reading UI file 'AddStuInfoDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUINFODIALOG_H
#define UI_ADDSTUINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddStuInfoDialog
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *edid;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *edname;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_9;
    QComboBox *sexbox;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *edphone;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_4;
    QSpinBox *cet4box;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_7;
    QDoubleSpinBox *gpabox;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QDialog *AddStuInfoDialog)
    {
        if (AddStuInfoDialog->objectName().isEmpty())
            AddStuInfoDialog->setObjectName(QString::fromUtf8("AddStuInfoDialog"));
        AddStuInfoDialog->resize(401, 415);
        widget = new QWidget(AddStuInfoDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 360, 271, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        widget1 = new QWidget(AddStuInfoDialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(60, 30, 271, 286));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        edid = new QLineEdit(widget1);
        edid->setObjectName(QString::fromUtf8("edid"));

        horizontalLayout_2->addWidget(edid);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        edname = new QLineEdit(widget1);
        edname->setObjectName(QString::fromUtf8("edname"));

        horizontalLayout_5->addWidget(edname);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_10 = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_6->addWidget(label_3);

        horizontalSpacer_9 = new QSpacerItem(80, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        sexbox = new QComboBox(widget1);
        sexbox->setObjectName(QString::fromUtf8("sexbox"));

        horizontalLayout_6->addWidget(sexbox);

        horizontalSpacer_11 = new QSpacerItem(17, 21, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        edphone = new QLineEdit(widget1);
        edphone->setObjectName(QString::fromUtf8("edphone"));

        horizontalLayout_3->addWidget(edphone);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_5 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        label_6 = new QLabel(widget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);

        horizontalSpacer_4 = new QSpacerItem(50, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        cet4box = new QSpinBox(widget1);
        cet4box->setObjectName(QString::fromUtf8("cet4box"));

        horizontalLayout_7->addWidget(cet4box);

        horizontalSpacer_6 = new QSpacerItem(17, 21, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer_4 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);

        label_7 = new QLabel(widget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);

        horizontalSpacer_7 = new QSpacerItem(50, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        gpabox = new QDoubleSpinBox(widget1);
        gpabox->setObjectName(QString::fromUtf8("gpabox"));

        horizontalLayout_8->addWidget(gpabox);

        horizontalSpacer_8 = new QSpacerItem(17, 21, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_8);


        retranslateUi(AddStuInfoDialog);

        QMetaObject::connectSlotsByName(AddStuInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *AddStuInfoDialog)
    {
        AddStuInfoDialog->setWindowTitle(QCoreApplication::translate("AddStuInfoDialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("AddStuInfoDialog", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddStuInfoDialog", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("AddStuInfoDialog", "\345\255\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("AddStuInfoDialog", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("AddStuInfoDialog", "\346\200\247\345\210\253", nullptr));
        label_4->setText(QCoreApplication::translate("AddStuInfoDialog", "\346\211\213\346\234\272\345\217\267\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("AddStuInfoDialog", "cet4\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("AddStuInfoDialog", "gpa\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddStuInfoDialog: public Ui_AddStuInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUINFODIALOG_H
