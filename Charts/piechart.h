
#ifndef PIECHART_H
#define PIECHART_H

#include <QtQuick/QQuickItem>

class FanShape;

class PieChart : public QQuickItem
{
    Q_OBJECT
    Q_PROPERTY(QQmlListProperty<FanShape> slices READ slices)
    Q_PROPERTY(QString name READ name WRITE setName)
    QML_ELEMENT

public:
    PieChart(QQuickItem *parent = nullptr);

    QString name() const;
    void setName(const QString &name);

    QQmlListProperty<FanShape> slices();

private:
    static void append_slice(QQmlListProperty<FanShape> *list, FanShape *slice);

    QString m_name;
    QList<FanShape *> m_slices;
};

#endif

