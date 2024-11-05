#include "widget.h"

#include <QFile>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Cargar el archivo CSS
    QFile archivo(":/Estilos/styles.css");
    if (archivo.open(QFile::ReadOnly)) {
        QString estilos = archivo.readAll();
        a.setStyleSheet(estilos);
    } else {
        qDebug() << "Error al cargar el archivo CSS";
    }

    Widget w;
    w.show();
    return a.exec();
}
