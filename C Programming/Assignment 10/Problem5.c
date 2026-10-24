


 char* mystrcat(char* arr, char* arr2){


  int i = 0;
  int j = strlen(arr);

  while (arr2[i] != '\0')
  {
     arr[j + i] = arr2[i];
      
    i++;
  }
  arr[i + j] = '\0';
    return arr;
    
}