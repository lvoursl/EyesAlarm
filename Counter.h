#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>
#include <QApplication>
#include <QtGui>
#include <QSystemTrayIcon>

class Counter : public QObject {
    Q_OBJECT

public :
    Counter();
    void initi();
    QSystemTrayIcon trayIcon;
public slots :
    void sh();
    void iconActivated(QSystemTrayIcon::ActivationReason reason);

};

#endif // COUNTER_H
