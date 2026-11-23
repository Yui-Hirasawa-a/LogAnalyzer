#pragma once
#include <filesystem>
#include <optional>
#include "AnalysisState.hpp"
#include "domain/LogFile.hpp"
#include "domain/LogStatistics.hpp"
#include "infrastructure/LogParser.hpp"

class LogAnalyzer {
    LogParser parser_;
    std::optional<LogFile> activeLog_;
    std::optional<LogStatistics> statistics_;

public:
    void openLog(const std::filesystem::path& sourcePath);
    void analyze();

    AnalysisState getState() const;
    const std::optional<LogFile>& getActiveLog() const;
    const std::optional<LogStatistics>& getStatistics() const;


};
