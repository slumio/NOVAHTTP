#pragma once

#include <sys/epoll.h>
#include <vector>
#include <functional>
#include <unordered_map>
#include <atomic>
#include <memory>
#include <mutex>

namespace nova::net {

class EpollLoop {
public:
    using EventCallback = std::function<void(uint32_t events)>;

    EpollLoop();
    ~EpollLoop();

    bool add_fd(int fd, uint32_t events, EventCallback callback);
    bool mod_fd(int fd, uint32_t events);
    bool remove_fd(int fd);

    void run();
    void stop();

private:
    int epoll_fd_{-1};
    std::atomic<bool> running_{false};
    std::unordered_map<int, EventCallback> callbacks_;
    std::mutex callbacks_mutex_;
};

} // namespace nova::net