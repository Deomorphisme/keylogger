#pragma once
#include <string>
#include <yaml-cpp/yaml.h>

class Config {
public:
    Config(const std::string& filePath);

    // Getters pour accéder aux valeurs
    std::string getLogFile() const;
    int getLogMaxSizeMb() const;
    std::string getServerUrl() const;
    int getServerTimeoutMs() const;
    bool isSslEnabled() const;
    bool isDebugMode() const;

private:
    YAML::Node config;
};
