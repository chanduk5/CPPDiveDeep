#include "inc/includes.h"
#include "inc/logger.h"
#include "TaskManagementSystem/inc/taskManagement.h"

void moduleLevels() {
  Logger log("Testlog.txt", LogLevel::INFO);
  log.LOG_Add(LogModule::COMP1, LogLevel::WARN, __func__, "logTest");
}

int main() {
  //vectorImplementations();
  //moduleLevels();
  TestTaskManagement();
  return 0;
}