Set-Location 'C:\Users\moon\Desktop\Library-Management-System-'

$compiler = 'C:\msys64\mingw64\bin\g++.exe'
$output = '.\bin\Debug\LAB EXERCISE LAST 2.exe'

& $compiler main.cpp book.cpp member.cpp library.cpp -std=c++17 -Wall -Wextra -pedantic -o $output

if ($LASTEXITCODE -eq 0) {
    & $output
}