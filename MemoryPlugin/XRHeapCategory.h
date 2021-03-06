//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRHeapCategory : NSObject
{
    unsigned int _categoryIdentifier;
    NSString *_categoryName;
    XRManagedIDArray *_identifiers;
    XRManagedEventArrayController *_ac;
    NSArray *_promotedIDs;
    unsigned long long _size;
    XRHeapGeneration *_parent;
}

@property(readonly) unsigned long long size; // @synthesize size=_size;
@property(readonly) XRHeapGeneration *generation; // @synthesize generation=_parent;
@property(readonly, copy) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(readonly) unsigned int categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(readonly) unsigned int count;
- (void)clear;
- (unsigned int *)copyIdentifiers;
- (void)addEventIdentifier:(unsigned int)arg1 withWeight:(unsigned int)arg2;
- (void)sortWithDescriptor:(id)arg1;
@property(readonly) NSArray *sortedIdentifiers;
- (id)description;
- (void)dealloc;
- (id)initWithCategoryIdentifier:(unsigned int)arg1 storageManager:(id)arg2 categoryName:(id)arg3 generation:(id)arg4;

@end