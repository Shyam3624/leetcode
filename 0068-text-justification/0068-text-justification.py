class Solution:
  def fullJustify(self, words: List[str], maxWidth: int) -> List[str]:
    result, current_line, num_letters = [], [], 0

    for word in words:
        # Check if adding this word would exceed maxWidth
        if num_letters + len(word) + len(current_line) > maxWidth:
            # Distribute spaces for the current line
            for i in range(maxWidth - num_letters):
                current_line[i % (len(current_line) - 1 or 1)] += ' '
            # Join the words with spaces and add the line to the result
            result.append(''.join(current_line))
            current_line, num_letters = [], 0

        # Add the word to the current line
        current_line.append(word)
        num_letters += len(word)

    # Last line: left-justified
    result.append(' '.join(current_line).ljust(maxWidth))

    return result
