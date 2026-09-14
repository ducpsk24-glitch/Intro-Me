#!/bin/bash
REPO_USER="ducpsk24-glitch"
REPO_NAME="Intro-Me"
FILE_NAME="introduction.c"
TOOL_NAME="intro"

echo "Installing $TOOL_NAME..."

curl -fsSL "https://raw.githubusercontent.com/$REPO_USER/$REPO_NAME/main/$FILE_NAME" -o /tmp/$TOOL_NAME.c

if command -v gcc &> /dev/null; then
    gcc /tmp/$TOOL_NAME.c -o /tmp/$TOOL_NAME
    sudo mv /tmp/$TOOL_NAME /usr/local/bin/$TOOL_NAME
    sudo chmod +x /usr/local/bin/$TOOL_NAME
    rm /tmp/$TOOL_NAME.c
    echo -e "\nInstallation completed! Type '$TOOL_NAME' anywhere to run."
else
    echo "Error: gcc is not installed on this system. Please install gcc first."
    exit 1
fi