#ifndef SERVER_H
#define SERVER_H

#include <QDialog>

QT_BEGIN_NAMESPACE
class QLabel;
class QPushButton;
class QLocalServer;
QT_END_NAMESPACE

class Server : public QDialog
{
    Q_OBJECT

    public:
        explicit Server(QWidget *parent = nullptr);

private slots:
    void sendFortune();
private:
    QLocalServer *server;
    QStringList fortunes;
};

#endif // SERVER_H
