#include "widget.h"

#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Cargar el archivo CSS
    QFile estilos(":/Estilos/styles.css");
    if (estilos.open(QFile::ReadOnly)) {
        QString styleSheet = estilos.readAll();
        a.setStyleSheet(styleSheet);
    } else {
        qDebug() << "Error al cargar el archivo CSS";
    }

    // Colocamos una semilla, para obtener diferentes valores aleatorios
    srand(time(0));

    Widget w;
    w.show();
    return a.exec();
}
