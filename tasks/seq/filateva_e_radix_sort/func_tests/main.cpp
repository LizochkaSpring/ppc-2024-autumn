// Filateva Elizaveta Radix Sort
#include <gtest/gtest.h>

#include <algorithm>
#include <vector>
#include <string>

#include "seq/filateva_e_radix_sort/include/ops_seq.hpp"

void GeneratorVector(std::vector<int> &vec) {
  int max_z = 10;
  int min_z = -10;
  for (unsigned long i = 0; i < vec.size(); i++) {
    vec[i] = rand() % (max_z - min_z + 1) + min_z;
  }
}

// TEST(filateva_e_radix_sort_seq, test_size_3) {
//   int size = 3;
//   std::vector<int> vec(size);
//   std::vector<int> answer(size);
//   std::vector<int> tResh;

//   GeneratorVector(vec);
//   tResh = vec;

//   std::shared_ptr<ppc::core::TaskData> taskData = std::make_shared<ppc::core::TaskData>();
//   taskData->inputs.emplace_back(reinterpret_cast<uint8_t *>(vec.data()));
//   taskData->outputs.emplace_back(reinterpret_cast<uint8_t *>(answer.data()));
//   taskData->inputs_count.emplace_back(size);
//   taskData->outputs_count.emplace_back(size);

//   filateva_e_radix_sort_seq::RadixSort radixSort(taskData);

//   ASSERT_TRUE(radixSort.validation());
//   radixSort.pre_processing();
//   radixSort.run();
//   radixSort.post_processing();

//   std::sort(tResh.begin(), tResh.end());

//   EXPECT_EQ(answer.size(), tResh.size());
//   for (int i = 0; i < size; i++) {
//     EXPECT_EQ(answer[i], tResh[i]);
//   }
// }

// TEST(filateva_e_radix_sort_seq, test_size_10) {
//   int size = 10;
//   std::vector<int> vec(size);
//   std::vector<int> answer(size);
//   std::vector<int> tResh;

//   GeneratorVector(vec);
//   tResh = vec;

//   std::shared_ptr<ppc::core::TaskData> taskData = std::make_shared<ppc::core::TaskData>();
//   taskData->inputs.emplace_back(reinterpret_cast<uint8_t *>(vec.data()));
//   taskData->outputs.emplace_back(reinterpret_cast<uint8_t *>(answer.data()));
//   taskData->inputs_count.emplace_back(size);
//   taskData->outputs_count.emplace_back(size);

//   filateva_e_radix_sort_seq::RadixSort radixSort(taskData);

//   ASSERT_TRUE(radixSort.validation());
//   radixSort.pre_processing();
//   radixSort.run();
//   radixSort.post_processing();

//   std::sort(tResh.begin(), tResh.end());

//   EXPECT_EQ(answer.size(), tResh.size());
//   for (int i = 0; i < size; i++) {
//     EXPECT_EQ(answer[i], tResh[i]);
//   }
// }

// TEST(filateva_e_radix_sort_seq, test_size_100) {
//   int size = 100;
//   std::vector<int> vec(size);
//   std::vector<int> answer(size);
//   std::vector<int> tResh;

//   GeneratorVector(vec);
//   tResh = vec;

//   std::shared_ptr<ppc::core::TaskData> taskData = std::make_shared<ppc::core::TaskData>();
//   taskData->inputs.emplace_back(reinterpret_cast<uint8_t *>(vec.data()));
//   taskData->outputs.emplace_back(reinterpret_cast<uint8_t *>(answer.data()));
//   taskData->inputs_count.emplace_back(size);
//   taskData->outputs_count.emplace_back(size);

//   filateva_e_radix_sort_seq::RadixSort radixSort(taskData);

//   ASSERT_TRUE(radixSort.validation());
//   radixSort.pre_processing();
//   radixSort.run();
//   radixSort.post_processing();

//   std::sort(tResh.begin(), tResh.end());

//   EXPECT_EQ(answer.size(), tResh.size());
//   for (int i = 0; i < size; i++) {
//     EXPECT_EQ(answer[i], tResh[i]);
//   }
// }

// TEST(filateva_e_radix_sort_seq, test_size_211) {
//   int size = 211;
//   std::vector<int> vec(size);
//   std::vector<int> answer(size);
//   std::vector<int> tResh;

//   GeneratorVector(vec);
//   tResh = vec;

//   std::shared_ptr<ppc::core::TaskData> taskData = std::make_shared<ppc::core::TaskData>();
//   taskData->inputs.emplace_back(reinterpret_cast<uint8_t *>(vec.data()));
//   taskData->outputs.emplace_back(reinterpret_cast<uint8_t *>(answer.data()));
//   taskData->inputs_count.emplace_back(size);
//   taskData->outputs_count.emplace_back(size);

//   filateva_e_radix_sort_seq::RadixSort radixSort(taskData);

//   ASSERT_TRUE(radixSort.validation());
//   radixSort.pre_processing();
//   radixSort.run();
//   radixSort.post_processing();

//   std::sort(tResh.begin(), tResh.end());

//   EXPECT_EQ(answer.size(), tResh.size());
//   for (int i = 0; i < size; i++) {
//     EXPECT_EQ(answer[i], tResh[i]);
//   }
// }

// TEST(filateva_e_radix_sort_seq, test_size_different) {
//   int size = 10;
//   std::vector<int> vec(size);
//   std::vector<int> answer(size);

//   std::shared_ptr<ppc::core::TaskData> taskData = std::make_shared<ppc::core::TaskData>();
//   taskData->inputs.emplace_back(reinterpret_cast<uint8_t *>(vec.data()));
//   taskData->outputs.emplace_back(reinterpret_cast<uint8_t *>(answer.data()));
//   taskData->inputs_count.emplace_back(size);
//   taskData->outputs_count.emplace_back(size + 1);

//   filateva_e_radix_sort_seq::RadixSort radixSort(taskData);

//   EXPECT_FALSE(radixSort.validation());
// }

// TEST(filateva_e_radix_sort_seq, test_size_0) {
//   int size = 0;
//   std::vector<int> vec(size);
//   std::vector<int> answer(size);

//   std::shared_ptr<ppc::core::TaskData> taskData = std::make_shared<ppc::core::TaskData>();
//   taskData->inputs.emplace_back(reinterpret_cast<uint8_t *>(vec.data()));
//   taskData->outputs.emplace_back(reinterpret_cast<uint8_t *>(answer.data()));
//   taskData->inputs_count.emplace_back(size);
//   taskData->outputs_count.emplace_back(size + 1);

//   filateva_e_radix_sort_seq::RadixSort radixSort(taskData);

//   EXPECT_FALSE(radixSort.validation());
// }

// TEST(filateva_e_radix_sort_seq, test_less_0) {
//   int size = 0;
//   std::vector<int> vec(size);
//   std::vector<int> answer(size);

//   std::shared_ptr<ppc::core::TaskData> taskData = std::make_shared<ppc::core::TaskData>();
//   taskData->inputs.emplace_back(reinterpret_cast<uint8_t *>(vec.data()));
//   taskData->outputs.emplace_back(reinterpret_cast<uint8_t *>(answer.data()));
//   taskData->inputs_count.emplace_back(-10);
//   taskData->outputs_count.emplace_back(size);

//   filateva_e_radix_sort_seq::RadixSort radixSort(taskData);

//   EXPECT_FALSE(radixSort.validation());
// }
