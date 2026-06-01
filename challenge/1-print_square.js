#!/usr/bin/node

// On ajoute explicitement le radix 10 pour le test automatique
const size = parseInt(process.argv[2], 10);

if (isNaN(size)) {
  console.log('Missing size');
} else {
  for (let i = 0; i < size; i++) {
    let row = '';

    for (let j = 0; j < size; j++) {
      row += '#';
    }

    // console.log ajoute automatiquement un retour à la ligne (\n)
    console.log(row);
  }
}
