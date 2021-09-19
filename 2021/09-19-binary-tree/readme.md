# 2021-09-19

## Bai hoc

### Tree

- Graph (Do thi): chua cac nodes va cac edges giua cac nodes
  - Cycles: 1 con duong ben trong graph sao cho diem bat dau cung chinh la diem
    ket thuc.
- Tree: graph ma khong co cycles.
  - Tree n nodes se co n-1 edges
  - Chon 1 node lam goc (root)
  - 1 node co the co 0 hoac nhieu node con (children)
    - Node ma khong co children goi la (leaf)

### Binary Tree

- La dang tree ma moi node co toi da 2 children.

- **Height**: so buoc de di tu goc den leaf xa nhat.

- **Complete tree**: tat ca cac node deu co chinh xac 2 node con ngoai tru leaves.

```
     1
   /   \
  2      3
```

- Quiz:
  - Complete tree co Height = 4. Vay no bao nhieu nodes?
    - 1 + 2 + 4 + 8 = 15 = 2^4 - 1
    - $$2^0 + 2^1 + 2^2 + 2^3 = 15 $$
  - Complete tree co Height = h. Vay no bao nhieu nodes?
    - `2^h - 1`

$$
f(h) = 2^0 + 2^1 + 2^2 + ... + 2^{h-1} = 2^h - 1
$$

### Thuat toan duyet (traveral) tree

- Pre-order: root, left, right
- In-order: left, root, right
- Post-order: left, right, root

- Level-order: xu ly tree theo tung level

## Bai tap ve nha

- Nghien cuu tim cach viet ham `make_tree`, input nhu the nao tuy y, mien sao co
  the create bat ky cai binary tree nao theo y muon. **Submit bang PR tren Github.**
- Su dung thuat toan `make_tree` de viet test va lam cac bai tap sau day tren
  Leetcode:
  - https://leetcode.com/problems/binary-tree-inorder-traversal/
  - https://leetcode.com/problems/binary-tree-preorder-traversal/
  - https://leetcode.com/problems/binary-tree-postorder-traversal/
- [Optional] Viet 1 so ham sau day de ho tro viec viet test:
  - `assert_tree_equal`
  - `tree_height`: tinh chieu cao cua tree
  - `tree_count`: dem so luong node trong tree
  - `tree_print`
