#include "pch.h"
#include "CppUnitTest.h"
#include "Proga2.cpp"
#include "ClassHf.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(test_count)
		{
			code test;
			int counting[255];
			for (int i = 0; i < 255; i++) {
				counting[i] = 0;
			}
			string help = "aaabbbbb";
			test.count(help, counting);
			Assert::AreEqual(3, counting[0]);
			Assert::AreEqual(5, counting[3]);
		}
		TEST_METHOD(test_count2)
		{
			code test;
			int counting[255];
			for (int i = 0; i < 255; i++) {
				counting[i] = 0;
			}
			string help = "aaabbbbbcc";
			test.count(help, counting);
			Assert::AreEqual(3, counting[0]);
			Assert::AreEqual(5, counting[3]);
			Assert::AreEqual(2, counting[9]);
		}
		TEST_METHOD(test_check)
		{
			code test;
			string help = "aaabbbbb";
			bool testing = test.check(help, 'a', 3);
			Assert::AreEqual(true, testing);
		}
		TEST_METHOD(test_tree)
		{
			code test;
			int counting[255];
			for (int i = 0; i < 255; i++) {
				counting[i] = 0;
			}
			string help = "aaabbbbb";
			test.count(help, counting);
			test.tree(help, counting);
			Assert::AreEqual('a', test.nod.Head->data.data.data);
			Assert::AreEqual('a', test.nod.Head->next->data.data.data);
		}
		TEST_METHOD(test_tree2)
		{
			code test;
			int counting[255];
			string save = "";
			int save1[255];
			string help = "aaabbbbb";
			for (int i = 0; i < 255; i++) {
				counting[i] = 0;
			}
			test.count(help, counting);
			test.print(help, counting, save, save1);

			string testing = test.sort(save, save1);
			test.tree(testing, save1);
			Assert::AreEqual('b', test.nod.Head->data.data.data);
			Assert::AreEqual('a', test.nod.Head->next->data.data.data);
		}
		TEST_METHOD(test_sort)
		{
			code test;
			int counting[255];
			for (int i = 0; i < 255; i++) {
				counting[i] = 0;
			}
			string help = "aaabbbbb";
			string testing = test.sort(help, counting);
			Assert::AreEqual(testing[0], 'a');
		}
		TEST_METHOD(test_coding)
		{
			code test;
			int counting[255];
			string save = "";
			int save1[255];
			string help = "aaabbbbb";
			for (int i = 0; i < 255; i++) {
				counting[i] = 0;
			}
			test.count(help, counting);
			test.print(help, counting, save, save1);

			string testing = test.sort(save, save1);
			test.tree(testing, save1);
			test.coding(test.nod.Head, save1);
			int i = 0;
			if (test.nod.Head->data.data.key == 8)
				i++;
			Assert::AreEqual(i, 1);
		}
		TEST_METHOD(test_get)
		{
			code test;
			int counting[255];
			string save = "";
			int save1[255];
			string help = "aaabbbbb";
			for (int i = 0; i < 255; i++) {
				counting[i] = 0;
			}
			test.count(help, counting);
			test.print(help, counting, save, save1);

			string testing = test.sort(save, save1);
			test.tree(testing, save1);
			test.coding(test.nod.Head, save1);
			test.get(&test.nod.Head->data);

			Assert::AreEqual(test.nod2.Head->data.data.data, 'b');
		}
		TEST_METHOD(tmain)
		{
			code test;
			int counting[255];
			string save = "";
			int save1[255];
			string help = "aaabbbbb";
			for (int i = 0; i < 255; i++) {
				counting[i] = 0;
			}
			test.count(help, counting);
			test.print(help, counting, save, save1);

			string testing = test.sort(save, save1);
			test.tree(testing, save1);
			test.coding(test.nod.Head, save1);
			test.code_main(test.nod.Head);
			string str = " ";
			str[0] = 'b';
			Assert::AreEqual(test.tre2.Head->data.key, str);
		}
		TEST_METHOD(reverse)
		{
			code test;
			string testing = "abcd";
			string help = test.reverse(testing);
			Assert::AreEqual(help, (string)"dcba");
		}
		TEST_METHOD(test_get2)
		{
			code test;
			int counting[255];
			string save = "";
			int save1[255];
			string help = "aaabbbbb";
			for (int i = 0; i < 255; i++) {
				counting[i] = 0;
			}
			test.count(help, counting);
			test.print(help, counting, save, save1);

			string testing = test.sort(save, save1);
			test.tree(testing, save1);
			test.coding(test.nod.Head, save1);
			test.get2(&test.nod.Head->data);

			Assert::AreEqual(test.nod4.Head->data.data.data, 'b');
		}
		TEST_METHOD(test_final)
		{
			code test;
			int counting[255];
			string save = "";
			int save1[255];
			string help = "aaabbbbb";
			for (int i = 0; i < 255; i++) {
				counting[i] = 0;
			}
			test.count(help, counting);
			test.print(help, counting, save, save1);

			string testing = test.sort(save, save1);
			test.tree(testing, save1);
			test.coding(test.nod.Head, save1);
			test.code_main(test.nod.Head);
			test.print2(test.tre2.Head, testing);
			string help2 = test.finals(test.tre2.Head, help);

			Assert::AreEqual(help2[0], '0');
			Assert::AreEqual(help2[1], '0');
			Assert::AreEqual(help2[3], '1');
		}
	};
}
