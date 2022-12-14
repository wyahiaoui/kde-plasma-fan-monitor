TARGET = chapter6-plugins
QT += qml quick

# Ensure that the application will see the import path for the Charts module:
#   * On Windows, do not build into a debug/release subdirectory.
#   * On macOS, add the plugin files into the bundle, only in a shared build though
win32: DESTDIR = ./
macos:!qtConfig(static) {
    charts.files = $$OUT_PWD/Charts
    charts.path = Contents/PlugIns
    QMAKE_BUNDLE_DATA += charts
}

SOURCES += main.cpp
RESOURCES += app.qrc

target.path = $$[QT_INSTALL_EXAMPLES]/qml/tutorials/extending-qml/chapter6-plugins
INSTALLS += target
