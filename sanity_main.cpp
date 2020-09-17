
#include <chrono>
#include <thread>
#include "Tracy.hpp"
#include "TracyClient.cpp"

int main(int argc, char const *argv[])
{
  ZoneScopedN("main");
  {
    std::this_thread::sleep_for(std::chrono::seconds{1});
    ZoneScopedN("brain");
    {
      std::this_thread::sleep_for(std::chrono::seconds{1});
      ZoneScopedN("insane");
      {
        std::this_thread::sleep_for(std::chrono::seconds{1});
        ZoneScopedN("membrane");
      }
    }
  }
  return 0;
}