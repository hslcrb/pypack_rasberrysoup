# 🍧 Rasberrysoup VCPKG Registry

![Rasberrysoup Banner](rasberrysoup_banner.png)

Welcome to the official **Rasberrysoup** vcpkg registry. This repository hosts high-performance C++ mathematical packages designed by **Rheehose (Rhee Creative)**.

## 🚀 Packages

### 1. Rasberrysoup (v1.0.0)
A C++ header-only library that simplifies complex mathematical formulas into intuitive, easy-to-use keyword calls.

- **Author:** Rheehose (Rhee Creative)
- **Copyright:** 2008-2026
- **Release Date:** 2026-01-15

## 🛠 Usage Instructions

To use this registry in your project, add the following to your `vcpkg-configuration.json` file:

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

Then, install the package using:

```bash
vcpkg install rasberrysoup
```

## 📂 Registry Structure

```plaintext
my-vcpkg-registry/
├── ports/
│   └── rasberrysoup/
│       ├── vcpkg.json
│       └── portfile.cmake
├── versions/
│   ├── baseline.json
│   └── r-/
│       └── rasberrysoup.json
└── README.md
```

## 📜 License

This registry and the Rasberrysoup library are licensed under the **MIT License**.
Copyright © 2008-2026 Rheehose (Rhee Creative).
