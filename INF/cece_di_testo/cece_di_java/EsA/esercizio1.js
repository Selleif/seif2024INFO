// Chiedi all'utente la larghezza, l'altezza e la lunghezza della scatola
let larghezza = parseFloat(prompt("Inserisci la larghezza della scatola (in cm):"));
let altezza = parseFloat(prompt("Inserisci l'altezza della scatola (in cm):"));
let lunghezza = parseFloat(prompt("Inserisci la lunghezza della scatola (in cm):"));

// Calcola il volume della scatola
let volume = larghezza * altezza * lunghezza;

// Mostra il risultato del volume nella console
console.log("Il volume della scatola è: " + volume + " cm³");