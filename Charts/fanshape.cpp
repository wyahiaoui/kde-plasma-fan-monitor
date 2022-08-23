#include "fanshape.h"

#include <QPainter>

FanShape::FanShape(QQuickItem *parent)
    : QQuickPaintedItem(parent)
{
    // this->setFillColor(QColor("yellow"));
    // QPainter painter(this);
    // QPixmap pixmap(128, 128);
    // pixmap.fill(Qt::transparent);
    // QRect r = pixmap.rect();
    // painter.setBrush(QBrush(Qt::yellow));
    // painter.fillRect(r, painter.brush());
}

QColor FanShape::color() const
{
    return m_color;
}

void FanShape::setColor(const QColor &color)
{
    m_color = color;
}

int FanShape::fromAngle() const
{
    return m_fromAngle;
}

void FanShape::setFromAngle(int angle)
{
    m_fromAngle = angle;
}

int FanShape::angleSpan() const
{
    return m_angleSpan;
}

void FanShape::setAngleSpan(int angle)
{
    m_angleSpan = angle;
}

void FanShape::paint(QPainter *painter)
{
    QPen pen(m_color, 2);
    painter->setPen(pen);
    painter->setRenderHints(QPainter::Antialiasing, true);
    // QRect rect( -1 * 150, -1 * 150, 2 * 150, 2 * 150);
    const QRectF rec = boundingRect().adjusted(-1, -1, 2, 2);
    painter->setBrush(QBrush(Qt::blue));
    painter->drawPie(rec, m_fromAngle * 16, m_angleSpan * 16);
    // painter->drawPie( rect, m_fromAngle*16, m_angleSpan*16 );
    
    // double ang_ellipse = atan2(sin(m_fromAngle * M_PI / 180), cos(m_fromAngle * M_PI / 180)) * 180.0 / M_PI;
    // QBrush brush(Qt::blue);
    // painter->setBrush(brush);
    //
    // painter->drawEllipse(25, 0, m_fromAngle, m_angleSpan);
    // painter->fillRect(r, painter->brush());
    // painter->end();
}

