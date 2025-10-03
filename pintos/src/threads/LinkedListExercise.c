/*
  Exercise: Pintos Linked Lists

  test_list demonstrates how to work with linked lists.
  Should be removed from kernel after you play with it!!

  1. Add this code at the end of src/thread.c

  2. Call test_list at the end of thread_start().

  3. Build pintos in src/thread.  cd build.  Run "pintos run alarm-multiple".
     Can you see where test_list is called?

  4. Find the list code (hint: see aliases below) and look at list.h and list.c.

  5. Read list.h, especially the discussion of list_entry.
     On a piece of paper sketch the linked list to show how list_entry works.
     Show this to me.

  6. Finish the for-loop to print out the elements in the list.

  7. In test_list, after printing the list, use list_min to find and
     print the minimum element in your list (probably "Spain").  Hint:
     you can use the strcmp function to implement the less function
     pointer.  Take a look at how this is done in src/tests/internal/list.c
     to get an idea how to write your own value_less function.  Note that
     list_min returns a list node NOT the min item.

  8. You should then return allocated memory in a reasonable manner.
     What happens to the list when memory is freed?

  9. Show me your working solution!!

  10. Finally, remove these and all other changes from src/thread.c when complete.

BTW, here are helpful aliases for your .bashrc
findn: USAGE find filename.  Recursively looks to match filename substring in any file name.
FIND XX : executes a grpe, looking for string XX in all file.
CFIND XX: like FIND, but only considers .c file.

findn(){name \*$1\* -print;}
FIND(){ find . -exec grep -s $1 {} \; -print; }
CFIND(){ find . -name \*.c -exec grep -s $1 {} \; -print; }

*/

// One element in the list
struct mystruct {
  char *word;
  struct list_elem elem;
};

/*
  Build a list and test that it works.
*/

int test_list() {
  struct list wordlist;
  char *stuff[] = {"The","rain","in","Spain","falls", // static, in stack.
		   "mainly","in","the","plain.",NULL};
  int i;
  struct list_elem *e;
  
  list_init(&wordlist);

  if (list_empty(&wordlist)) printf("list is empty\n");
  else printf("list has %d elements\n",list_size(&wordlist));


  // Create linked list of mystructs.
  // Copy ptrs from stuff to the list words.
  for (i = 0; stuff[i] != NULL; i++) {
    struct mystruct *s = (struct mystruct *) malloc(sizeof(struct mystruct));
    s->word = stuff[i];
    list_push_back (&wordlist, &s->elem); // onto end of list
  }
  if (list_empty(&wordlist)) printf("list is empty\n");
  else printf("list has %d elements\n",list_size(&wordlist));

  // Loop over list
  for (e = list_begin(&wordlist);
       e != list_end(&wordlist);
       e = list_next(e) ) {
    // TODO: Print out the items in the list.
    // You need to find and read the list code to figure this out.
    // You then also need to free the dynamically allocated memory!
  }

  // TODO: Find an print the smallest item in the list.



  // TODO: return malloc'd memory.
  
  return (0);
}


