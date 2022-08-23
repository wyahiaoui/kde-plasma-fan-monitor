
import QtQuick 2.0
import Charts 1.0

Item {
    width: 300; height: 200

    Rectangle
    {
        id: background
        anchors.fill: parent
        color: "yellow"
    }

    PieChart {
        anchors.centerIn: parent
        width: 120; height: 120
        Rectangle {
            id: ybackground
            anchors.fill: parent
            color: "black"
            width: 100; height: 100
            z: -1
        }
        slices: [
            FanShape {
                anchors.fill: parent
                color: "red"
                fromAngle: 0; angleSpan: 35
            },
            FanShape {
                anchors.fill: parent
                color: "red"
                fromAngle: 60; angleSpan: 35
            },
            FanShape {
                anchors.fill: parent
                color: "red"
                fromAngle: 120; angleSpan: 35
            },
            FanShape {
                anchors.fill: parent
                color: "red"
                fromAngle: 180; angleSpan: 35
            },
            FanShape {
                anchors.fill: parent
                color: "red"
                fromAngle: 240; angleSpan: 35
            },
            FanShape {
                anchors.fill: parent
                color: "red"
                fromAngle: 300; angleSpan: 35
            }
        ]
    }
}

