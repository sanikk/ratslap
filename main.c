/* vim:set ts=4 sw=4 tw=80 et cindent ai si cino=(0,ml,\:0:
 * ( settings from: http://datapax.com.au/code_conventions/ )
 */

/**********************************************************************
    RatSlap
    Copyright (C) 2016 Todd Harbour

    This program is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License
    version 2 ONLY, as published by the Free Software Foundation.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program, in the file COPYING or COPYING.txt; if
    not, see http://www.gnu.org/licenses/ , or write to:
      The Free Software Foundation, Inc.,
      51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 **********************************************************************/

#include <stdio.h>

#include "app.h"
#include "git.h"
#include "log.h"

int main (int argc, char *argv[]) {
    printf("%s v%s (BUILT: %s)\n", (APP_NAME), (APP_VERSION), (BUILD_DATE));
    printf("%s\n", (APP_COPYRIGHT));

    log_init();



    log_end();

    return 0;
}
