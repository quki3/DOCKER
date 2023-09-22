### you can do this 
1. `sudo apt update`
2. `sudo apt install -y docker.io`
3. `sudo systemctl enable docker --now`
- alternatively
4. `sudo usermod -aG docker $USER` //this give the chance or run docker without requiring root

### or you can do in this form
- <a href="https://get.docker.com/">safety form</a>
1. - `curl -fsSL https://get.docker.com/ | sh`
2. - `sudo usermod -aG docker <your_username>` optional This step is required to be able to run Docker commands as a non-root user. You will have to log out and log back in for the change to take effect.
`
