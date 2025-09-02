# 🌌 NOVA HTTP Server

NOVA is a **high-performance HTTP server** built with **modern C++20**.  
It is designed for **efficiency, scalability, and security**, with a focus on Linux networking and concurrency.  
The project provides a practical foundation for learning systems programming as well as building production-ready applications.

---

## 🚀 Overview

- Lightweight, modular, and extensible HTTP server
- Based on **epoll** for asynchronous I/O
- Optimized for **low-latency request handling** and **high concurrency**
- Built with clean, modern C++20 features

---

## ✨ Features

- **Event-driven architecture** using epoll (edge-triggered)
- **Zero-copy static file serving** with `sendfile()`
- **HTTP/1.1 support**: persistent connections & pipelining
- **TLS/SSL integration** with OpenSSL (secure cipher suites, ALPN)
- **Thread pool workers** with work-stealing for scalability
- **Memory-efficient design** via object pooling
- **Observability**: structured logging, metrics, health checks
- **Security features**: rate limiting, safe request parsing, secure defaults
- **Containerized deployment**: Docker & Kubernetes ready

---

## 🛠 Technical Details

- Written in **C++20** (RAII, smart pointers, move semantics)
- **Custom allocator strategies** for optimized memory usage
- Testing:
  - Unit tests
  - Integration tests
  - Fuzzing for robustness
- CI/CD with **GitHub Actions** (builds, tests, release artifacts)
- **Benchmark suite** for throughput & latency evaluation

---

## 📦 Getting Started

### Prerequisites
- Linux (tested on Ubuntu 22.04)
- CMake ≥ 3.16
- GCC ≥ 11 or Clang ≥ 13
- OpenSSL ≥ 1.1.1

### Build
```bash
git clone https://github.com/your-username/nova-http.git
cd nova-http
mkdir build && cd build
cmake ..
make -j$(nproc)
