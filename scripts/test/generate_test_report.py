import os

print("📊 Generating consolidated test report...\n")

report_files = [
    "test_results/unit_test.log",
    "test_results/integration_test.log",
    "test_results/mobile_test.log"
]

combined = ""

for file in report_files:
    if os.path.exists(file):
        with open(file, "r") as f:
            combined += f"\n==== 📄 " + file + " ====\n" + f.read()
    else:
        combined += f"\n❗ {file} not found.\n"

with open("test_results/combined_report.txt", "w") as out:
    out.write(combined)

print("✅ Combined test report saved to: test_results/combined_report.txt")
