# KEYLOGGER

## Disclaimer

**Purpose:**
This project is intended **solely for educational, research, or ethical security testing purposes**, such as penetration testing, cybersecurity research, or authorized red teaming exercises. It is designed to help security professionals and students understand how keyloggers work, their potential risks, and how to defend against them.


### **Legal and Ethical Use**
1. **Unauthorized Use is Illegal:**
   - Using this software to monitor or log keystrokes **without explicit, informed consent** from the target user or system owner is **illegal** in most jurisdictions.
   - Unauthorized use may violate laws such as:
     - The **Computer Fraud and Abuse Act (CFAA)** (United States)
     - The **General Data Protection Regulation (GDPR)** (European Union)
     - The **Cybercrime Act** (various countries)
     - Local privacy and surveillance laws.

2. **Consent is Mandatory:**
   - You **must** obtain **written permission** from the owner of the system or network before deploying this tool.
   - Use only on systems you own or have explicit authorization to test.

3. **Prohibited Activities:**
   - Do **not** use this tool for:
     - Spying on individuals without their knowledge.
     - Stealing passwords, personal data, or sensitive information.
     - Any form of malicious activity, harassment, or unauthorized surveillance.

4. **No Liability:**
   - The author(s) of this project are **not responsible** for any misuse, damage, or legal consequences arising from the improper use of this software.
   - By using this tool, you agree to assume full responsibility for your actions and comply with all applicable laws.

5. **Ethical Guidelines:**
   - Always prioritize **ethical hacking principles**.
   - Respect privacy and data protection rights.
   - Report vulnerabilities responsibly if discovered during testing.

### **Warning**
- This tool is **not** intended for illegal activities.
- The author(s) **condemn** any use of this software for harmful or unethical purposes.
- If you are unsure about the legality of your intended use, **consult a legal professional**.

### **Acknowledgment**
By downloading, installing, or using this software, you acknowledge that you have read this disclaimer, understand its terms, and agree to use the tool **only for lawful and ethical purposes**.


### **Final Note**
If you are a security researcher or student, consider using this project in controlled environments (e.g., virtual machines, lab setups) to avoid accidental misuse.

**Use responsibly. Stay legal. Stay ethical.**

---

## Scope
- [x] Linux terminal
- [ ] X11
- [ ] Wayland
- [ ] Windows

## Next steps
- [ ] Remote listening server
- [ ] Handle multiple keyloggers

## Misc
- Only QWERTY and AZERTY layouts are supported

---

**How to compile the project**

```bash
mkdir build && cd build
cmake ..
make
sudo ./keylogger
```