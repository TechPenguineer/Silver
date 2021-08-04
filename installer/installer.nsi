OutFile "Setup-Silver-Compiler.exe"
Name "Silver - 1.0.0"
VIProductVersion "1.0.0"
Section "Main" 0
    WriteUninstaller "Silver-Compiler-Uninstall.exe"
    InstallDir "$APPDATA\Silver"

SectionEnd

Section "uninstall" 
    # your code here
SectionEnd