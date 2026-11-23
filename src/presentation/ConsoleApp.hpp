#pragma once
#include "MenuAction.hpp"
#include "application/LogAnalyzer.hpp"
#include "infrastructure/ReportWriter.hpp"

class ConsoleApp {
    void showMenu() const;
    MenuAction readAction() const;
    void openLog();
    void analyzeLog();
    void saveReport();

    LogAnalyzer analyzer_;
    ReportWriter reportWriter_;

public:
    void run();

};
