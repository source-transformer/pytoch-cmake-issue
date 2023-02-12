#include <torch/torch.h>

#include <cmath>
#include <cstdio>
#include <iostream>

int main(int argc, const char* argv[]) {
  torch::manual_seed(1);

  // Create the device we pass around based on whether CUDA is available.
  torch::Device device(torch::kCPU);
  if (torch::cuda::is_available()) {
    std::cout << "CUDA is available! Training on GPU." << std::endl;
    device = torch::Device(torch::kCUDA);
  }
  else{
    std::cout << "CUDA is not available! Training on CPU." << std::endl;
  }

  // test intellisense
  //torch::

  std::cout << "done" << std::endl;

}
