# Use a lightweight Python base image
FROM python:3.12-slim

# Set working directory
WORKDIR /usr/src/app

# Copy project files
COPY . .

# Install the package
RUN pip install --no-cache-dir .

# Run the demo script by default
CMD ["python3", "demo_run.py"]
