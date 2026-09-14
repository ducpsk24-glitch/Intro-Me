$RepoUser = "ducpsk24-glitch"
$RepoName = "Intro-Me"
$FileName = "introduction.c"
$ToolName = "intro"
$InstallDir = "$env:LOCALAPPDATA\Microsoft\WindowsApps"

Write-Host "Downloading and installing $ToolName..." -ForegroundColor Cyan

$SourceUrl = "https://raw.githubusercontent.com/$RepoUser/$RepoName/main/$FileName"
$TempFile = "$env:TEMP\$ToolName.c"

Invoke-WebRequest -Uri $SourceUrl -OutFile $TempFile

if (Get-Command gcc -ErrorAction SilentlyContinue) {
    gcc $TempFile -o "$InstallDir\$ToolName.exe"
    Remove-Item $TempFile
    Write-Host "`nInstallation completed! Open a new Terminal or CMD and type '$ToolName' to run." -ForegroundColor Green
} else {
    Write-Host "Error: MinGW/GCC (gcc) is not installed on this system." -ForegroundColor Red
}