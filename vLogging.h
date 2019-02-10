#ifndef VLOGGING_H
#define VLOGGING_H

#define LOGSIZE 1024 * 100 //log size in bytes
#define LOGFILES 3

#include <QObject>
#include <QString>
#include <QDebug>
#include <QDate>
#include <QTime>

namespace VLOGGING {
const QString logFolder = "log";
bool initLogging();
void msgHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg);
}

#endif // VLOGGING_H
