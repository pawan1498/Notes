# Difference between has_many and polynorphic association 
- if we need to to associate same model with other model , polymorphic approch is too good. 
- why ? it create a column model_type in a scheme , which will updated automatically whenever we create a record with a refeernce 
for ex : comment is associated with post and article 
in comment table a column exist with  name  commentable type. 

If you try to do samw thing with has_many approch , database schema become less scalable 
because for a single record we have 2 forign key (post_id, artile_id), it cause data intergrity 
like this : comment table 
id | body    | article_id | post_id | video_id
---|---------|------------|----------|---------
1  | Great!  | 1          | NULL     | NULL
2  | Nice!   | NULL       | 1        | NULL
3  | Cool!   | NULL       | NULL     | 2