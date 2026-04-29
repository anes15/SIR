# SIR (Shortcut Icon Remover) 🛠️

---

## 🌍 Language / اللغة
[**العربية**](#-باللغة-العربية) | [**English**](#-english-version)

---

## 🇸🇦 باللغة العربية

**SIR** هو أداة سطر أوامر (CLI) خفيفة وقوية مكتوبة بلغة **++C**، مصممة لمستخدمي ويندوز الذين يفضلون مظهر سطح مكتب نظيفاً وخالياً من أسهم الاختصارات التقليدية.

### ✨ المميزات
*   🚀 **إزالة فورية:** حذف سهم الاختصار (Shortcut Arrow) من جميع الأيقونات.
*   🔄 **استعادة كاملة:** خيار للعودة إلى شكل الأسهم الافتراضي في أي وقت.
*   🛡️ **دعم المعماريات:** متوافق مع أنظمة **64-bit** و **32-bit**.

### 🚀 كيف يعمل؟
يقوم البرنامج بتعديل المسار التالي في سجل النظام:
`HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\Shell Icons`
عن طريق إنشاء أو حذف القيمة `29` التي تتحكم في مظهر السهم.

### ⚙️ المتطلبات
*   **نظام التشغيل:** Windows 7 / 8 / 10 / 11.
*   **الصلاحيات:** يجب تشغيل البرنامج **كـ مسؤول (Administrator)**.

### 📥 طريقة الاستخدام
1.  تحميل الملف التنفيذي `SIR.exe`.
2.  النقر بيمين الفأرة واختيار **تشغيل كمسؤول**.
3.  اختر `1` للإزالة، `2` للاستعادة، أو `3` للخروج.

---

## 🇺🇸 English Version

**SIR** is a lightweight and powerful command-line tool (CLI) written in **C++**, designed for Windows users who prefer a clean desktop appearance by removing traditional shortcut arrows.

### ✨ Features
*   🚀 **Instant Removal:** Completely hide the shortcut arrow overlay from all icons.
*   🔄 **Full Restoration:** Option to restore the default Windows shortcut arrows at any time.
*   🛡️ **Architecture Support:** Fully compatible with both **64-bit** and **32-bit** systems.

### 🚀 How It Works
The program manipulates the following registry key:
`HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\Shell Icons`
By creating or deleting the `29` value which controls the arrow overlay.

### ⚙️ Requirements
*   **OS:** Windows 7 / 8 / 10 / 11.
*   **Permissions:** Must be **Run as Administrator**.

### 📥 Usage
1.  Download the `SIR.exe` executable.
2.  Right-click and select **Run as Administrator**.
3.  Choose `1` to Remove, `2` to Restore, or `3` to Exit.

---

## ⚠️ Disclaimer / تنبيه
> **EN:** This tool modifies the Windows Registry. Use it at your own risk. It is recommended to create a System Restore Point before use.  
> **AR:** هذه الأداة تقوم بتعديل سجل النظام. استخدامها يقع على مسؤوليتك الخاصة. يُنصح بإنشاء نقطة استعادة للنظام قبل البدء.

---
**Developed by: [Your Name]**  
**License: MIT**
