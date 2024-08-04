#include <iostream>
#include <filesystem>

int main() {
    /*for(auto& p: std::filesystem::recursive_directory_iterator("dev-skillbox-module25\\"))
    {
        if (!(bool)(p.path().extension().compare(".h")))
        {
            std::cout << p.path() << '\n';
        }
    }*/
    auto recursiveGetFileNamesByExtension =
        [](std::filesystem::path path = "dev-skillbox-module25\\",
            const std::string extension = ".h")
        {
            for (auto& p : std::filesystem::recursive_directory_iterator(path))
            {
                if (!(bool)(p.path().extension().compare(extension)))
                {
                    std::cout << p.path() << '\n';
                }
            }
        };
    recursiveGetFileNamesByExtension();

}
