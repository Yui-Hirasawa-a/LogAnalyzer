#pragma once
#include <cstdint>
#include <optional>
#include <string>
#include "HttpMethod.hpp"

class LogEntry {
    std::string ipAddress_;
    std::string remoteIdentity_;
    std::string remoteUser_;
    std::string timestamp_;
    HttpMethod method_ = HttpMethod::Other;
    std::string requestTarget_;
    std::string protocol_;
    unsigned int statusCode_ = 0;
    std::optional<std::uint64_t> responseBytes_;
    std::string referer_;
    std::string userAgent_;

public:
    LogEntry(const std::string& ipAddress, const std::string& remoteIdentity, const std::string& remoteUser, const std::string& timestamp,
    HttpMethod method, const std::string& requestTarget, const std::string& protocol, unsigned int statusCode,
    std::optional<std::uint64_t> responseBytes, const std::string& referer, const std::string& userAgent);

    const std::string& getIpAddress() const;
    const std::string& getRemoteIdentity() const;
    const std::string& getRemoteUser() const;
    const std::string& getTimestamp() const;
    HttpMethod getMethod() const;
    const std::string& getRequestTarget() const;
    const std::string& getProtocol() const;
    unsigned int getStatusCode() const;
    std::optional<std::uint64_t> getResponseBytes() const;
    const std::string& getReferer() const;
    const std::string& getUserAgent() const;

};
