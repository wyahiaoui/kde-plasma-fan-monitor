
#ifndef FANSHAPE_H
#define FANSHAPE_H

#include <QtQuick/QQuickPaintedItem>
#include <QColor>

class FanShape : public QQuickPaintedItem
{
    Q_OBJECT
    Q_PROPERTY(QColor color READ color WRITE setColor)
    Q_PROPERTY(int fromAngle READ fromAngle WRITE setFromAngle)
    Q_PROPERTY(int angleSpan READ angleSpan WRITE setAngleSpan)
    QML_ELEMENT

public:
    FanShape(QQuickItem *parent = nullptr);

    QColor color() const;
    void setColor(const QColor &color);

    int fromAngle() const;
    void setFromAngle(int angle);

    int angleSpan() const;
    void setAngleSpan(int span);

    void paint(QPainter *painter) override;

private:
    QColor m_color;
    int m_fromAngle;
    int m_angleSpan;
};

#endif

