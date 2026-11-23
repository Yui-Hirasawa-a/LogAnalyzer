#pragma once
#include <filesystem>
#include "domain/LogFile.hpp"
#include "domain/LogStatistics.hpp"

class ReportWriter {
public:
    std::filesystem::path save(const LogFile& log, const LogStatistics& statistics, const std::filesystem::path& outputDirectory) const;
};
