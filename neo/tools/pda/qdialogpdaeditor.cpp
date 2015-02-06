#include "../../idlib/precompiled.h"
#pragma hdrstop

#include "../../d3xp/Game.h"

#include "qdialogpdaeditor.h"
#include "qdialogpdaadd.h"
#include "ui_qdialogpdaeditor.h"

QDialogPDAEditor::QDialogPDAEditor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QDialogPDAEditor)
{
    ui->setupUi(this);
}

QDialogPDAEditor::~QDialogPDAEditor()
{
    delete ui;
}

void QDialogPDAEditor::on_pushButton_clicked()
{
    //QDialogPDAAdd add;
    //add.setModal(true);
    //add.exec();
    add = new QDialogPDAAdd(this);
    add->show();
    //add.show();
}

void QDialogPDAEditor::on_pushButton_13_clicked()
{

}
