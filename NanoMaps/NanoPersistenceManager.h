//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NanoPersistenceManager : NSObject
{
}

+ (id)historyPath;
+ (id)pinsPath;
+ (id)bookmarksPath;
+ (id)mapsDirectory;
+ (id)sharedManager;
- (_Bool)writeHistory:(id)arg1 error:(id *)arg2;
- (id)readHistory;
- (_Bool)writePins:(id)arg1 error:(id *)arg2;
- (id)readPins;
- (_Bool)writeBookmarks:(id)arg1 error:(id *)arg2;
- (id)readBookmarks;

@end