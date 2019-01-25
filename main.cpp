#include "notification.h"
#include "notificationmanager.h"
#include <QApplication>
#include <QScreen>

#include <QThread>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    NotificationManager nm;

    nm.addNotification(std::unique_ptr<Notification>(new Notification("Reminder")));
    nm.addNotification(std::unique_ptr<Notification>(new Notification("Abracadabra")));
    nm.addNotification(std::unique_ptr<Notification>(new Notification("Reminder")));
    nm.addNotification(std::unique_ptr<Notification>(new Notification("Abracadabra")));
    nm.addNotification(std::unique_ptr<Notification>(new Notification("Reminder")));
    nm.addNotification(std::unique_ptr<Notification>(new Notification("Abracadabra")));

    return a.exec();
}
