#pragma once
#include <filesystem>
#include <optional>
#include <string>
#include "domain/LogFile.hpp"

class LogParser {
std::optional<LogEntry> parseLine(const std::string& line) const;

public:
    LogFile load(const std::filesystem::path& sourcePath) const;

};
