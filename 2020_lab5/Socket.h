//
// Created by fruggeri on 7/9/20.
//

#pragma once

#include <netinet/in.h>
#include <string>
#include <optional>

class Socket {
    int socket_fd;
    struct sockaddr_in remote_address;
    socklen_t remote_address_len;

    Socket(int socket_fd, struct sockaddr_in remote_address, socklen_t remote_address_len);
    Socket(const Socket& other) = delete;
    Socket& operator=(const Socket& other) = delete;
    void close();

    friend class ServerSocket;
public:
    static const int invalid_socket;

    Socket();
    Socket(std::string ip_address, int port);
    Socket(Socket&& other);
    ~Socket();
    Socket& operator=(Socket&& other);
    std::string get_remote_address() const;
    std::optional<std::string> receive_line();
    std::optional<std::string> receive_line(long timeout);
    void send_line(const std::string& line);
};


