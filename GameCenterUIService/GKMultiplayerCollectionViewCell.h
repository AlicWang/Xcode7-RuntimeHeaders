//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKMultiplayerCollectionViewCell : UICollectionViewCell
{
    GKMultiplayerParticipant *_participant;
    long long _number;
    UIButton *_addButton;
    UIButton *_removeButton;
    GKLabel *_nameLabel;
    GKLabel *_addLabel;
    GKLabel *_statusLabel;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) GKLabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) GKLabel *addLabel; // @synthesize addLabel=_addLabel;
@property(retain, nonatomic) GKLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(nonatomic) long long number; // @synthesize number=_number;
@property(copy, nonatomic) GKMultiplayerParticipant *participant; // @synthesize participant=_participant;
- (void)prepareForReuse;
- (id)description;
- (void)removePressed;
- (void)addPressed;
@property(nonatomic) _Bool removable; // @dynamic removable;
- (void)participantChanged;
- (id)placeholderImageForParticipant:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end