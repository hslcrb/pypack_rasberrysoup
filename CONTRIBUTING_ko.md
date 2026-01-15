# 🛠 라즈베리수프 기여 가이드

이 문서는 **라즈베리수프(Rasberrysoup)** Python 라이브러리에 기여하는 절차를 안내합니다.

---

## 🏗 개발 환경 설정

1. **저장소 클론(Clone):**
   ```bash
   git clone https://github.com/hslcrb/pypack_rasberrysoup.git
   cd pypack_rasberrysoup
   ```

2. **편집 모드로 설치:**
   ```bash
   pip install -e .
   ```

3. **테스트 실행:**
   ```bash
   python3 tests/test_math.py
   ```

## 📝 기여 방법

1. **새 기능 추가:** `rasberrysoup/__init__.py`에 새로운 수학 공식을 구현하세요.
2. **테스트 추가:** `tests/test_math.py`에 해당하는 테스트 케이스를 작성하세요.
3. **문서화:** 필요한 경우 `README.md` (및 `README_ko.md`)를 업데이트하세요.
4. **스타일:** Python 코드는 PEP 8 가이드라인을 따라주세요.

## 📜 법적 고지

이 프로젝트에 기여함으로써 귀하는 귀하의 기여 내용이 이 저장소와 동일한 [MIT 라이선스](LICENSE) 하에 라이선스됨에 동의하는 것으로 간주됩니다.

**작성자:** Rheehose (Rhee Creative)
**연도:** 2008-2026
