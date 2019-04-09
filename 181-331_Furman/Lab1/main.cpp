#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include "database.h"
#include "listmodel.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    // Подключаемся к базе данных
        DataBase database;
        database.connectToDataBase();
    // Объявляем и инициализируем модель данных
        ListModel *model = new ListModel();

    // Обеспечиваем доступ к модели и классу для работы с базой данных из QML
        engine.rootContext()->setContextProperty("myModel", model);
        engine.rootContext()->setContextProperty("database", &database);

        engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
        return a.exec();
}
