//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKComposeRecipientAtom : GKAtomView
{
    GKComposeRecipient *_recipient;
    id <GKComposeRecipientAtomDelegate> _delegate;
}

@property(nonatomic) id <GKComposeRecipientAtomDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GKComposeRecipient *recipient; // @synthesize recipient=_recipient;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithRecipient:(id)arg1;

@end