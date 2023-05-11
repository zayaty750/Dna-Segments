#include "DNAA.h"
#include<ctime>

DNAA::DNAA(string data) :root(new DNA('/')), countnodes(0), countstrings(0) {
	insert(data);
}

// Check if the dna if valid or not.
bool DNAA::check(string data)
{
	bool correct = true;
	int x = data.length();
	if (data.length() % 3 != 0) {
		return "Data is invalid .The number of characters must be divisible by 3";
		correct = false;
	}
	//even bn2as mnha wahda 3shan tob2a odd
	if (correct == true && x % 2)
	{
		x = x - 1;
	}
	//lw msh % l 2 aw 3 
	else if (correct == true)
	{
		x = x - 2;
	}

	if (correct == true) {
		//a->t //c->g //odam b3d
		for (int i = 0; i <= x; i = i + 2) {
			if (data[i] == 'A' && data[i + 1] != 'T') {
				return "Data is invalid. An A has to be followed by a T";
				correct = false;
				break;
			}
			else if (data[i] == 'T' && data[i + 1] != 'A')
			{
				cout << "Data is invalid. A T has to be followed by an A" << endl;
				correct = false;
				break;
			}
			else if (data[i] == 'C' && data[i + 1] != 'G')
			{
				cout << "Data is invalid. A C has to be followed by a G" << endl;
				correct = false;
				break;
			}
			else if (data[i] == 'G' && data[i + 1] != 'C')
			{
				cout << "Data is invalid. A G has to be followed by a C" << endl;
				correct = false;
				break;
			}
		}
	}
	if (correct == false)
	{
		return false;
	}
	else if (correct == true)
	{
		return true;
	}
	return false;
}

void DNAA::insert(string  data) {
	DNA* ROOT = root;
	int n = data.length();
	for (int i = 0; i < n; i++) {
		switch (data[i]) {
		
		case 'A':

			if (!ROOT->A) {
				ROOT->A = new DNA(data[i]); countnodes++;
			}
			ROOT = ROOT->A;
			break;

		case 'C':

			if (!ROOT->C) {
				ROOT->C = new DNA(data[i]); countnodes++;
			}
			ROOT = ROOT->C;
			break;

		case 'G':

			if (!ROOT->G) {
				ROOT->G = new DNA(data[i]); countnodes++;
			}
			ROOT = ROOT->G;
			break;

		case 'T':

			if (!ROOT->T) {
				ROOT->T = new DNA(data[i]); countnodes++;
			}
			ROOT = ROOT->T;
			break;

		}
	}
	countstrings++;
	ROOT->endOfSeg = true;
}

DNAA::DNA* DNAA::search(string data) {
	DNA* p = root;
	int n = data.length();
	for (int i = 0; i < n; i++) {
		switch (data[i]) {
		case 'A':
			if (!p->A)
				return NULL;
			p = p->A;
			break;
		case 'C':
			if (!p->C)
				return NULL;
			p = p->C;
			break;
		case 'G':
			if (!p->G)
				return NULL;
			p = p->G;
			break;
		case 'T':
			if (!p->T)
				return NULL;
			p = p->T;
			break;

		}

	}
	//lw end of word w msh b null
	if (p->endOfSeg && p != NULL)
		return (p);
	else return NULL;
}

DNAA::DNA* DNAA::remove(DNA* root, string data, int depth) {
	// If tree is empty 
	if (!root)
		cout << "Cant perform function, tree is empty";
	if (!search(data)) {
		cout << "DNA fragment not found to be deleted";
	}
	// If last character of key is being processed 
	if (depth == data.size()) {

		// This node is no more end of word after 
		// removal of given key 
		if (root->endOfSeg)
			root->endOfSeg = false;

		// If given is not prefix of any other word 
		if (isEmpty(root)) {
			delete (root);
			root = NULL;
		}

		return root;
	}
	// If not last character, recur for the child 

	for (int i = 0; i < data.size(); i++) {
		if (root->A != NULL) {
			if (root->A->data == data[i]) {
				root->A = remove(root->A, data, depth + 1);
				break;
			}
		}
		if (root->C != NULL) {
			if (root->C->data == data[i]) {
				root->C = remove(root->C, data, depth + 1);
				break;
			}
		}
		if (root->G != NULL) {
			if (root->G->data == data[i]) {
				root->G = remove(root->G, data, depth + 1);
				break;
			}
		}
		if (root->T != NULL) {
			if (root->T->data == data[i]) {
				root->T = remove(root->T, data, depth + 1);
				break;
			}
		}
	}


	// If root does not have any child (its only child got  
	// deleted), and it is not end of another word. 
	if (isEmpty(root) && root->endOfSeg == false) {
		delete (root);
		root = NULL;
	}
	return root;
}
//ATGCTACGTACG
void DNAA::convert(DNA* root, ElementType str[], int level)
{
	if (root->endOfSeg)
	{
		str[level] = '/0';
		cout << str << endl;
	}
	if (root->A != NULL)
	{
		str[level] = 'U';
		convert(root->A, str, level + 1);
	}
	if (root->C != NULL)
	{
		str[level] = 'G';
		convert(root->C, str, level + 1);
	}
	if (root->G != NULL)
	{
		str[level] = 'C';
		convert(root->G, str, level + 1);
	}
	if (root->T != NULL)
	{
		str[level] = 'A';
		convert(root->T, str, level + 1);
	}

}

DNAA::DNA* DNAA::getroot()
{
	return root;
}

bool DNAA::isEmpty(DNA* root)
{
	if (root->A != NULL) return false;
	if (root->C != NULL)return false;
	if (root->G != NULL)return false;
	if (root->T != NULL)return false;
	else return true;
}

int DNAA::numofnodes()
{
	return countnodes;
}

int DNAA::numofstrings()
{
	return countstrings;
}

void DNAA::deleteTree(DNA* node)
{
	if (node == NULL)
		return;
	/* first delete all subtrees */
	deleteTree(node->A);
	deleteTree(node->C);
	deleteTree(node->G);
	deleteTree(node->T);

	/* then delete the node */
	delete node;
}

void DNAA::prefix(string data)
{
	char str[20];
	insert(data);
	if (!isEmpty(search(data)))
	{
		cout << "DNA fragments with prefix " << data << endl;
		convert(search(data), str);
	}
	else
	{
		cout << "Prefix not found ";
		remove(root, data);
	}
}

