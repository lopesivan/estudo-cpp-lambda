#!/usr/bin/env bash

cat <<EOF
---
title: Lambda expression in modern C++
author: Ivan Lopes (lopesivan.ufrj@gmail.com)
date:   2021-11-22
---

descrição

EOF

ls example_1.* |
	sort -t. -k2 -n |
	sed \
		-e 'h' \
		-e 'g;s/^/\n---\n# /' \
		-e 'p' \
		-e 'i\`\`\`file' \
		-e 'x;s/^/path: .\//' \
		-e 'alang: cpp\n\`\`\`'

cat <<EOF

---
# Contato

**lopesivan.ufrj@**@gmail.com

/* -*- vim: set ts=4 sw=4 tw=64 ft=markdown: -*- */
EOF

echo lookatme -e file_loader slide.md >&2

exit 0
