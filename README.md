# Raylib 5.5 Project Template

## Description

This is a cross-platform Raylib 5.5 template for Windows and Linux, including a Makefile for building C/C++ projects using Raylib.

## How to Use This Template

```bash
git clone https://github.com/Quack-Duck12/Raylib-5.5-template.git
mv Raylib-5.5-template <YourProjectName>
cd <YourProjectName>
```

* Open `makefile` and change line 4:

```makefile
TARGET_BASE := <YourProjectName>
```

* Build the project:

```bash
make           # Linux or Windows with MSYS/MinGW
mingw32-make   # Windows with MinGW
```

* **Optional:** Additional or custom libraries can be linked during compilation by editing line 11 in the Makefile:

```makefile
CUSTOM_LIBS :=
```

and adding the library flags.

## Directory Structure

```
C:.
│   .gitattributes
│   .gitignore
│   LICENSE
│   makefile
│   README.txt
│
├───assets
├───include
│       raylib.h
│       raymath.h
│       rlgl.h
│
├───lib
│   ├───Linux
│   │       libraylib.a
│   │
│   └───Windows
│           libraylib.a
│
└───src
        main.c
```

## Requirements

* **C Compiler:** GCC (Linux) / MinGW or MSVC (Windows)
* **C++ Compiler:** G++ (if using C++ source files)
* **Raylib 5.5** (static library `libraylib.a` included in `lib` folder)

### Installing Dependencies

#### Ubuntu / Debian-based Linux

```bash
sudo apt update && sudo apt upgrade -y
sudo apt install -y build-essential git libx11-dev libgl1-mesa-dev libpthread-stubs0-dev cmake
```

#### Fedora / RedHat-based Linux

```bash
sudo dnf update -y
sudo dnf install -y @development-tools git libX11-devel mesa-libGL-devel cmake
```

#### Arch Linux / Manjaro

```bash
sudo pacman -Syu --needed base-devel git cmake xorg-x11-server-devel mesa
```

#### OpenSUSE

```bash
sudo zypper refresh
sudo zypper update -y
sudo zypper install -y gcc gcc-c++ make git libX11-devel Mesa-libGL-devel cmake
```

#### Windows (Easy way)

```powershell
winget install --id=MartinStorsjo.LLVM-MinGW.UCRT -e
```

* Ensure `gcc`, `g++`, and `mingw32-make` are in your PATH
* Place `libraylib.a` in `lib\Windows` folder
* Include Raylib headers in `include` folder

## Addons

* **raylib_colors_plus.h**: An optional addon made by [Quack-Duck12 (Jevis)](https://github.com/Quack-Duck12) providing 150+ new colors and additional color definitions.
* Future plans include more color-related functions for easy use of pastels, neon-like colors, alpha variants, and other utilities to extend Raylib's color capabilities.
* To use, include after Raylib:

```c
#include "raylib.h"
#include "raylib_colors_plus.h" // optional
```

* Replace `RAYWHITE` with new colors like `OFFWHITE` or others provided in the addon.

## Credits & Resources

* **Raylib Official Website:** [https://www.raylib.com](https://www.raylib.com)
* **Raylib Cheatsheet (Quick Reference):** [https://www.raylib.com/cheatsheet/cheatsheet.html](https://www.raylib.com/cheatsheet/cheatsheet.html)
* **Raylib Examples:** [https://github.com/raysan5/raylib/tree/master/examples](https://github.com/raysan5/raylib/tree/master/examples)
* **Credits:**

  * Raylib by [raysan5](https://github.com/raysan5)
  * Template and all additions/changes by [Quack-Duck12 (Jevis)](https://github.com/Quack-Duck12)

## Features

* Cross-platform (Windows + Linux)
* Supports both C and C++ sources
* Automatic OS detection for build commands
* Configurable build modes: debug, normal, release
* Separate object directories per OS
* Easy run commands: `make run` and `make release-run`
* Cleanup commands: `make clean`, `make nuke`

## How to Build & Run

### Build

```bash
make           # Build in release mode (default)
make debug     # Build in debug mode
make normal    # Build in normal mode
```

### Run

```bash
make run           # Build and run (debug by default)
make release-run   # Build release and run
```

### Cleanup

```bash
make clean        # Remove object files and executable
make clean-output # Remove only the executable
make nuke         # Remove all build artifacts
```
