
#include "piechart.h"
#include "fanshape.h"

PieChart::PieChart(QQuickItem *parent)
    : QQuickItem(parent)
{
    
}

QString PieChart::name() const
{
    return m_name;
}

void PieChart::setName(const QString &name)
{
    m_name = name;
}

QQmlListProperty<FanShape> PieChart::slices()
{
    return QQmlListProperty<FanShape>(this, nullptr, &PieChart::append_slice, nullptr,
                                      nullptr, nullptr, nullptr, nullptr);
}

void PieChart::append_slice(QQmlListProperty<FanShape> *list, FanShape *slice)
{
    PieChart *chart = qobject_cast<PieChart *>(list->object);
    if (chart) {
        slice->setParentItem(chart);
        chart->m_slices.append(slice);
    }
}
