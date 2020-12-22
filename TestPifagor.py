import unittest

from Pifagor import pifagor

class TestSearch(unittest.TestCase):
  
    def test_0(self):
      a = 3
      b = 4
      self.assertEqual(pifagor(a, b), 5)

    def test_1(self):
      a = 0.3
      b = 0.4
      self.assertEqual(pifagor(a, b), 0.5)

    def test_2(self):
      a = 3.5
      b = 4
      self.assertEqual(pifagor(a, b), 5.315)

    def test_3(self):
      a = 0
      b = 0
      self.assertEqual(pifagor(a, b), "Некорректные данные.")

    def test_4(self):
      a = 0
      b = 3
      self.assertEqual(pifagor(a, b), "Некорректные данные.")

    def test_5(self):
      a = 3
      b = 0
      self.assertEqual(pifagor(a, b), "Некорректные данные.")

    def test_6(self):
      a = -3
      b = -4
      self.assertEqual(pifagor(a, b), "Некорректные данные.")

    def test_7(self):
      a = -3
      b = 0
      self.assertEqual(pifagor(a, b), "Некорректные данные.")

    def test_8(self):
      a = 0
      b = -4
      self.assertEqual(pifagor(a, b), "Некорректные данные.")

    def test_9(self):
      a = "a"
      b = "a"
      self.assertEqual(pifagor(a, b), "Вы ввели строку.")

    def test_10(self):
      a = "a"
      b = 0
      self.assertEqual(pifagor(a, b), "Вы ввели строку.")

    def test_11(self):
      a = 0
      b = "a"
      self.assertEqual(pifagor(a, b), "Вы ввели строку.")



if __name__ == "__main__":
  unittest.main()
