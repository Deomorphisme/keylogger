#include "Config.hpp"
#include <fstream>
#include <stdexcept>

Config::Config(const std::string& filePath) {
    try {
        config = YAML::LoadFile(filePath);
    } catch (const YAML::Exception& e) {
        throw std::runtime_error("Erreur lors du chargement du fichier YAML : " + std::string(e.what()));
    }
}

std::string Config::getLogFile() const {
    return config["log"]["file"].as<std::string>();
}

int Config::getLogMaxSizeMb() const {
    return config["log"]["max_size_mb"].as<int>();
}

std::string Config::getServerUrl() const {
    return config["server"]["url"].as<std::string>();
}

int Config::getServerTimeoutMs() const {
    return config["server"]["timeout_ms"].as<int>();
}

bool Config::isSslEnabled() const {
    return config["features"]["enable_ssl"].as<bool>();
}

bool Config::isDebugMode() const {
    return config["features"]["debug_mode"].as<bool>();
}
