#ifndef MODOOPERACION_H
#define MODOOPERACION_H

#include <QWidget>

#include "filemanager.h"

namespace Ui {
    class ModoOperacion;
}

class ModoOperacion : public QWidget{

    Q_OBJECT

    public:
        explicit ModoOperacion(QWidget *parent = nullptr);
        ~ModoOperacion();

    public slots:
        void on_Archivo_clicked();
        void on_pushButton_clicked();

    private:
        Ui::ModoOperacion *ui;
};

#endif // MODOOPERACION_H
