# Introduction to Version Control with Git and GitHub

Version control is an essential skill for programmers. It helps you track changes, collaborate with others, and maintain different versions of your project. We use Git for version control and GitHub for hosting our repositories online.

### Setting Up Git and GitHub

1. **Install Git**:
   - Download Git from https://git-scm.com/download/win
   - Run the installer, using default options

2. **Create a GitHub Account**:
   - Go to https://github.com
   - Sign up for a free account

3. **Configure Git in CLion**:
   - Open CLion
   - Go to File > Settings > Version Control > Git
   - Ensure the Path to Git executable is correct (CLion usually detects it automatically)

### Basic Git Concepts

- **Repository**: A project's folder that Git tracks
- **Commit**: A snapshot of your project at a specific point in time
- **Branch**: A separate line of development
- **Remote**: A version of your repository hosted on a server (like GitHub)

### Using Git with CLion

#### Initial Setup

1. **Create a New Repository**:
   - In CLion, go to VCS > Create Git Repository
   - Select your project folder and click OK

2. **First Commit**:
   - In the Project view, right-click your project folder
   - Select Git > Add
   - Click the Commit button in the top-right corner
   - Enter a commit message (e.g., "Initial commit")
   - Click Commit

3. **Connect to GitHub**:
   - In CLion, go to VCS > Share Project on GitHub
   - Log in to your GitHub account when prompted
   - Enter a repository name and click Share

#### Regular Workflow

1. **Make Changes**: Edit your code as usual in CLion

2. **Commit Changes**:
   - Click the Commit button in the top-right corner
   - Select the files you want to commit
   - Enter a descriptive commit message (e.g ```update: created new comment for main function```)
   - Click Commit and Push

3. **Push to GitHub**:
   - CLion will automatically push your changes to GitHub

4. **Pull Changes** (if collaborating, don't worry about this):
   - Click the Update Project button (blue arrow pointing down) in the top-right corner

### Basic Git Commands (for reference)

While CLion provides a user-friendly interface for Git operations, it's good to know some basic Git commands:

- `git init`: Initialize a new Git repository
- `git add .`: Stage all changes for commit
- `git commit -m "Your message"`: Commit staged changes
- `git push`: Push commits to the remote repository
- `git pull`: Fetch and merge changes from the remote repository, won't be using. 

### Best Practices for Version Control

1. Commit frequently with clear, descriptive messages
2. Create branches for new features or experiments
3. Pull changes before starting work to avoid conflicts
4. Use `.gitignore` to exclude files you don't want to track (CLion creates this automatically)

Remember, version control takes practice to master. Don't worry if it seems complicated at first – start with the basics, and you'll improve over time. I use this daily at work and on personal projects. It is a mandatory process in computer science that is often never taught. 
