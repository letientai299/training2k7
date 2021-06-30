#pragma once

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// const int limit = 10000000;
const int limit = 100;
const int num_experiments = 40;

// generate an array of number with given size
// and upper limit.
int* gen_array(int size, int limit)
{
  int* arr = calloc(size, sizeof(int));
  for (int i = 0; i < size; i++) {
    int n = rand() % limit;
    arr[i] = n;
  }
  return arr;
}

// print array as space delimited list of number.
void print_array(int* arr, int size)
{
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int count_swap = 0;

// swap se doi cho 2 phan tu o vi tri i va j
void swap(int* arr, int i, int j)
{
  int t = arr[i];
  arr[i] = arr[j];
  arr[j] = t;
  count_swap++;
}

int count_compare = 0;

bool less(int x, int y)
{
  count_compare++;
  return x <= y;
}

bool strict_less(int x, int y)
{
  count_compare++;
  return x < y;
}


// check returns false neu array chua duoc sort mot cach chinh xac
bool check(int* arr, int size)
{
  for (int i = 0; i < size - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      // sau khi sort, phan tu dung truoc phai nho hon phan tu dung sau
      return false;
    }
  }

  return true;
}

void experiment(void algo(int*, int), int size)
{
  int total_swap = 0;
  int total_compare = 0;
  for (int i = 0; i < num_experiments; i++) {
    count_swap = 0;
    count_compare = 0;
    int* arr = gen_array(size, limit);

    algo(arr, size);

    if (check(arr, size) == false) {
      printf("Wrong result, algorithm has bug!\n");
      printf("Output array: \n");
      print_array(arr, size);
      return;
    }

    total_swap += count_swap;
    total_compare += count_compare;
    free(arr);
  }

  int avg_swap = total_swap / num_experiments;
  int avg_compare = total_compare / num_experiments;
  printf("n %5d, avg_swap %10d, avg_compare %10d, n^2 %10d\n", size, avg_swap,
      avg_compare, size * size);
}

