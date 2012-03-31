PUBLIC mode_t get_mode(ino, mode)
PUBLIC int do_stat()
  attr.a_mask = HGFS_ATTR_MODE | HGFS_ATTR_SIZE | HGFS_ATTR_ATIME |
		HGFS_ATTR_MTIME | HGFS_ATTR_CTIME;
  stat.st_atime = attr.a_atime;
  stat.st_mtime = attr.a_mtime;
  stat.st_ctime = attr.a_ctime;
PUBLIC int do_chmod()
PUBLIC int do_utime()
  attr.a_atime = m_in.REQ_ACTIME;
  attr.a_mtime = m_in.REQ_MODTIME;