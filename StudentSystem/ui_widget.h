/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QAction *actiondog;
    QTreeView *tdStdent;
    QCheckBox *All;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd;
    QSpacerItem *horizontalSpacer;
    QPushButton *BtnDel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1187, 600);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("accessories-calculator");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        Widget->setWindowIcon(icon);
        actiondog = new QAction(Widget);
        actiondog->setObjectName(QString::fromUtf8("actiondog"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../images/dog.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actiondog->setIcon(icon1);
        tdStdent = new QTreeView(Widget);
        tdStdent->setObjectName(QString::fromUtf8("tdStdent"));
        tdStdent->setGeometry(QRect(50, 70, 1091, 461));
        All = new QCheckBox(Widget);
        All->setObjectName(QString::fromUtf8("All"));
        All->setGeometry(QRect(710, 550, 95, 23));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 20, 231, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnAdd = new QPushButton(layoutWidget);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));

        horizontalLayout->addWidget(btnAdd);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        BtnDel = new QPushButton(layoutWidget);
        BtnDel->setObjectName(QString::fromUtf8("BtnDel"));

        horizontalLayout->addWidget(BtnDel);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237demo", nullptr));
        actiondog->setText(QCoreApplication::translate("Widget", "dog", nullptr));
        All->setText(QCoreApplication::translate("Widget", "\345\205\250\351\200\211", nullptr));
        btnAdd->setText(QCoreApplication::translate("Widget", "\346\267\273\345\212\240", nullptr));
        BtnDel->setText(QCoreApplication::translate("Widget", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
