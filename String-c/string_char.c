/**
 * String - Special Charaters
 * Comme les chaînes de caractères doivent être écrites entre guillemets, le langage C interprétera mal cette chaîne et générera une erreur:
 * \'	'	Single quote
 * \"	"	Double quote
 * \\	\	Backslash
 */

 // insert \"" //
 #include <stdio.h>
 int main() {
	char txt[] = "We are the so-called \"Vikings\" form the north.";
	printf("%s", txt);

	return 0;
 }

 // insert \'' //
 #include <stdio.h>
 int main() {
	char txt[] = "it\'s alright.";
	printf("%s", txt);

	return 0;
 }

 // insert: \\ //
 #include <stdio.h>
 int main() {
	char txt[] = "The charcater \\ is called backslash.";

	return 0;
 }


 /**
	* \n New line
	* \t Tab
	* \0 Null
  */
