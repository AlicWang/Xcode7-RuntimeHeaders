//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _WDCompareSheetDataUnitGroupSelectionStatus : NSObject
{
    _Bool _selected;
    HKDataUnitGroup *_dataUnitGroup;
    UIColor *_color;
    UIImage *_categoryImage;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIImage *categoryImage; // @synthesize categoryImage=_categoryImage;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) HKDataUnitGroup *dataUnitGroup; // @synthesize dataUnitGroup=_dataUnitGroup;
- (void).cxx_destruct;

@end