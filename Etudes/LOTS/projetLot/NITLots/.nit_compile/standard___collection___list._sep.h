/* This C header file is generated by NIT to compile modules and programs that requires ../nit/lib/standard/collection/list. */
#ifndef standard___collection___list_sep
#define standard___collection___list_sep
#include "standard___collection___abstract_collection._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_standard___collection___list___List[];

extern const classtable_elt_t VFT_standard___collection___list___ListIterator[];

extern const classtable_elt_t VFT_standard___collection___list___ListNode[];
extern const char LOCATE_standard___collection___list[];
extern const int SFT_standard___collection___list[];
#define ID_standard___collection___list___List (SFT_standard___collection___list[0])
#define COLOR_standard___collection___list___List (SFT_standard___collection___list[1])
#define ATTR_standard___collection___list___List____head(recv) ATTR(recv, (SFT_standard___collection___list[2] + 0))
#define ATTR_standard___collection___list___List____tail(recv) ATTR(recv, (SFT_standard___collection___list[2] + 1))
#define INIT_TABLE_POS_standard___collection___list___List (SFT_standard___collection___list[3] + 0)
#define CALL_standard___collection___list___List___link(recv) ((standard___collection___list___List___link_t)CALL((recv), (SFT_standard___collection___list[3] + 1)))
#define CALL_standard___collection___list___List___init(recv) ((standard___collection___list___List___init_t)CALL((recv), (SFT_standard___collection___list[3] + 2)))
#define CALL_standard___collection___list___List___from(recv) ((standard___collection___list___List___from_t)CALL((recv), (SFT_standard___collection___list[3] + 3)))
#define CALL_standard___collection___list___List___get_node(recv) ((standard___collection___list___List___get_node_t)CALL((recv), (SFT_standard___collection___list[3] + 4)))
#define CALL_standard___collection___list___List___search_node_after(recv) ((standard___collection___list___List___search_node_after_t)CALL((recv), (SFT_standard___collection___list[3] + 5)))
#define CALL_standard___collection___list___List___remove_node(recv) ((standard___collection___list___List___remove_node_t)CALL((recv), (SFT_standard___collection___list[3] + 6)))
#define CALL_standard___collection___list___List___insert_before(recv) ((standard___collection___list___List___insert_before_t)CALL((recv), (SFT_standard___collection___list[3] + 7)))
#define ID_standard___collection___list___ListIterator (SFT_standard___collection___list[4])
#define COLOR_standard___collection___list___ListIterator (SFT_standard___collection___list[5])
#define ATTR_standard___collection___list___ListIterator____list(recv) ATTR(recv, (SFT_standard___collection___list[6] + 0))
#define ATTR_standard___collection___list___ListIterator____node(recv) ATTR(recv, (SFT_standard___collection___list[6] + 1))
#define ATTR_standard___collection___list___ListIterator____index(recv) ATTR(recv, (SFT_standard___collection___list[6] + 2))
#define INIT_TABLE_POS_standard___collection___list___ListIterator (SFT_standard___collection___list[7] + 0)
#define CALL_standard___collection___list___ListIterator___item__eq(recv) ((standard___collection___list___ListIterator___item__eq_t)CALL((recv), (SFT_standard___collection___list[7] + 1)))
#define CALL_standard___collection___list___ListIterator___init(recv) ((standard___collection___list___ListIterator___init_t)CALL((recv), (SFT_standard___collection___list[7] + 2)))
#define CALL_standard___collection___list___ListIterator___delete(recv) ((standard___collection___list___ListIterator___delete_t)CALL((recv), (SFT_standard___collection___list[7] + 3)))
#define CALL_standard___collection___list___ListIterator___insert_before(recv) ((standard___collection___list___ListIterator___insert_before_t)CALL((recv), (SFT_standard___collection___list[7] + 4)))
#define ID_standard___collection___list___ListNode (SFT_standard___collection___list[8])
#define COLOR_standard___collection___list___ListNode (SFT_standard___collection___list[9])
#define ATTR_standard___collection___list___ListNode____next(recv) ATTR(recv, (SFT_standard___collection___list[10] + 0))
#define ATTR_standard___collection___list___ListNode____prev(recv) ATTR(recv, (SFT_standard___collection___list[10] + 1))
#define INIT_TABLE_POS_standard___collection___list___ListNode (SFT_standard___collection___list[11] + 0)
#define CALL_standard___collection___list___ListNode___init(recv) ((standard___collection___list___ListNode___init_t)CALL((recv), (SFT_standard___collection___list[11] + 1)))
#define CALL_standard___collection___list___ListNode___next(recv) ((standard___collection___list___ListNode___next_t)CALL((recv), (SFT_standard___collection___list[11] + 2)))
#define CALL_standard___collection___list___ListNode___next__eq(recv) ((standard___collection___list___ListNode___next__eq_t)CALL((recv), (SFT_standard___collection___list[11] + 3)))
#define CALL_standard___collection___list___ListNode___prev(recv) ((standard___collection___list___ListNode___prev_t)CALL((recv), (SFT_standard___collection___list[11] + 4)))
#define CALL_standard___collection___list___ListNode___prev__eq(recv) ((standard___collection___list___ListNode___prev__eq_t)CALL((recv), (SFT_standard___collection___list[11] + 5)))
static const char LOCATE_standard___collection___list___List_____bra[];
val_t standard___collection___list___List_____bra(val_t p0, val_t p1);
typedef val_t (*standard___collection___list___List_____bra_t)(val_t p0, val_t p1);
static const char LOCATE_standard___collection___list___List_____braeq[];
void standard___collection___list___List_____braeq(val_t p0, val_t p1, val_t p2);
typedef void (*standard___collection___list___List_____braeq_t)(val_t p0, val_t p1, val_t p2);
static const char LOCATE_standard___collection___list___List___first[];
val_t standard___collection___list___List___first(val_t p0);
typedef val_t (*standard___collection___list___List___first_t)(val_t p0);
static const char LOCATE_standard___collection___list___List___first__eq[];
void standard___collection___list___List___first__eq(val_t p0, val_t p1);
typedef void (*standard___collection___list___List___first__eq_t)(val_t p0, val_t p1);
static const char LOCATE_standard___collection___list___List___last[];
val_t standard___collection___list___List___last(val_t p0);
typedef val_t (*standard___collection___list___List___last_t)(val_t p0);
static const char LOCATE_standard___collection___list___List___last__eq[];
void standard___collection___list___List___last__eq(val_t p0, val_t p1);
typedef void (*standard___collection___list___List___last__eq_t)(val_t p0, val_t p1);
static const char LOCATE_standard___collection___list___List___is_empty[];
val_t standard___collection___list___List___is_empty(val_t p0);
typedef val_t (*standard___collection___list___List___is_empty_t)(val_t p0);
static const char LOCATE_standard___collection___list___List___length[];
val_t standard___collection___list___List___length(val_t p0);
typedef val_t (*standard___collection___list___List___length_t)(val_t p0);
static const char LOCATE_standard___collection___list___List___has[];
val_t standard___collection___list___List___has(val_t p0, val_t p1);
typedef val_t (*standard___collection___list___List___has_t)(val_t p0, val_t p1);
static const char LOCATE_standard___collection___list___List___has_only[];
val_t standard___collection___list___List___has_only(val_t p0, val_t p1);
typedef val_t (*standard___collection___list___List___has_only_t)(val_t p0, val_t p1);
static const char LOCATE_standard___collection___list___List___count[];
val_t standard___collection___list___List___count(val_t p0, val_t p1);
typedef val_t (*standard___collection___list___List___count_t)(val_t p0, val_t p1);
static const char LOCATE_standard___collection___list___List___push[];
void standard___collection___list___List___push(val_t p0, val_t p1);
typedef void (*standard___collection___list___List___push_t)(val_t p0, val_t p1);
static const char LOCATE_standard___collection___list___List___unshift[];
void standard___collection___list___List___unshift(val_t p0, val_t p1);
typedef void (*standard___collection___list___List___unshift_t)(val_t p0, val_t p1);
static const char LOCATE_standard___collection___list___List___link[];
void standard___collection___list___List___link(val_t p0, val_t p1);
typedef void (*standard___collection___list___List___link_t)(val_t p0, val_t p1);
static const char LOCATE_standard___collection___list___List___pop[];
val_t standard___collection___list___List___pop(val_t p0);
typedef val_t (*standard___collection___list___List___pop_t)(val_t p0);
static const char LOCATE_standard___collection___list___List___shift[];
val_t standard___collection___list___List___shift(val_t p0);
typedef val_t (*standard___collection___list___List___shift_t)(val_t p0);
static const char LOCATE_standard___collection___list___List___remove[];
void standard___collection___list___List___remove(val_t p0, val_t p1);
typedef void (*standard___collection___list___List___remove_t)(val_t p0, val_t p1);
static const char LOCATE_standard___collection___list___List___remove_at[];
void standard___collection___list___List___remove_at(val_t p0, val_t p1);
typedef void (*standard___collection___list___List___remove_at_t)(val_t p0, val_t p1);
static const char LOCATE_standard___collection___list___List___clear[];
void standard___collection___list___List___clear(val_t p0);
typedef void (*standard___collection___list___List___clear_t)(val_t p0);
static const char LOCATE_standard___collection___list___List___iterator[];
val_t standard___collection___list___List___iterator(val_t p0);
typedef val_t (*standard___collection___list___List___iterator_t)(val_t p0);
static const char LOCATE_standard___collection___list___List___init[];
void standard___collection___list___List___init(val_t p0, int* init_table);
typedef void (*standard___collection___list___List___init_t)(val_t p0, int* init_table);
val_t NEW_List_standard___collection___list___List___init();
static const char LOCATE_standard___collection___list___List___from[];
void standard___collection___list___List___from(val_t p0, val_t p1, int* init_table);
typedef void (*standard___collection___list___List___from_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_List_standard___collection___list___List___from(val_t p0);
static const char LOCATE_standard___collection___list___List___get_node[];
val_t standard___collection___list___List___get_node(val_t p0, val_t p1);
typedef val_t (*standard___collection___list___List___get_node_t)(val_t p0, val_t p1);
static const char LOCATE_standard___collection___list___List___search_node_after[];
val_t standard___collection___list___List___search_node_after(val_t p0, val_t p1, val_t p2);
typedef val_t (*standard___collection___list___List___search_node_after_t)(val_t p0, val_t p1, val_t p2);
static const char LOCATE_standard___collection___list___List___remove_node[];
void standard___collection___list___List___remove_node(val_t p0, val_t p1);
typedef void (*standard___collection___list___List___remove_node_t)(val_t p0, val_t p1);
static const char LOCATE_standard___collection___list___List___insert_before[];
void standard___collection___list___List___insert_before(val_t p0, val_t p1, val_t p2);
typedef void (*standard___collection___list___List___insert_before_t)(val_t p0, val_t p1, val_t p2);
static const char LOCATE_standard___collection___list___ListIterator___item[];
val_t standard___collection___list___ListIterator___item(val_t p0);
typedef val_t (*standard___collection___list___ListIterator___item_t)(val_t p0);
static const char LOCATE_standard___collection___list___ListIterator___item__eq[];
void standard___collection___list___ListIterator___item__eq(val_t p0, val_t p1);
typedef void (*standard___collection___list___ListIterator___item__eq_t)(val_t p0, val_t p1);
static const char LOCATE_standard___collection___list___ListIterator___is_ok[];
val_t standard___collection___list___ListIterator___is_ok(val_t p0);
typedef val_t (*standard___collection___list___ListIterator___is_ok_t)(val_t p0);
static const char LOCATE_standard___collection___list___ListIterator___next[];
void standard___collection___list___ListIterator___next(val_t p0);
typedef void (*standard___collection___list___ListIterator___next_t)(val_t p0);
static const char LOCATE_standard___collection___list___ListIterator___init[];
void standard___collection___list___ListIterator___init(val_t p0, val_t p1, int* init_table);
typedef void (*standard___collection___list___ListIterator___init_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_ListIterator_standard___collection___list___ListIterator___init(val_t p0);
static const char LOCATE_standard___collection___list___ListIterator___index[];
val_t standard___collection___list___ListIterator___index(val_t p0);
typedef val_t (*standard___collection___list___ListIterator___index_t)(val_t p0);
static const char LOCATE_standard___collection___list___ListIterator___delete[];
void standard___collection___list___ListIterator___delete(val_t p0);
typedef void (*standard___collection___list___ListIterator___delete_t)(val_t p0);
static const char LOCATE_standard___collection___list___ListIterator___insert_before[];
void standard___collection___list___ListIterator___insert_before(val_t p0, val_t p1);
typedef void (*standard___collection___list___ListIterator___insert_before_t)(val_t p0, val_t p1);
static const char LOCATE_standard___collection___list___ListNode___init[];
void standard___collection___list___ListNode___init(val_t p0, val_t p1, int* init_table);
typedef void (*standard___collection___list___ListNode___init_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_ListNode_standard___collection___list___ListNode___init(val_t p0);
static const char LOCATE_standard___collection___list___ListNode___next[];
val_t standard___collection___list___ListNode___next(val_t p0);
typedef val_t (*standard___collection___list___ListNode___next_t)(val_t p0);
static const char LOCATE_standard___collection___list___ListNode___next__eq[];
void standard___collection___list___ListNode___next__eq(val_t p0, val_t p1);
typedef void (*standard___collection___list___ListNode___next__eq_t)(val_t p0, val_t p1);
static const char LOCATE_standard___collection___list___ListNode___prev[];
val_t standard___collection___list___ListNode___prev(val_t p0);
typedef val_t (*standard___collection___list___ListNode___prev_t)(val_t p0);
static const char LOCATE_standard___collection___list___ListNode___prev__eq[];
void standard___collection___list___ListNode___prev__eq(val_t p0, val_t p1);
typedef void (*standard___collection___list___ListNode___prev__eq_t)(val_t p0, val_t p1);
#endif