#include "widget.h"

#include <QFile>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile archivocss(":/src/stylesheet/stylesheet.css");
    if (archivocss.open(QFile::ReadOnly)){
        QString Estilos = archivocss.readAll();
        a.setStyleSheet(Estilos);
    } else {
        qDebug() << "Error al cargar el archivo CSS";
    }

    Widget w;
    w.show();
    return a.exec();
}
