first commit
Git 分支实际上是指向更改快照的指针。

有人把 Git 的分支模型称为必杀技特性，而正是因为它，将 Git 从版本控制系统家族里区分出来。

创建分支命令：

当你切换分支的时候，Git 会用该分支的最后提交的快照替换你的工作目录的内容， 所以多个分支不需要多个目录。

合并分支命令:

git merge
创建分支：git branch <分支名>
删除分支：git branch -d <分支名>
强制删除分支：git branch -D <分支名>
