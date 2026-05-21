const symbols = ['🍎','🍌','🍒','🍇','🍓','🍍','🥝','🍉'];
  let cards = [];
  let flippedCards = [];
  let matchedPairs = 0;
  let attempts = 0;

  const gameBoard = document.getElementById('gameBoard');
  const attemptsDisplay = document.getElementById('attempts');
  const resetButton = document.getElementById('reset-btn');

  function shuffle(array) {
    return array.sort(() => Math.random() - 0.5);
  }

  function createBoard() {
    cards = shuffle([...symbols, ...symbols]);
    gameBoard.innerHTML = '';
    matchedPairs = 0;
    attempts = 0;
    attemptsDisplay.textContent = 'Attempts: 0';
    flippedCards = [];

    cards.forEach((symbol, index) => {
      const card = document.createElement('div');
      card.classList.add('card');
      card.dataset.symbol = symbol;
      card.dataset.index = index;
      card.textContent = '';
      card.addEventListener('click', handleCardClick);
      gameBoard.appendChild(card);
    });
  }

  function handleCardClick(e) {
    const card = e.currentTarget;

    if (card.classList.contains('flipped') || flippedCards.length === 2) return;

    card.textContent = card.dataset.symbol;
    card.classList.add('flipped');
    flippedCards.push(card);

    if (flippedCards.length === 2) {
      attempts++;
      attemptsDisplay.textContent = `Attempts: ${attempts}`;
      const [first, second] = flippedCards;

      if (first.dataset.symbol === second.dataset.symbol) {
        flippedCards = [];
        matchedPairs++;
        if (matchedPairs === symbols.length) {
          setTimeout(() => alert(`You won in ${attempts} attempts!`), 300);
        }
      } else {
        setTimeout(() => {
          first.textContent = '';
          second.textContent = '';
          first.classList.remove('flipped');
          second.classList.remove('flipped');
          flippedCards = [];
        }, 800);
      }
    }
  }

  resetButton.addEventListener('click', createBoard);

  // Initialize the game
  createBoard();