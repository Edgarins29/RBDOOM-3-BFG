#include "qdialogpdaadd.h"
#include "ui_qdialogpdaadd.h"

QDialogPDAAdd::QDialogPDAAdd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QDialogPDAAdd)
{
    ui->setupUi(this);
}

QDialogPDAAdd::~QDialogPDAAdd()
{
    delete ui;
}
