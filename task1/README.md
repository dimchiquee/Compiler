# compiler))

Требования:
- Любой компилятор языка C++

Эта программа позволяет пользователю ввести цепочки для языков L1 и L2, а затем конкатенирует их, создавая новый язык. 
Программа также выполняет проверку на количество цепочек и их длину.

1. Ввести цепочки языков в соответствующие векторы
2. Запустите программу.
3. Проверяются следующие условия: количество цепочек не превышает 10000, длина каждой цепочки не превышает 100 символов.
4. Если условия выполняются, программа выполнит конкатенацию цепочек из L1 и L2, создавая новый язык, и выведет его на экран.
5. Если условия не выполняются, программа выведет сообщение об ошибке.

Пример 1:

L1 {"abc", "def"}
L2 {"123" "456"}

Результат: abc123 abc456 def123 def456

Пример 2 (Условия не выполняются):

Результат: Количество цепочек слишком велико
Результат: Длина цепочки слишком велика