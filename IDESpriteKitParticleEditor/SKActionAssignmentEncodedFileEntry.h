//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKActionAssignmentEncodedFileEntry : NSObject <NSCoding>
{
    NSDictionary *_assignments;
    NSDate *_dateCreated;
}

@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(copy, nonatomic) NSDictionary *assignments; // @synthesize assignments=_assignments;
- (void).cxx_destruct;
- (void)touchEntry;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initFromDecodedEntry:(id)arg1 withUIDToNodeMapping:(id)arg2;

@end