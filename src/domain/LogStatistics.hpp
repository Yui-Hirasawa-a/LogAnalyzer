#pragma once

class LogStatistics {
    std::size_t totalRequestCount_ = 0;
    std::size_t clientErrorCount_ = 0;
    std::size_t serverErrorCount_ = 0;
    std::size_t uniqueIpCount_ = 0;

public:
    LogStatistics(std::size_t totalRequestCount, std::size_t clientErrorCount, std::size_t serverErrorCount, std::size_t uniqueIpCount);

    std::size_t getTotalRequestCount() const;
    std::size_t getClientErrorCount() const;
    std::size_t getServerErrorCount() const;
    std::size_t getUniqueIpCount() const;

};
