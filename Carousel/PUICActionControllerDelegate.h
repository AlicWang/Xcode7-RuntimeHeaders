//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol PUICActionControllerDelegate <NSObject>

@optional
- (void)actionController:(PUICActionController *)arg1 willSelectActionItem:(PUICActionItem *)arg2;
- (void)actionControllerDidDisappear:(PUICActionController *)arg1;
- (void)actionControllerWillDisappear:(PUICActionController *)arg1;
- (void)actionControllerDidAppear:(PUICActionController *)arg1;
- (void)actionControllerWillAppear:(PUICActionController *)arg1;
- (void)actionControllerDidCancel:(PUICActionController *)arg1;
- (_Bool)actionControllerItemsMayChange:(PUICActionController *)arg1;
@end