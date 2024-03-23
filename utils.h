#pragma once
#include <winsock2.h>
#include <windows.h>
#include <vector>

// 模块基址
static const uintptr_t modBaseOffset = 0x3F9FD30;

// 金钱偏移
static const std::vector <unsigned int> moneyOffsets = { 0xB8, 0x38 };

// 根据进程名获取process ID
DWORD GetProcessID(const wchar_t* procName);

// 获取模块基址
uintptr_t GetModuleBaseAddress(DWORD procId, const wchar_t* modName);

// 获取动态数据地址
uintptr_t GetDMAAddress(HANDLE hProc, uintptr_t ptr, std::vector <unsigned int> offsets);

// 错误码
enum IzakayaCode
{
    SUCCESS = 0,
    PROCESS_NOT_FOUND = -1,
    BASE_ADDRESS_NOT_FOUND = -2,
    CANNOT_ATTACH_TO_PROCESS = -3
};

// 返回的结构体
struct IzakayaResult
{
    IzakayaCode code;
    uintptr_t modBase;
    HANDLE hProc;
};
// 获取夜雀食堂进程
IzakayaResult GetIzakayaProcess();

// 读取金钱值
DWORD ReadMoney(uintptr_t modBase, HANDLE hProc);

// 写入金钱值
void ChangeMoney(uintptr_t modBase, HANDLE hProc, DWORD value);