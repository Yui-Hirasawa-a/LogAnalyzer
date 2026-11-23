#pragma once
#include <filesystem>
#include <vector>
#include "LogEntry.hpp"

class LogFile {
    std::filesystem::path sourcePath_;
    std::vector<LogEntry> entries_;
    std::size_t skippedLineCount_ = 0;

public:
    LogFile(const std::filesystem::path& sourcePath, const std::vector<LogEntry>& entries, std::size_t skippedLineCount);

    const std::filesystem::path& getSourcePath() const;
    const std::vector<LogEntry>& getEntries() const;
    std::size_t getLoadedLineCount() const;
    std::size_t getSkippedLineCount() const;

};
