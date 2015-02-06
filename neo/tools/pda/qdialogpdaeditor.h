#ifndef QDIALOGPDAEDITOR_H
#define QDIALOGPDAEDITOR_H

#include "qdialogpdaadd.h"

#include <QDialog>

namespace Ui {
class QDialogPDAEditor;
}

class QDialogPDAEditor : public QDialog
{
    Q_OBJECT

public:
    explicit QDialogPDAEditor(QWidget *parent = 0);
    ~QDialogPDAEditor();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_13_clicked();

private:
    Ui::QDialogPDAEditor *ui;
    QDialogPDAAdd *add;


};

#endif // QDIALOGPDAEDITOR_H
