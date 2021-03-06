
#ifndef __REMOTE_PAIRING_H__
#define __REMOTE_PAIRING_H__

void
remote_pairing_kickoff_bypin(const char *pin);

void
remote_pairing_kickoff_byfile(char *path);

int
remote_pairing_init(void);

void
remote_pairing_deinit(void);

#endif /* !__REMOTE_PAIRING_H__ */
