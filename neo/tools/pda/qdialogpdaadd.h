#ifndef QDIALOGPDAADD_H
#define QDIALOGPDAADD_H

#include <QDialog>

namespace Ui {
class QDialogPDAAdd;
}

class QDialogPDAAdd : public QDialog
{
    Q_OBJECT

public:
    explicit QDialogPDAAdd(QWidget *parent = 0);
    ~QDialogPDAAdd();

private:
    Ui::QDialogPDAAdd *ui;
};

#endif // QDIALOGPDAADD_H
