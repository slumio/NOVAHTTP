# NOVAHTTP

![C++](https://img.shields.io/badge/C++-17-blue)
![License](https://img.shields.io/badge/license-MIT-green)

---

## Project Status

⚠️ **Under Process** – NOVAHTTP is currently in development. Core modules are being implemented.

---

## Project Description

**NOVAHTTP** is a **high-performance, multithreaded HTTP server written in C++**, capable of handling **10,000+ concurrent connections** with **low latency (<100ms)**. It is designed as a **production-grade server** demonstrating advanced C++ skills, Linux system programming, and network server architecture.

---

## Key Features (Planned / Under Development)

- **High-Concurrency Event-Driven Architecture** using `epoll` and a **modular thread pool**
- **HTTP/1.1 & HTTP/2 Support**
- **HTTPS/TLS** using OpenSSL (TLS 1.3)
- **Static File Serving & LRU Caching**
- **WebSocket Support** for real-time bi-directional communication
- **Compression (gzip) & Optimization**
- **Metrics & Monitoring** via `/metrics` endpoint
- **Plugin System** for dynamic `.so` modules
- **Rate Limiting / DoS Protection**
- **Configurable via JSON/INI files**
- **Thread-safe Logging**
- **Unit Tests & Benchmark Scripts**
- **Docker-ready & CI/CD Pipeline**

---

## Tech Stack

- **Language**: C++17
- **Libraries**: pthread, OpenSSL, zlib, nghttp2 (for HTTP/2)
- **Tools**: CMake, Doxygen, GitHub Actions, Docker

---

## Project Structure

