//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSRCountdownTimerTemplate : NSRTemplate
{
    _Bool _enabled;
    NSRAction *_action;
    int _actionDelayInSeconds;
    UIColor *_bodyBackgroundColor;
    UIColor *_countdownTextColor;
    UIColor *_headerBackgroundColor;
    NSString *_headerText;
    UIColor *_headerTextColor;
}

@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UIColor *headerTextColor; // @synthesize headerTextColor=_headerTextColor;
@property(retain, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(retain, nonatomic) UIColor *headerBackgroundColor; // @synthesize headerBackgroundColor=_headerBackgroundColor;
@property(retain, nonatomic) UIColor *countdownTextColor; // @synthesize countdownTextColor=_countdownTextColor;
@property(retain, nonatomic) UIColor *bodyBackgroundColor; // @synthesize bodyBackgroundColor=_bodyBackgroundColor;
@property(nonatomic) int actionDelayInSeconds; // @synthesize actionDelayInSeconds=_actionDelayInSeconds;
@property(retain, nonatomic) NSRAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)cancel;
- (id)init;

@end