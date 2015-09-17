//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPRFNumericComparasionActionController : NPRFActionSheetController
{
    BTSDevice *_device;
    int _comparasionNumber;
    id <NPRFNumericComparasionActionControllerDelegate> _ncDelegate;
}

+ (id)numericComparasionActionControllerForDevice:(id)arg1 comparisionValue:(id)arg2 ncDelegate:(id)arg3;
@property(nonatomic) __weak id <NPRFNumericComparasionActionControllerDelegate> ncDelegate; // @synthesize ncDelegate=_ncDelegate;
@property(nonatomic) int comparasionNumber; // @synthesize comparasionNumber=_comparasionNumber;
@property(retain, nonatomic) BTSDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)cancel;
- (void)confirm;

@end