/*
 * main.cpp
 *
 *  Created on: 2018年4月9日
 *      Author: lambdaji
 */

#include <glog/logging.h>
#include <gflags/gflags.h>
#include <iostream>

using namespace std;

DEFINE_string(task_type, "train", "task type {train, predict}");
DEFINE_string(model_type, "LR", "model type{LR, FM, FFM}");
DEFINE_string(opt_type, "sgd", "optimizer type {sgd, adam, adagrad, ftrl, Momentum}");
DEFINE_string(model_dir, "", "model file save dir");
DEFINE_string(data_dir, "", "data dir");
DEFINE_int32(num_epochs, 1, "num epochs");
DEFINE_int32(num_threads, 3, "num threads");
DEFINE_double(learning_rate, 0.2, "learning rate");
DEFINE_double(alpha, 0.2, "ftrl alpha");
DEFINE_double(beta, 0.2, "ftrl beta");
DEFINE_double(l1, 0.2, "lambda for L1 regular");
DEFINE_double(l2, 0.2, "lambda for L2 regular");

int main(int argc, char **argv) {
  google::ParseCommandLineFlags(&argc, &argv, true);
  if (!::google::ParseCommandLineFlags(&argc, &argv, true)) {
      LOG(ERROR) << "Failed to parse arguments. "
                 << "Use --help to show help.";
      return 1;
    }
    ::google::SetArgv(argc, const_cast<const char**>(argv));
    ::google::InitGoogleLogging(argv[0]);

    if (FLAGS_input.empty()) {
      LOG(ERROR) << "Please set --input.";
      return 1;
    }
    if (FLAGS_model.empty()) {
      LOG(ERROR) << "Please set --model.";
      return 1;
    }
  // Initialize Google's logging library.
  google::InitGoogleLogging(argv[0]);
  //FLAGS_colorlogtostderr = true;

  cout << "log_dir: " << FLAGS_sLogDir << endl;
  cout << "hash type: " << FLAGS_sHashType << endl;
  cout << "shuffle: " << FLAGS_iShuffle << endl;
  cout << "layers: " << FLAGS_iLayers << endl;



  google::ShutdownGoogleLogging();
  return 0;
}


