#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Color RGB Macros
#define RGB(r, g, b)    "\033[38;2;" #r ";" #g ";" #b "m"
#define RGB_BG(r, g, b) "\033[48;2;" #r ";" #g ";" #b "m"
#define COLOR_RESET     "\033[0m"
#define BOLD            "\033[1m"

static void print_version(void)
{
    printf(RGB(0, 245, 212) BOLD);
    printf("    ___    __    ____  __  __  ___  ______ ____  ____   ______ _____ \n");
    printf(RGB(0, 217, 230));
    printf("   /   |  / /   / __ \\/ / / / /   |/ ____/ __ \\/ __ \\ / ____/ ____/\n");
    printf(RGB(131, 56, 236));
    printf("  / /| | / /   / /_/ / /_/ / / /| / /_  / / / / /_/ // /_  / __/   \n");
    printf(RGB(173, 50, 240));
    printf(" / ___ |/ /___/ ____/ __  / / ___ / __/ / /_/ / _, _// __/ / /___  \n");
    printf(RGB(241, 91, 181));
    printf("/_/  |_/_____/_/   /_/ /_/ /_/  |_/_/    \\____/_/ |_|/_/   /_____/  \n\n");

    // --- IMS ---
    printf(RGB(255, 117, 0) BOLD);
    printf("                      ____ __  ______ \n");
    printf(RGB(255, 154, 0));
    printf("                     /  _/  |/  / ___/\n");
    printf(RGB(255, 190, 11));
    printf("                     / // /|_/ /\\__ \\ \n");
    printf(RGB(255, 215, 0));
    printf("                   _/ // /  / /___/ / \n");
    printf(RGB(255, 230, 0));
    printf("                  /___/_/  /_//____/  \n\n");

    printf(RGB_BG(20, 20, 35) RGB(0, 245, 212) BOLD "   Version - v0.1.0   " COLOR_RESET "\n\n");
}

static void print_help(const char *prog_name)
{
    printf(RGB(255, 215, 0) BOLD "CÚ PHÁP SỬ DỤNG:" COLOR_RESET " %s [option]\n\n", prog_name);
    printf(BOLD "CÁC TÙY CHỌN:\n" COLOR_RESET);
    printf("  " RGB(0, 245, 212) BOLD "--myself -lang <vi|en>" COLOR_RESET "\n");
    printf("      Chỉ hiển thị thông tin bằng ngôn ngữ được chọn (" BOLD "vi" COLOR_RESET " hoặc " BOLD "en" COLOR_RESET ").\n\n");
    
    printf("  " RGB(0, 245, 212) BOLD "--banner, -bner" COLOR_RESET "\n");
    printf("      In logo AlphaForge IMS.\n\n");

    printf("  " RGB(0, 245, 212) BOLD "--version, -v" COLOR_RESET "\n");
    printf("      Kiểm tra phiên bản công cụ.\n\n");

    printf("  " RGB(0, 245, 212) BOLD "--help, -h" COLOR_RESET "\n");
    printf("      Hiển thị bảng hướng dẫn này.\n\n");

    printf("=======================================================================\n");

    printf(RGB(255, 215, 0) BOLD "USAGE:" COLOR_RESET " %s [option]\n\n", prog_name);
    printf(BOLD "OPTIONS:\n" COLOR_RESET);
    printf("  " RGB(0, 245, 212) BOLD "--myself -lang <vi|en>" COLOR_RESET "\n");
    printf("      Display information in the selected language (" BOLD "vi" COLOR_RESET " or " BOLD "en" COLOR_RESET ").\n\n");
    
    printf("  " RGB(0, 245, 212) BOLD "--banner, -bner" COLOR_RESET "\n");
    printf("      Print AlphaForge IMS banner.\n\n");

    printf("  " RGB(0, 245, 212) BOLD "--version, -v" COLOR_RESET "\n");
    printf("      Display tool version.\n\n");

    printf("  " RGB(0, 245, 212) BOLD "--help, -h" COLOR_RESET "\n");
    printf("      Display this help message.\n\n");
}

static void print_banner(void)
{
    printf(RGB(0, 245, 212) BOLD);
    printf("    ___    __    ____  __  __  ___  ______ ____  ____   ______ _____ \n");
    printf(RGB(0, 217, 230));
    printf("   /   |  / /   / __ \\/ / / / /   |/ ____/ __ \\/ __ \\ / ____/ ____/\n");
    printf(RGB(131, 56, 236));
    printf("  / /| | / /   / /_/ / /_/ / / /| / /_  / / / / /_/ // /_  / __/   \n");
    printf(RGB(173, 50, 240));
    printf(" / ___ |/ /___/ ____/ __  / / ___ / __/ / /_/ / _, _// __/ / /___  \n");
    printf(RGB(241, 91, 181));
    printf("/_/  |_/_____/_/   /_/ /_/ /_/  |_/_/    \\____/_/ |_|/_/   /_____/  \n\n");

    // --- IMS ---
    printf(RGB(255, 117, 0) BOLD);
    printf("                      ____ __  ______ \n");
    printf(RGB(255, 154, 0));
    printf("                     /  _/  |/  / ___/\n");
    printf(RGB(255, 190, 11));
    printf("                     / // /|_/ /\\__ \\ \n");
    printf(RGB(255, 215, 0));
    printf("                   _/ // /  / /___/ / \n");
    printf(RGB(255, 230, 0));
    printf("                  /___/_/  /_//____/  \n\n");

    // --- FOOTER TAG ---
    printf(RGB_BG(20, 20, 35) RGB(0, 245, 212) BOLD "   [+] Introduction myself tool | by DucShell   " COLOR_RESET "\n\n");
}

static void print_ProVi(void)
{
    printf(RGB(0, 255, 127) BOLD "=== 🇻🇳 THÔNG TIN CÁ NHÂN (VIETNAMESE) ===" COLOR_RESET "\n");
    printf(BOLD "Họ và tên:" COLOR_RESET " KhĐ. (DucShell)\n");
    printf(BOLD "Sinh năm (mã):" COLOR_RESET " 081210\n");
    printf(BOLD "Định hướng:" COLOR_RESET " Systems Programming, Robotics\n");
    printf(BOLD "Tech Stack:" COLOR_RESET " C/C++, Python, Linux/WSL2\n");
    printf(BOLD "Đang thực hiện:" COLOR_RESET "\n");
    printf("   • Lập trình shell, IoT, mảng hệ thống\n");
    printf("   • Tìm hiểu OS nhỏ\n");
    printf("   • Tìm hiểu robot & mảng Ai\n");
    printf(BOLD "Khu vực:" COLOR_RESET " Lào Cai, Việt Nam\n\n");
}

static void print_ProEN(void)
{
printf(RGB(0, 191, 255) BOLD "=== 🇬🇧 ABOUT ME (ENGLISH) ===" COLOR_RESET "\n");
    printf(BOLD "Name:" COLOR_RESET " KhĐ. (DucShell)\n");
    printf(BOLD "Birth Code:" COLOR_RESET " 081210\n");
    printf(BOLD "Focus Area:" COLOR_RESET " Systems Programming, Robotics\n");
    printf(BOLD "Tech Stack:" COLOR_RESET " C/C++, Python, Linux/WSL2\n");
    printf(BOLD "Currently Working On:" COLOR_RESET "\n");
    printf("   • Shell programming, IoT, systems domain\n");
    printf("   • Researching mini OS / Kernel architecture\n");
    printf("   • Exploring robot & AI domain\n");
    printf(BOLD "Location:" COLOR_RESET " Lao Cai, Vietnam\n\n");
}

int main(int argc, char *argv[])
{
    if (argc < 2 || strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0)
    {
        print_banner();
        print_help(argv[0]);
        return 0;
    }

    else if (strcmp(argv[1], "--myself") == 0 || strcmp(argv[1], "-m") == 0)
    {
        
        if (argc >= 3 && (strcmp(argv[2], "-lang") == 0 || strcmp(argv[2], "--lang") == 0))
        {
            if (argc >= 4 && strcmp(argv[3], "vi") == 0)
            {
                print_banner();
                print_ProVi();
                return 0;
            }
            else if (argc >= 4 && strcmp(argv[3], "en") == 0)
            {
                print_banner();
                print_ProEN();
                return 0;
            }
            else
            {
                printf(RGB(255, 0, 0) BOLD "Error" COLOR_RESET ": need tpye " BOLD "vi" COLOR_RESET " or " BOLD "en" COLOR_RESET " after %s.\n", argv[2]);
                return 1;
            }
        }
        else
        {
            printf(RGB(255, 0, 0) BOLD "Error" COLOR_RESET ": Invalid argument after %s. Please type " BOLD "--help" COLOR_RESET " or " BOLD "-h" COLOR_RESET " for usage.\n", argv[1]);
            return 1;
        }
    }
    else if (strcmp(argv[1], "--version") == 0 || strcmp(argv[1], "-v") == 0)
    {
        print_version();
        printf("Copyright (c) 2026 KDuc -> All rights reserved.\n");
        return 0;
    }
    else if (strcmp(argv[1], "--banner") == 0 || strcmp(argv[1], "-bner") == 0)
    {
        print_banner();
        return 0;
    }
    else
    {
        printf(RGB(255, 0, 0) BOLD "Error" COLOR_RESET ": Unknown option '%s'. Please type " BOLD "--help" COLOR_RESET " or " BOLD "-h" COLOR_RESET " to view instructions.\n", argv[1]);
        return 1;
    }
}