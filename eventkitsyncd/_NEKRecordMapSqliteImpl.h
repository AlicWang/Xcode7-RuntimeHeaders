//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _NEKRecordMapSqliteImpl : _NEKRecordMapImpl
{
    struct sqlite3 *_db;
    struct sqlite3_stmt *_selectRecord;
    struct sqlite3_stmt *_updateRecord;
    struct sqlite3_stmt *_insertRecord;
    struct sqlite3_stmt *_deleteRecord;
}

- (id)recordForRecordID:(struct CalRecordID *)arg1;
- (unsigned long long)count;
- (void)removeAllRecords;
- (void)reset;
- (_Bool)commit:(id *)arg1;
- (void)_beginTransaction;
- (void)deleteIdentifierForRecordID:(struct CalRecordID *)arg1;
- (void)setIdentifier:(id)arg1 forRecordID:(struct CalRecordID *)arg2;
- (id)identifierForRecordID:(struct CalRecordID *)arg1;
- (void)insertTableIfNeeded;
- (id)databasePath;
- (void)prepareStatements;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end