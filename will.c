#include <stdio.h>
#include <glob.h>

int main(){
	
	 typedef struct {
               size_t   gl_pathc;    /* Count of paths matched so far  */
               char   **gl_pathv;    /* List of matched pathnames.  */
               size_t   gl_offs;     /* Slots to reserve in gl_pathv.  */
           } glob_t;

	glob_t globbuf;

	globbuf.gl_offs = 2;
           glob("*.?", GLOB_DOOFFS, NULL, &globbuf);
           globbuf.gl_pathv[0] = "ls";
           globbuf.gl_pathv[1] = "-l";
           execvp("ls", &globbuf.gl_pathv[0]);
	
	return 0;
}
