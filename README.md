<!-- *********************************************************************** -->
<!--                                                                         -->
<!--                                                      :::      ::::::::  -->
<!-- README.md                                          :+:      :+:    :+:  -->
<!--                                                  +:+ +:+         +:+    -->
<!-- By: bpaineau <bpaineau@student.42angouleme.fr  +#+  +:+       +#+       -->
<!--                                              +#+#+#+#+#+   +#+          -->
<!-- Created: 2026/11/18 14:39:30 by bpaineau          #+#    #+#            -->
<!-- Updated: 2026/11/18 14:41:29 by bpaineau         ###   ########.fr      -->
<!--                                                                         -->
<!-- *********************************************************************** -->

*This project has been created as part of the 42 curriculum by bpaineau.*

# get_next_line

## Description
`char *get_next_line(int fd)` returns one line per call (including its
trailing `\n`), and `NULL` once the end of the file is reached or if an
error occurs. A `static char *stash` keeps whatever was read with `read()`
but not yet returned, so no global variable is needed.

## Instructions
Compile with:

    cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c

`BUFFER_SIZE` is optional: a default value is defined in `get_next_line.h`.

## How it works
- `read_to_stash`: reads `BUFFER_SIZE` bytes at a time and appends them to
  the stash until a `\n` is found or the end of the file is reached.
- `extract_line`: copies the stash up to and including the first `\n`.
- `clean_stash`: frees the stash and keeps only what follows the `\n`.

The function reads as little as possible: if the stash already contains a
newline, no call to `read()` is made.

## Resources
- `read(2)`, `malloc(3)` man pages
- 42 get_next_line subject

## AI usage
Claude was used as a tutor to explain the logic (stash, read loop) and to
help debug. The code was written and tested by me.
