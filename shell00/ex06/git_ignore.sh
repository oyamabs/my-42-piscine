git status --ignored=matching --porcelain=2 --short | cut -d' ' -f 2 | cut -d'/' -f 3
