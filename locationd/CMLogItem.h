//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CMLogItem : NSObject <NSSecureCoding, NSCopying>
{
    id _internalLogItem;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double timestamp;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1;

@end