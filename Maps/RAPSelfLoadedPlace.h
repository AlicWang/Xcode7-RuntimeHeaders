//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RAPSelfLoadedPlace : NSObject <RAPPlace>
{
    MKMapItem *_mapItem;
}

- (void).cxx_destruct;
- (id)placeInfo;
- (id)mapItem;
- (CDStruct_c3b9c2ee)coordinate;
- (long long)source;
- (id)userVisibleTitle;
- (id)initWithMapItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end