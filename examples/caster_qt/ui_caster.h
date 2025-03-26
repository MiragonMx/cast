/********************************************************************************
** Form generated from reading UI file 'caster.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASTER_H
#define UI_CASTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Caster
{
public:
    QWidget *_central;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *image;
    QSpacerItem *verticalSpacer;
    QGridLayout *_inputs;
    QLineEdit *port;
    QLabel *_rawdata;
    QPushButton *shallower;
    QLabel *label_4;
    QLabel *label_3;
    QPushButton *clearScreen;
    QLabel *swRevMatch;
    QLabel *_ip;
    QLineEdit *ip;
    QLabel *label_2;
    QPushButton *captureImage;
    QPushButton *deeper;
    QPushButton *freeze;
    QLineEdit *labelText;
    QLabel *_port;
    QPushButton *addLabel;
    QPushButton *addTrace;
    QPushButton *connect;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *request;
    QPushButton *download;
    QProgressBar *progress;
    QCheckBox *lzo;
    QStatusBar *status;

    void setupUi(QMainWindow *Caster)
    {
        if (Caster->objectName().isEmpty())
            Caster->setObjectName("Caster");
        Caster->resize(544, 436);
        _central = new QWidget(Caster);
        _central->setObjectName("_central");
        verticalLayout = new QVBoxLayout(_central);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        image = new QVBoxLayout();
        image->setSpacing(6);
        image->setObjectName("image");

        verticalLayout->addLayout(image);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        _inputs = new QGridLayout();
        _inputs->setSpacing(6);
        _inputs->setObjectName("_inputs");
        port = new QLineEdit(_central);
        port->setObjectName("port");

        _inputs->addWidget(port, 1, 1, 1, 1);

        _rawdata = new QLabel(_central);
        _rawdata->setObjectName("_rawdata");

        _inputs->addWidget(_rawdata, 7, 0, 1, 1);

        shallower = new QPushButton(_central);
        shallower->setObjectName("shallower");
        shallower->setEnabled(false);

        _inputs->addWidget(shallower, 0, 3, 1, 1);

        label_4 = new QLabel(_central);
        label_4->setObjectName("label_4");
        label_4->setFrameShape(QFrame::StyledPanel);

        _inputs->addWidget(label_4, 5, 1, 1, 1);

        label_3 = new QLabel(_central);
        label_3->setObjectName("label_3");

        _inputs->addWidget(label_3, 5, 0, 1, 1);

        clearScreen = new QPushButton(_central);
        clearScreen->setObjectName("clearScreen");

        _inputs->addWidget(clearScreen, 5, 3, 1, 1);

        swRevMatch = new QLabel(_central);
        swRevMatch->setObjectName("swRevMatch");
        swRevMatch->setFrameShape(QFrame::StyledPanel);

        _inputs->addWidget(swRevMatch, 2, 1, 1, 1);

        _ip = new QLabel(_central);
        _ip->setObjectName("_ip");

        _inputs->addWidget(_ip, 0, 0, 1, 1);

        ip = new QLineEdit(_central);
        ip->setObjectName("ip");

        _inputs->addWidget(ip, 0, 1, 1, 1);

        label_2 = new QLabel(_central);
        label_2->setObjectName("label_2");

        _inputs->addWidget(label_2, 4, 0, 1, 1);

        captureImage = new QPushButton(_central);
        captureImage->setObjectName("captureImage");
        captureImage->setEnabled(false);

        _inputs->addWidget(captureImage, 4, 3, 1, 1);

        deeper = new QPushButton(_central);
        deeper->setObjectName("deeper");
        deeper->setEnabled(false);

        _inputs->addWidget(deeper, 1, 3, 1, 1);

        freeze = new QPushButton(_central);
        freeze->setObjectName("freeze");
        freeze->setEnabled(false);

        _inputs->addWidget(freeze, 1, 2, 1, 1);

        labelText = new QLineEdit(_central);
        labelText->setObjectName("labelText");

        _inputs->addWidget(labelText, 4, 1, 1, 1);

        _port = new QLabel(_central);
        _port->setObjectName("_port");

        _inputs->addWidget(_port, 1, 0, 1, 1);

        addLabel = new QPushButton(_central);
        addLabel->setObjectName("addLabel");
        addLabel->setEnabled(false);

        _inputs->addWidget(addLabel, 4, 2, 1, 1);

        addTrace = new QPushButton(_central);
        addTrace->setObjectName("addTrace");

        _inputs->addWidget(addTrace, 5, 2, 1, 1);

        connect = new QPushButton(_central);
        connect->setObjectName("connect");

        _inputs->addWidget(connect, 0, 2, 1, 1);

        label = new QLabel(_central);
        label->setObjectName("label");

        _inputs->addWidget(label, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        request = new QPushButton(_central);
        request->setObjectName("request");
        request->setEnabled(false);

        horizontalLayout->addWidget(request);

        download = new QPushButton(_central);
        download->setObjectName("download");
        download->setEnabled(false);

        horizontalLayout->addWidget(download);


        _inputs->addLayout(horizontalLayout, 7, 1, 1, 1);

        progress = new QProgressBar(_central);
        progress->setObjectName("progress");
        progress->setValue(0);

        _inputs->addWidget(progress, 7, 2, 1, 2);

        lzo = new QCheckBox(_central);
        lzo->setObjectName("lzo");
        lzo->setChecked(true);

        _inputs->addWidget(lzo, 8, 1, 1, 1);


        verticalLayout->addLayout(_inputs);

        Caster->setCentralWidget(_central);
        status = new QStatusBar(Caster);
        status->setObjectName("status");
        Caster->setStatusBar(status);
        QWidget::setTabOrder(ip, port);

        retranslateUi(Caster);
        QObject::connect(connect, SIGNAL(clicked()), Caster, SLOT(onConnect()));
        QObject::connect(request, SIGNAL(clicked()), Caster, SLOT(onRequest()));
        QObject::connect(download, SIGNAL(clicked()), Caster, SLOT(onDownload()));
        QObject::connect(freeze, SIGNAL(clicked()), Caster, SLOT(onFreeze()));
        QObject::connect(shallower, SIGNAL(clicked()), Caster, SLOT(onShallower()));
        QObject::connect(deeper, SIGNAL(clicked()), Caster, SLOT(onDeeper()));
        QObject::connect(addLabel, SIGNAL(clicked()), Caster, SLOT(onAddLabel()));
        QObject::connect(addTrace, SIGNAL(clicked()), Caster, SLOT(onAddTrace()));
        QObject::connect(captureImage, SIGNAL(clicked()), Caster, SLOT(onCaptureImage()));
        QObject::connect(clearScreen, SIGNAL(clicked()), Caster, SLOT(onClearScreen()));

        QMetaObject::connectSlotsByName(Caster);
    } // setupUi

    void retranslateUi(QMainWindow *Caster)
    {
        Caster->setWindowTitle(QCoreApplication::translate("Caster", "Caster", nullptr));
        port->setInputMask(QCoreApplication::translate("Caster", "#####", nullptr));
        port->setText(QCoreApplication::translate("Caster", "5828", nullptr));
        _rawdata->setText(QCoreApplication::translate("Caster", "Raw Data", nullptr));
        shallower->setText(QCoreApplication::translate("Caster", "Shallower", nullptr));
        label_4->setText(QCoreApplication::translate("Caster", "Use right mouse button to draw", nullptr));
        label_3->setText(QCoreApplication::translate("Caster", "Overlay", nullptr));
        clearScreen->setText(QCoreApplication::translate("Caster", "Clear Screen", nullptr));
        swRevMatch->setText(QString());
        _ip->setText(QCoreApplication::translate("Caster", "IP Address", nullptr));
        ip->setInputMask(QCoreApplication::translate("Caster", "000.000.000.000", nullptr));
        ip->setText(QCoreApplication::translate("Caster", "192.168.1.1", nullptr));
        label_2->setText(QCoreApplication::translate("Caster", "Text", nullptr));
        captureImage->setText(QCoreApplication::translate("Caster", "Capture Image", nullptr));
        deeper->setText(QCoreApplication::translate("Caster", "Deeper", nullptr));
        freeze->setText(QCoreApplication::translate("Caster", "Freeze", nullptr));
        _port->setText(QCoreApplication::translate("Caster", "Port", nullptr));
        addLabel->setText(QCoreApplication::translate("Caster", "Add Label", nullptr));
        addTrace->setText(QCoreApplication::translate("Caster", "Add Trace", nullptr));
        connect->setText(QCoreApplication::translate("Caster", "Connect", nullptr));
        label->setText(QCoreApplication::translate("Caster", "SW Revision", nullptr));
        request->setText(QCoreApplication::translate("Caster", "Request", nullptr));
        download->setText(QCoreApplication::translate("Caster", "Download...", nullptr));
        lzo->setText(QCoreApplication::translate("Caster", "Use LZO Compression", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Caster: public Ui_Caster {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASTER_H
