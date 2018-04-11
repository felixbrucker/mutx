/********************************************************************************
** Form generated from reading UI file 'zmutxcontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZMUTXCONTROLDIALOG_H
#define UI_ZMUTXCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_zMutxControlDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelzMutx;
    QLabel *labelzMutx_int;
    QPushButton *pushButtonAll;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *zMutxControlDialog)
    {
        if (zMutxControlDialog->objectName().isEmpty())
            zMutxControlDialog->setObjectName(QStringLiteral("zMutxControlDialog"));
        zMutxControlDialog->resize(681, 384);
        zMutxControlDialog->setMinimumSize(QSize(681, 384));
        gridLayout = new QGridLayout(zMutxControlDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelQuantity = new QLabel(zMutxControlDialog);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(zMutxControlDialog);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelzMutx = new QLabel(zMutxControlDialog);
        labelzMutx->setObjectName(QStringLiteral("labelzMutx"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelzMutx);

        labelzMutx_int = new QLabel(zMutxControlDialog);
        labelzMutx_int->setObjectName(QStringLiteral("labelzMutx_int"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelzMutx_int);

        pushButtonAll = new QPushButton(zMutxControlDialog);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButtonAll);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(zMutxControlDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(3, QStringLiteral("Confirmations"));
        __qtreewidgetitem->setText(2, QStringLiteral("zMutx Public ID"));
        __qtreewidgetitem->setText(1, QStringLiteral("Denomination"));
        __qtreewidgetitem->setText(0, QStringLiteral("Select"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(0, 250));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSortingEnabled(true);
        treeWidget->setColumnCount(5);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(zMutxControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(zMutxControlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), zMutxControlDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), zMutxControlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(zMutxControlDialog);
    } // setupUi

    void retranslateUi(QDialog *zMutxControlDialog)
    {
        zMutxControlDialog->setWindowTitle(QApplication::translate("zMutxControlDialog", "Select zMutx to Spend", nullptr));
        labelQuantity->setText(QApplication::translate("zMutxControlDialog", "Quantity", nullptr));
        labelQuantity_int->setText(QApplication::translate("zMutxControlDialog", "0", nullptr));
        labelzMutx->setText(QApplication::translate("zMutxControlDialog", "zMutx", nullptr));
        labelzMutx_int->setText(QApplication::translate("zMutxControlDialog", "0", nullptr));
        pushButtonAll->setText(QApplication::translate("zMutxControlDialog", "Select/Deselect All", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("zMutxControlDialog", "Is Spendable", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zMutxControlDialog: public Ui_zMutxControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZMUTXCONTROLDIALOG_H
