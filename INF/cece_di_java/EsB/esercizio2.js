function calcolaPunti(m, c) {
    // Intersezione con l'asse y (x = 0)
    const intersezioneY = c;
    
    // Intersezione con l'asse x (y = 0), se m != 0
    const intersezioneX = m !== 0 ? -c / m : null;
  
    // Coordinate y per x = -1
    const yPerXminus1 = m * (-1) + c;
  
    // Coordinate y per x = 10
    const yPerX10 = m * 10 + c;
  
    // Restituire i risultati
    return {
      intersezioneY: [0, intersezioneY],
      intersezioneX: intersezioneX !== null ? [intersezioneX, 0] : 'Nessuna intersezione con l\'asse X (retta parallela all\'asse X)',
      puntoXminus1: [-1, yPerXminus1],
      puntoX10: [10, yPerX10]
    };
  }
  
  // Esempio di utilizzo
  const m = 2;  // Coefficiente angolare
  const c = -3; // Intercetta
  
  const risultati = calcolaPunti(m, c);
  console.log("Intersezione con l'asse Y:", risultati.intersezioneY);
  console.log("Intersezione con l'asse X:", risultati.intersezioneX);
  console.log("Punto per x = -1:", risultati.puntoXminus1);
  console.log("Punto per x = 10:", risultati.puntoX10);
  