#include <memory>

#include "list_node.h"

using std::shared_ptr;

shared_ptr<ListNode<int>> CyclicallyRightShiftList(shared_ptr<ListNode<int>> L,
                                                   int k) {
  // Implement this placeholder.
  return nullptr;
}

#include "test_framework/test_utils_generic_main.h"

int main(int argc, char* argv[]) {
  std::vector<std::string> param_names{"L", "k"};
  generic_test_main(argc, argv, param_names, "list_cyclic_right_shift.tsv",
                    &CyclicallyRightShiftList);
  return 0;
}
