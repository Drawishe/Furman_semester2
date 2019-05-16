#include "server.h"

#include <QDebug>

#include <QCoreApplication>

//#include <QDateTime>

Server::Server(){

    _server = new QTcpServer(this);

    connect(_server, SIGNAL(newConnection()), this, SLOT(newConnection()));

    if(!_server->listen(QHostAddress::Any, 8080)){

        qDebug() << "server is not started";

    }else{

        qDebug() << "server is started";

    }

}

void Server::newConnection(){

    _socket = _server->nextPendingConnection();

    _socket->write("Hello!\r\n");

    connect(_socket, SIGNAL(readyRead()), this, SLOT(readClient()));

    connect(_socket, SIGNAL(disconnected()), this, SLOT(slotClientDisconnected()));

}

void Server::readClient(){

    while(_socket->bytesAvailable()>0){

        QByteArray array = _socket->readAll();

        _socket->write(array);

    }

    /*QTcpSocket *sk = dynamic_cast<QTcpSocket *>(sender());

    if (!sk->canReadLine())return;

    char buf[1024];

    sk->readLine(buf, sizeof(buf));

    _socket->write(buf);*/

}
