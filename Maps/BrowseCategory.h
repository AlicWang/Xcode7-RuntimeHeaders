//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface BrowseCategory : NSObject
{
    unsigned long long _type;
    NSArray *_subCategories;
    GEOSearchCategory *_category;
    MKSearchCompletion *_searchAutoCompletion;
}

@property(retain, nonatomic) MKSearchCompletion *searchAutoCompletion; // @synthesize searchAutoCompletion=_searchAutoCompletion;
@property(retain, nonatomic) GEOSearchCategory *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSArray *subCategories; // @synthesize subCategories=_subCategories;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *alternativeName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) UIImage *image;
- (id)initWithCategory:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;

@end