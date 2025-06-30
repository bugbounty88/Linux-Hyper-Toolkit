#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string>
#include <fstream>

using namespace std;

const string RED = "\033[31m";
const string GREEN = "\033[32m";
const string YELLOW = "\033[33m";
const string BLUE = "\033[34m";
const string RESET = "\033[0m";

void displayOptions() {
    cout << GREEN << "[1] Devices" << RESET << endl;
    cout << GREEN << "[2] Partitions" << RESET << endl;
    cout << GREEN << "[3] Swap Partition" << RESET << endl;
    cout << GREEN << "[4] CPU Information" << RESET << endl;
    cout << GREEN << "[5] Current Loaded Modules" << RESET << endl;
    cout << GREEN << "[6] Processes Information" << RESET << endl;
    cout << GREEN << "[7] Disable ASLR" << RESET << endl;
    cout << GREEN << "[8] Enable ASLR" << RESET << endl;
    cout << GREEN << "[9] Interrupts" << RESET << endl;
    cout << GREEN << "[10] My Processor Arch Type" << RESET << endl;
    cout << GREEN << "[11] Kernel Version" << RESET << endl;
    cout << GREEN << "[12] My Domain name" << RESET << endl;
    cout << GREEN << "[13] Username & UID" << RESET << endl;
    cout << GREEN << "[14] My Hostname" << RESET << endl;
    cout << GREEN << "[15] Clear Command Line Screen" << RESET << endl;
    cout << GREEN << "[16] My Boot Image" << RESET << endl;
    cout << GREEN << "[17] Memory Information" << RESET << endl;
    cout << GREEN << "[18] Network Information" << RESET << endl;
    cout << GREEN << "[19] Process Shared Libraries" << RESET << endl;
    cout << GREEN << "[20] Battery Power" << RESET << endl;
    cout << GREEN << "[21] SSD or HDD" << RESET << endl;
    cout << GREEN << "[22] GPU Intermidate Information" << RESET << endl;
    cout << GREEN << "[23] PC - Laptop Temprature" << RESET << endl;
    cout << GREEN << "[24] LED Controling" << RESET << endl;
    cout << GREEN << "[25] Able KASLR" << RESET << endl;
    cout << GREEN << "[26] Disable KASLR" << RESET << endl;
    cout << GREEN << "[27] Able Memory File Descriptor Noexec" << RESET << endl;
    cout << GREEN << "[28] Disable Memory File Descriptor Noexec" << RESET << endl;
    cout << GREEN << "[29] Bluetooth Network Service Config" << RESET << endl;
    cout << GREEN << "[30] Bluetooth Input Service Config" << RESET << endl;
    cout << GREEN << "[31] Bluetooth Main General Config" << RESET << endl;
    cout << GREEN << "[32] Mozzial Digital Certificates (If There Are Mozzial Firefox Browser)" << RESET << endl;
    cout << GREEN << "[33] Daliy Cron Jobs" << RESET << endl;
    cout << GREEN << "[34] Weekly Cron Jobs" << RESET << endl;
    cout << GREEN << "[35] Monthly Cron Jobs" << RESET << endl;
    cout << GREEN << "[36] Hourly Cron Jobs" << RESET << endl;
    cout << GREEN << "[37] Screen Brightness (Only For Intel Users)" << RESET << endl;
    cout << GREEN << "[38] PC - Laptop Fan Temprature" << RESET << endl;
    cout << GREEN << "[39] Disbale Ipv6" << RESET << endl;
    cout << GREEN << "[40] Able Ipv6" << RESET << endl;
    cout << GREEN << "[41] CPU Threads Frequency" << RESET << endl;
    cout << GREEN << "[42] CPU State" << RESET << endl;
    cout << GREEN << "[43] Disable Kernel Execuse Load Disbaled" << RESET << endl;
    cout << GREEN << "[44] Able Kernel Execuse Load Disbaled" << RESET << endl;
    cout << GREEN << "[99] Exit Toolkit" << RESET << endl;
    cout << GREEN << "[100] Contact Me" << RESET << endl;
    cout << YELLOW;
}

void executeCommand(const string& cmd) {
    system(cmd.c_str());
}

void handleInput() {
    int user_input;
    cout << "Enter Option Number: ";
    cin >> user_input;

    switch(user_input) {
        case 1:
            cout << "Option " << user_input << " Processed..." << endl;
            sleep(0.7);
            executeCommand("/bin/cat /proc/devices");
            break;
        case 2:
            cout << "Option " << user_input << " Processed..." << endl;
            sleep(0.7);
            executeCommand("/bin/cat /proc/partitions");
            break;
        case 3:
            cout << "Option " << user_input << " Processed..." << endl;
            sleep(0.7);
            executeCommand("/bin/cat /proc/swaps");
            break;
        case 4:
            cout << "Option " << user_input << " Processed..." << endl;
            sleep(0.7);
            executeCommand("/bin/cat /proc/cpuinfo");
            break;
        case 5:
            cout << "Option " << user_input << " Processed..." << endl;
            sleep(0.7);
            executeCommand("/bin/cat /proc/modules");
            break;
        case 6:
            cout << "Option " << user_input << " Processed..." << endl;
            sleep(0.7);
            executeCommand("/bin/ps aux");
            break;
        case 7:
            cout << "Option " << user_input << " Processed..." << endl;
            sleep(0.7);
            executeCommand("/bin/echo 0 > /proc/sys/kernel/randomize_va_space");
            break;
        case 8:
            cout << "Option " << user_input << " Processed..." << endl;
            sleep(0.7);
            executeCommand("/bin/echo 2 > /proc/sys/kernel/randomize_va_space");
            break;
        case 9:
            cout << "Option " << user_input << " Processed..." << endl;
            sleep(0.7);
            executeCommand("/bin/cat /proc/interrupts");
            break;
        case 10:
            cout << "Option " << user_input << " Processed..." << endl;
            sleep(0.7);
            executeCommand("/bin/cat /proc/sys/kernel/arch");
            break;
        case 11:
            cout << "Option " << user_input << " Processed..." << endl;
            sleep(0.7);
            executeCommand("/bin/cat /proc/sys/kernel/version");
            break;
        case 12:
            cout << "Option " << user_input << " Processed..." << endl;
            sleep(0.7);
            executeCommand("/bin/cat /proc/sys/kernel/domainname");
            break;
        case 13:
            cout << "Option " << user_input << " Processed..." << endl;
            sleep(0.7);
            executeCommand("/bin/cat /etc/subgid");
            break;
        case 14:
            cout << "Option " << user_input << " Processed..." << endl;
            sleep(0.7);
            executeCommand("/bin/cat /etc/hostname");
            break;
        case 15:
            cout << "Option " << user_input << " Processed..." << endl;
            sleep(0.7);
            system("/bin/clear");
            displayOptions();
            break;
        case 16:
            cout << "Option " << user_input << " Processed..." << endl;
            sleep(0.7);
            executeCommand("/bin/cat /proc/cmdline");
            break;
        case 17:
            cout << "Option " << user_input << " Processed..." << endl;
            sleep(0.7);
            executeCommand("/bin/cat /proc/meminfo");
            break;
        case 18:
            cout << "Option " << user_input << " Processed..." << endl;
            sleep(0.7);
            executeCommand("/bin/cat /proc/net/dev");
            break;
        case 19: {
            cout << "Option " << user_input << " Processed..." << endl;
            sleep(0.7);
            string pid;
            cout << "Enter PID: ";
            cin >> pid;
            executeCommand("/bin/cat /proc/" + pid + "/maps");
            break;
        }
	case 20:
	    cout << "Option " << user_input << " Processed..." << endl;
	    sleep(0.7);
	    executeCommand("/bin/cat /sys/class/power_supply/BAT0/capacity ; echo %");
	    break;
	case 21:
	    cout << "Option " << user_input << " Processed..." << endl;
	    sleep(0.7);
	    cout << YELLOW << "If 0 So Your Disk Is SSD And If 1 Your Disk Is HDD" << endl;
	    executeCommand("/bin/cat /sys/block/sda/queue/rotational");
	    break;
	case 22:
	    cout << "Option " << user_input << " Processed..." << endl;
	    sleep(0.7);
	    executeCommand("/bin/cat /sys/class/drm/card0/device/uevent");
	    break;
	case 23:
	    cout << "Option " << user_input << " Processed..." << endl;
	    sleep(0.7);
	    executeCommand("/bin/cat /sys/class/thermal/thermal_zone7/temp");
	    cout << "~C Degree" << endl;
	    break;
	case 24: {
	    cout << "Option " << user_input << " Processed..." << endl;
	    sleep(0.7);
	    string ledinput;
	    string brightness;
	    cout << "Enter LED Input Number : ";
	    cin >> ledinput;
	    cout << "Enter Brightness Number : ";
	    cin >> brightness;
	    executeCommand("/bin/echo " + brightness  +  " > /sys/class/leds/input" + ledinput + "::capslock/brightness");
	    break;
	}
	case 25:
	    cout << "Option " << user_input << " Processed..." << endl;
	    sleep(0.7);
	    executeCommand("/bin/echo 2 > /proc/sys/kernel/kptr_restrict");
	    break;
	case 26:
	    cout << "Option " << user_input << " Processed..." << endl;
	    sleep(0.7);
	    executeCommand("/bin/echo 0 > /proc/sys/kernel/kptr_restrict");
	    break;
	case 27:
	    cout << "Option " << user_input << " Processed..." << endl;
	    sleep(0.7);
	    executeCommand("/bin/echo 2 > /proc/sys/vm/memfd_noexec");
	    break;
	case 28:
	    cout << "Option " << user_input << " Processed..." << endl;
	    sleep(0.7);
	    executeCommand("/bin/echo 0 > /proc/sys/vm/memfd_noexec");
	    break;
	case 29:
	    cout << "Option " << user_input << " Processed..." << endl;
	    sleep(0.7);
	    executeCommand("/bin/cat /etc/bluetooth/network.conf");
	    break;
	case 30:
	    cout << "Option " << user_input << " Processed..." << endl;
	    sleep(0.7);
	    executeCommand("/bin/cat /etc/bluetooth/input.conf");
	    break;
	case 31:
	    cout << "Option " << user_input << " Processed..." << endl;
	    sleep(0.7);
	    executeCommand("/bin/cat /etc/bluetooth/main.conf");
	    break;
	case 32:
	    cout << "Option " << user_input << " Processed..." << endl;
	    sleep(0.7);
	    executeCommand("/bin/ls /usr/share/ca-certificates/mozilla/ | grep '.crt' ");
	    break;
	case 33:
	    cout << "Option " << user_input << " Processed..." << endl;
	    sleep(0.7);
	    executeCommand("/bin/ls -1 /etc/cron.daily");
	    break;
	case 34:
	    cout << "Option " << user_input << " Processed..." << endl;
	    sleep(0.7);
	    executeCommand("/bin/ls -1 /etc/cron.weekly");
	    break;
	case 35:
	    cout << "Option " << user_input << " Processed..." << endl;
	    sleep(0.7);
	    executeCommand("/bin/ls -1 /etc/cron.monthly");
	    break;
	case 36:
	    cout << "Option " << user_input << " Processed..." << endl;
	    sleep(0.7);
	    executeCommand("/bin/ls -1 /etc/cron.hourly");
	    break;
	case 37: {
	    cout << "Option " << user_input << " Processed..." << endl;
	    string brightness;
	    cout << RED << "Critical Warning : Don't Make The Brightness Less Than 12000 Or More Than 120000 Because That Can Be Crash Your Brightness Hardware System." << endl;
	    cout << GREEN << "Enter Brightness (min : 12000 - max : 120000) : " << RESET;
	    cin >> brightness;
	    string ask;
	    cout << GREEN << "Are You Sure To Continue(Yes / No) : " << RESET;
	    cin >> ask;
	    if (ask == "Yes"){
	        cout << "Okay" << endl;
	    }else if (ask == "No"){
	        cout << "Okay" << endl;
	        break;
	    }else {
	        break;
	    }
	    sleep(0.7);
	    cout << YELLOW << endl;
	    executeCommand("/bin/echo " + brightness + " > /sys/class/backlight/intel_backlight/brightness"); // For Intel Backlight Only (Will Upgrade Later)
	    break;
	}
	case 38: {
	    cout << "Option " << user_input << " Processed..." << endl;
	    string fan_num;
	    cout << GREEN << "Enter Fan Number : " << RESET;
	    cin >> fan_num;
	    string ask;
	    cout << GREEN << "Are This section fan number Has More Than 1 Fan (Y/N)? : " << RESET;
	    cin >> ask;
	    if (ask == "Y"){
	        executeCommand("/bin/cat /sys/class/hwmon/hwmon" + fan_num + "/temp1_input");
	        executeCommand("/bin/cat /sys/class/hwmon/hwmon" + fan_num + "/temp2_input");
	    } else {
	        executeCommand("/bin/cat /sys/class/hwmon/hwmon" + fan_num + "/temp1_input");
	    }
	    break;
	}
	case 39:
	    cout << "Option " << user_input << " Processed..." << endl;
	    sleep(0.7);
	    executeCommand("/bin/echo 2 > /proc/sys/net/ipv6/conf/all/disable_ipv6");
	    break;
	case 40:
	    cout << "Option " << user_input << " Processed..." << endl;
	    sleep(0.7);
	    executeCommand("/bin/echo 0 > /proc/sys/net/ipv6/conf/all/disable_ipv6");
	    break;
	case 41: {
	    cout << "Option " << user_input << " Processed..." << endl;
	    sleep(0.7);
	    string threads;
	    cout << GREEN <<"What Thread You Want to show it's freq : " << RESET;
	    cin >> threads;
	    executeCommand("/bin/cat /sys/devices/system/cpu/cpu" + threads + "/cpufreq/scaling_cur_freq");
	    cout << YELLOW << endl;
	    break;
	}
	case 42:
	    cout << "Option " << user_input << " Processed..." << endl;
	    sleep(0.7);
	    executeCommand("/bin/cat /sys/devices/system/cpu/hotplug/states");
	    break;
	case 43:
	    cout << "Option " << user_input << " Processed..." << endl;
	    sleep(0.7);
	    executeCommand("/bin/echo 0 > /proc/sys/kernel/kexec_load_disabled");
	    break;
	case 44:
	    cout << "Option " << user_input << " Processed..." << endl;
	    sleep(0.7);
	    executeCommand("/bin/echo 2 > /proc/sys/kernel/kexec_load_disabled");
	    break;
        case 99:
            cout << "Exit, Bye" << endl;
	    sleep(0.7);
            exit(0);
	    break;
	case 100:
	    cout << BLUE << "Contact Gmail : hamza2002gaming@gmail.com" << RESET << endl;
	    cout << BLUE << "Github Profile : bugbounty88" << RESET << endl;
	    cout << YELLOW << endl;
	    break;
        default:
            cout << "Error, Option Not Found" << endl;
    }
    
    handleInput();
}

int main() {
    system("/bin/clear");
    cout << BLUE << "Hello, This Is Highly Helpful Toolkit For Any Linux System (Debian, Arch, etc...),\n" << RESET << endl;
    
    displayOptions();
    handleInput();
    
    return 0;
}
