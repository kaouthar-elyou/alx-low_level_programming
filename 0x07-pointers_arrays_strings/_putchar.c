# inclure  < unistd.h >

/**
* _putchar - écrit le caractère c sur stdout
* @c : Le caractère à imprimer
*
* Retour : En cas de succès 1.
* En cas d'erreur, -1 est renvoyé et errno est défini de manière appropriée.
 */
int  _putchar (char c)
{
	return (écrire(1, &c, 1));
}
