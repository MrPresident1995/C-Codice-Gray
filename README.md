Un codice Gray è un codice di codifica binaria a lunghezza fissa, il quale prevede che passando da un intero al successivo cambi un solo bit nella codifica.
Un codice Gray può essere generato mediante una procedura ricorsiva, ricordando che:
- al passo base, la codifica prevede solamente i valori 0 e 1 (codifica a un bit)
- i passi successivi generano la sequenza a n bit specchiando la sequenza n-1-esima, cioè invertendo l'ordine delle cifre, e premettendo il valore 0 alla porzione "diretta" e il valore 1 alla porzione "specchiata"
- la procedura prosegue allo stesso modo per tutti i passaggi successivi.


      1 bit:
      0
      1


      2 bit:
      00
      01
      11
      10


      3 bit:
      000
      001
      011
      010
      110
      111
      101
      100
