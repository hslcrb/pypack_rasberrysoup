# 🌐 HSLCRB VCPKG Registry Hub

![Registry Hub Banner](registry_hub_banner.png)

> **The Central Pulse for HSLCRB C++ Ecosystem**

Welcome to the **HSLCRB Registry Hub**, a specialized vcpkg git registry curated by **Rheehose (Rhee Creative)**. This repository serves as a professional "Package Store" for high-quality C++ libraries, enabling seamless dependency management and rapid deployment.

---

## 📦 Featured Packages

Our registry continuously grows with purpose-built libraries for engineering, mathematics, and UI development.

| Package | Status | Description |
| :--- | :--- | :--- |
| [**Rasberrysoup**](./ports/rasberrysoup) | `v1.0.0` | 🍧 High-performance math keyword library. |
| *Network Tools* | `Coming Soon` | Advanced socket and protocol utilities. |
| *UI Frame* | `Coming Soon` | Modern glassmorphic interface components. |

---

## 🚀 How to Sync Your Project

To integrate our professional tools into your C++ project, simply register this hub in your `vcpkg-configuration.json` file.

### 1. Register the Hub
```json
{
  "registries": [
    {
      "kind": "git",
      "repository": "https://github.com/hslcrb/vcpkg_hslcrb-s_pkgs",
      "packages": [ "rasberrysoup" ]
    }
  ]
}
```

### 2. Deploy
Use the standard vcpkg command to pull any package from our hub:
```bash
vcpkg install <package-name>
```

---

## 🏛️ Repository Architecture

This hub is built on the official [vcpkg Registry Specification](https://learn.microsoft.com/en-us/vcpkg/concepts/registries), ensuring maximum compatibility and reliability.

- `/ports`: Detailed build instructions and metadata for each package.
- `/versions`: A robust database for version tracking and binary stability.
- `CONTRIBUTING.md`: Workflow for adding or updating packages.

---

## 🤝 Contribution & Governance
Managed by **Rheehose (Rhee Creative)**. We uphold the highest standards of code quality and documentation. See [CONTRIBUTING.md](CONTRIBUTING.md) for more details.

---

**© 2008-2026 Rheehose (Rhee Creative). All Rights Reserved.**
Distributed under the **MIT License**.
