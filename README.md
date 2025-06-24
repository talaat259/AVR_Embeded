# AVR_Embedded

An embedded systems project built using the AVR microcontroller architecture. This project follows a modular layered architecture including MCAL, HAL, and APP layers, with a clear separation between hardware abstraction and application logic.

## 📁 Project Structure

```text
├── .metadata / .settings           # IDE configuration files (Eclipse)
├── APP                             # Application layer (main project logic)
├── Debug                           # Build output (auto-generated)
├── HAL                             # Hardware Abstraction Layer
├── LIB                             # Shared libraries and utility functions
├── MCAL                            # Microcontroller Abstraction Layer (low-level drivers)
├── RemoteSystemsTempFiles          # Temporary files (remote system support)
├── .cproject / .project            # Eclipse CDT project files
├── README.md                       # Project documentation

## 🧱 Layer Descriptions

- **MCAL (Microcontroller Abstraction Layer)**  
  Provides direct, low-level control over AVR peripherals such as GPIO, Timers, UART, ADC, etc.

- **HAL (Hardware Abstraction Layer)**  
  Wraps MCAL functionality into higher-level, user-friendly APIs that simplify application development.

- **APP (Application Layer)**  
  Contains the main logic of the project and uses HAL APIs to implement desired features.

- **LIB (Libraries)**  
  Contains shared helper functions, custom data types, macros, and utilities.

### Build Commands

```bash
make all       # Build the project
make clean     # Clean build artifacts

👤 Author
Talaat Sallam
GitHub: talaat259
