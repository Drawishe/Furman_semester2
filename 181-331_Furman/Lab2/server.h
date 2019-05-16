#ifndef TCPSERVER_H

#define TCPSERVER_H

#include <QObject>

#include <QTcpServer>

#include <QTcpSocket>

class Server: public QObject{

    Q_OBJECT

public:

    Server();

public slots:

    void newConnection();

    void readClient();

private:

    QTcpServer *_server;

    QTcpSocket *_socket;

};

#endif // TCPSERVER_H
