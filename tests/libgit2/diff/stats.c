#include "diff_helpers.h"
	git_oid__fromstr(&oid, oidstr, GIT_OID_SHA1);
	cl_git_pass(diff_from_buffer(&diff, input, strlen(input)));