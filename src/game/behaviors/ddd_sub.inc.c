// ddd_sub.c.inc

void bhv_bowsers_sub_loop(void)
{
    if(save_file_get_flags() & (SAVE_FLAG_HAVE_KEY_2 | SAVE_FLAG_UNLOCKED_UPSTAIRS_DOOR))
        mark_object_for_deletion(o);
}