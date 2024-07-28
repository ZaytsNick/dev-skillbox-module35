#include <iostream>
#include <vector>
#include <unordered_set>

int main()
{
    std::cout << "TASK #2" << std::endl;
    std::initializer_list<int> iList{ 1, 2, 3, 4, 5, 1, 2, 3 };
    std::vector<int> asd = iList;
    auto removeDuplicates = [](std::vector<int>& asd) -> std::unique_ptr<std::vector<int>> {
        std::unordered_set<int> temp;
        std::vector<int> tmp;
        for (auto it = asd.begin(); it != asd.end(); ++it) {
            std::cout << temp.count(*it) << std::endl;
            temp.insert(*it);
        }
        for (auto it = temp.begin(); it != temp.end(); ++it) {
            tmp.push_back(*it);
        }
        return std::make_unique<std::vector<int>>(tmp);
        };
    auto answer = removeDuplicates(asd);
    for (const auto& val : *answer) {
        std::cout << val << " ";
    }
}