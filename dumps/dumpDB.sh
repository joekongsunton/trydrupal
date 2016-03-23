#!/bin/bash
mysqldump -u root -p trydrupal > latestdump.sql
currdate=$(date +"%Y-%m-%d_%H-%M-%S")
cp latestdump.sql "backups/$currdate.sql"
