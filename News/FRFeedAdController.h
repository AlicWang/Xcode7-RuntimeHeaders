//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRFeedAdController : NSObject
{
    UIView *_hostingView;
    FRFeedAdInventory *_feedInventory;
    FRPrerollAdInventory *_prerollInventory;
    id _currentAssociatedSender;
}

+ (_Bool)debugAdInsertion;
@property(nonatomic) __weak id currentAssociatedSender; // @synthesize currentAssociatedSender=_currentAssociatedSender;
@property(retain, nonatomic) FRPrerollAdInventory *prerollInventory; // @synthesize prerollInventory=_prerollInventory;
@property(retain, nonatomic) FRFeedAdInventory *feedInventory; // @synthesize feedInventory=_feedInventory;
@property(nonatomic) __weak UIView *hostingView; // @synthesize hostingView=_hostingView;
- (void).cxx_destruct;
- (id)prerollInventoryWithSender:(id)arg1;
- (id)inventoryForType:(long long)arg1 withSender:(id)arg2;
- (id)feedInventoryWithSender:(id)arg1;
- (void)_verifySender:(id)arg1;
- (void)setupWithAppInterestController:(id)arg1;
- (id)init;

@end