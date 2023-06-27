# DOCKER
` Last update jun 26 2023 `
# INTRODUCTION
	
## What is DOCKER?

Docker is a set of platform as a service products that use OS-level virtualization to deliver software in packages called containers.
SO Docker enables you to automate the deployment, scaling, and management of applications using containerization.

## What is a container?

A container is a lightweight, standalone, and executable software package that includes everything needed to run an application,
including the code, runtime, system tools, libraries, and settings. Containers provide a consistent and isolated environment for applications to run,
regardless of the underlying infrastructure.
So is also a way to package application with all the necessary dependencies and configuration
Is a very portable artifact, easily shared and moved around this portability make more efficient the deploy and develop
## where do container live?

the containers leave in container repository this is a special type of storage for containers many compannies have private repositories they 
store all their conteiners.
Simply put, a container is a sandboxed process on your machine that is isolated from all other processes on the host machine. That isolation <a href="https://medium.com/@saschagrunert/demystifying-containers-part-i-kernel-space-2c53d6979504">leverages kernel namespaces and cgroups,</a>

#@@you@stayed@here in doc chroot

so but we have public repositories that contain many of the container that you want <a href="https://hub.docker.com/">docker hub</a>

				/* HERE min 4:59*/

## What is a container repository?

	
## Docker vs virtual machine
Architecture: Docker containers run on a host operating system and share the host's kernel,
while VMs run on a hypervisor and each have their own operating system.
This difference makes containers more lightweight and faster to start compared to VMs.

## INSTALATION

## challenges
1. 1/
   - a/ run an own chroot environment, your <a href='https://en.wikipedia.org/wiki/Chroot'>doc</a>.
	
