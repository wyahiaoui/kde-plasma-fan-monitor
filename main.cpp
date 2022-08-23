
#include <QtQuick/QQuickView>
#include <QGuiApplication>
#include <QQmlEngine>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
//![0]
    QQuickView view;
#ifdef Q_OS_OSX
    view.engine()->addImportPath(app.applicationDirPath() + "/../PlugIns");
#endif
//![0]
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.setSource(QUrl("qrc:///app.qml"));
    view.show();
    return app.exec();
}
