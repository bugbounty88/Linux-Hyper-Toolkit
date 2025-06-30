# **Linux Hyper Toolkit** 🚀  

---

## **🔍 Overview**  
This toolkit provides **40+ unique options** to interact with your Linux system at a deep level, from checking CPU info to **Partitions Information**, **LED control**, and even **kernel security tweaks**. Perfect for:  
- **System Admins** 👨‍💻  
- **Linux Enthusiasts** 🐧  
- **Security Researchers** 🔒  
- **Developers** 💻  

---

## **✨ Key Features**  
### **🔧 System & Hardware Control**  
- ✅ **LED Brightness Control** (Adjust keyboard LEDs)  
- ✅ **Fan Temperature Monitoring** (Check hardware temps)  
- ✅ **SSD/HDD Detection** (Check disk type)  
- ✅ **Screen Backlight Adjustment** ( Intel/ AMD(Will Upgrade Later) )  

### **📊 System Monitoring**  
- 📌 **CPU & Memory Info**
- 📌 **Process & Module Listings**
- 📌 **Network & Bluetooth Configs**  
- 📌 **Battery Power Status**  

### **🛡️ Kernel & Security Tweaks**  
- 🔐 **Enable/Disable ASLR** (Address Space Layout Randomization)  
- 🔐 **KASLR Control** (Kernel ASLR)  
- 🔐 **IPv6 Toggle** (Disable for security)  
- 🔐 **Memory Noexec Protection**  

### **⚡ Bonus: Crazy Experimental Features**  
- 🚀 **Adjust Screen Brightness** (Control Screen Brightness safely)  
- 🔥 **Control LED Brightness**  (Control Your Selected LED Brightness)

---

## **🚀 Installation & Usage**  
### **1. Clone & Compile**  
```bash
git clone https://github.com/bugbounty88/Linux-Hyper-Toolkit
cd Linux-Hyper-Toolkit
g++ main.cpp -o linux-toolkit
sudo ./linux-toolkit
```

### **2. Run & Select Options**  
```bash
./linux-toolkit
```
(Follow the interactive menu)  

### **3. Run as Root (For Full Access)**  
```bash
sudo ./linux-toolkit
```
*(Required for hardware control & kernel tweaks)*  

---

## **📜 Example Commands**  
| **Option** | **Description** | **Command Equivalent** |
|------------|----------------|-----------------------|
| **4** | Show CPU Info | `cat /proc/cpuinfo` |
| **21** | Check SSD/HDD | `cat /sys/block/sda/queue/rotational` |
| **24** | Control LED Brightness | `echo 100 > /sys/class/leds/inputX::capslock/brightness` |
| **37** | Adjust Screen Brightness | `echo Brightness > /sys/class/backlight/intel_backlight/brightness`

---

## **⚠️ Warning & Safety**  
- **Use at your own risk!** Some options (Screen And LED Brightness) can damage hardware if misused.  
- **Backup important data** before modifying kernel settings.  

---

## **📌 Roadmap (Future Updates)**:
- Add More +10 Hardware Options 🏅 

---

## **💡 Why This Project?**  
Most Linux tools do **one thing well**—this toolkit does **everything**. Whether you're debugging, optimizing, or just exploring Linux internals, this is your **ultimate command-line companion**.  

---

## **📬 Contact & Contribution**  
- **GitHub**: [@bugbounty88](https://github.com/bugbounty88)  
- **Email**: hamza2002gaming@gmail.com  
- **Feel free to contribute!** Open issues or PRs for new features.  

---

**🎉 Enjoy the Power of Linux at Your Fingertips!** 🐧💻
