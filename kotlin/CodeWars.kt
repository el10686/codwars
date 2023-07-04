class CodeWars {

  fun find(integers: Array<Int>): Int {
    val evens = integers.filter { it.mod(2) == 0 }
    val odds = integers.filter { it.mod(2) != 0 }
    return if (evens.size == 1) evens.single() else odds.single()
  }

  fun evenOrOdd(number: Int): String =
    if (number % 2 == 0) "Even" else "Odd"

  fun multiply(x: Double, y: Double) = x * y

  fun sum(numbers: IntArray): Int =
    numbers.filter { it > 0 }.sum()

  fun makeNegative(x: Int): Int =
    if (x > 0) -x else x

  fun removeChar(str: String): String = str.drop(1).dropLast(1)

  fun squareSum(n: Array<Int>): Int =
    n.sumOf { it * it }

  fun getCount(str: String): Int =
    str.count { it in ("aeiou") }

  fun highAndLow(numbers: String): String =
    numbers.split(" ").map { it.toInt() }.let { "${it.maxOrNull()} ${it.minOrNull()}" }

  fun getMiddle(word: String): String {
    var letters = word.split("")
    while (letters.size > 2) {
      letters = letters.drop(1)
      letters = letters.dropLast(1)
    }

    return letters.joinToString("")
  }

  fun repeatStr(r: Int, str: String): String =
    str.repeat(r)

  fun summation(n: Int): Int =
    (1..n).sum()

  fun noSpace(string: String): String =
    string.replace(" ", "")

  fun findSmallestInt(numbers: List<Int>): Int =
    numbers.minOrNull()!!

  fun litres(time: Double): Int =
    (time * 0.5).toInt()

  fun hero(bullets: Int, dragons: Int): Boolean =
    bullets >= dragons * 2

  fun encodeCd(n: UByte): String {
    val shortBinary = n.toString(2)
    val bitsToFill = 8 - shortBinary.length
    var fullBinary = ""
    repeat(bitsToFill) {
      fullBinary += '0'
    }
    fullBinary += shortBinary
    var represantation = "P"
    fullBinary.reversed().forEach {
      represantation += if (it == '0') {
        represantation.last()
      } else {
        if (represantation.last() == 'P') {
          'L'
        } else {
          'P'
        }
      }
    }

    return represantation
  }

  fun outed(meet: Map<String, Int>, boss: String): String {
    val average = meet.values.sum().plus(meet[boss]!!).div(meet.size)

    return if (average > 5) "Nice Work Champ!" else "Get Out Now!"
  }

  fun accum(string: String): String =
    string.mapIndexed { index, char ->
      char.uppercaseChar() + char.lowercase().repeat(index)
    }.joinToString("-")

  fun findShort(string: String): Int =
    string.split(" ").minOf { it.length }

  fun makeComplement(dna: String): String =
    dna.map {
      when (it) {
        'A' -> 'T'
        'T' -> 'A'
        'C' -> 'G'
        'G' -> 'C'
        else -> {}
      }
    }.joinToString("")

  fun longest(string1: String, string2: String): String =
    string1.plus(string2).toSortedSet().joinToString("")

  fun printerError(string: String): String {
    val errors = string.count { it !in 'a'..'m' }
    val total = string.length

    return "$errors/$total"
  }

  fun twoOldestAges(ages: List<Int>): List<Int> =
    ages.sorted().takeLast(2)
}
