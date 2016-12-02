/*
  FUSE: Filesystem in Userspace
  This skeleton code is made from the function prototypes found in
  /usr/include/fuse/fuse.h Copyright (C) 2001-2007  Miklos Szeredi <miklos@szeredi.hu>
  His code is licensed under the LGPL v2.
*/

#define FUSE_USE_VERSION 26

#ifdef linux
#define _XOPEN_SOURCE 500
#endif

#include <fuse.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <dirent.h>
#include <errno.h>
#include <stdint.h>
#include <sys/statfs.h>
#include <stdbool.h>
#include <stdlib.h>
#ifdef HAVE_SETXATTR
#include <sys/xattr.h>
#endif

#include "fusefs.h"


static void *sfs_mount(struct fuse_conn_info *conn) {
}

static void sfs_unmount (void *private_data) {
}


 static int sfs_getattr(const char *path, struct stat *stbuf)
{

}

static int sfs_mkdir(const char *path, mode_t mode)
{
    	   	
    return 0;
}


static int sfs_readdir(const char *path, void *buf, fuse_fill_dir_t filler,off_t offset, struct fuse_file_info *fi)
{
return 0;
}


static int sfs_create(const char *path, mode_t mode, dev_t rdev)
{
    return 0;
}


static int sfs_read(const char *path, char *buf, size_t size, off_t offset,struct fuse_file_info *fi)
{
return 0;
}


static int sfs_write(const char *path, const char *buf, size_t size,
                     off_t offset, struct fuse_file_info *fi)
{
    return 0;
}

static int sfs_remove_dir(const char *path)
{
	return 0;
}

static int sfs_delete(const char *path)
{
    return 0;
}



static struct fuse_operations sfs_oper = {
    .init    = sfs_mount,
    .destroy = sfs_unmount,
    .getattr = sfs_getattr,
    .mkdir	 = sfs_mkdir,
    .readdir = sfs_readdir,
    .mknod	 = sfs_create,
    .read	 = sfs_read,
    .write	 = sfs_write,
    .unlink	 = sfs_delete,
    .rmdir       = sfs_remove_dir,
};

int main(int argc, char *argv[])
{
    umask(0); 
    return fuse_main(argc, argv, &sfs_oper, NULL);
}

