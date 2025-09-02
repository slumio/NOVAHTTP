# 🌌 NOVA HTTP Server

NOVA HTTP Server is a **high-performance, production-ready HTTP server** implemented in **modern C++20**, designed to showcase deep expertise in **Linux networking, concurrency, and performance optimization**.  
It is built from the ground up for **efficiency, scalability, and security**, making it both a practical HTTP server and a **resume-ready project for top-tier software engineering roles**.

---

## 🚀 Purpose

- Demonstrate mastery of **Linux networking internals** and **async I/O**  
- Showcase **production-grade C++ development practices**  
- Serve as a **reference implementation** for high-performance server design  

---

## ✨ Key Features

- **Epoll-based Event Loop** → Efficient async I/O with edge-triggered polling  
- **Zero-Copy File Serving** → Uses `sendfile()` for optimal static content delivery  
- **HTTP/1.1 Compliance** → Persistent connections & request pipelining  
- **TLS/SSL Integration** → OpenSSL with modern cipher suites & ALPN support  
- **Thread Pool Architecture** → Optimized worker model with work stealing  
- **Object Pooling** → Memory-efficient connection & request lifecycle management  
- **Production Observability** → Prometheus metrics, structured logging, health checks  
- **Security Hardening** → Rate limiting, input validation, secure defaults  
- **Container Ready** → Docker multi-stage builds & Kubernetes manifests  

---

## 🛠 Technical Excellence

- Modern **C++20** with RAII, smart pointers, and move semantics  
- **Custom memory management** with object pools and allocator strategies  
- **Comprehensive testing**:
  - Unit tests
  - Integration tests
  - Fuzzing for robustness  
- **CI/CD pipeline** using GitHub Actions:
  - Automated builds
  - Test execution
  - Deployment artifacts  
- **Performance Benchmarking**:
  - Measurable throughput and latency improvements compared to baseline servers  

---



