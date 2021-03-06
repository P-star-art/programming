// Copyright 2019 Aman Mehara
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "bubble_sort.h"

#include <algorithm>
#include <vector>

namespace mehara::sort {

void bubble_sort(std::vector<double>& array) {

    auto swapped = false;
    do {
        swapped = false;
        for (auto index = 0; index < array.size() - 1; index++) {
            if (array[index] > array[index + 1]) {
                std::swap(array[index], array[index + 1]);
                swapped = true;
            }
        }
    } while (swapped == true);
}

} // namespace mehara::sort
