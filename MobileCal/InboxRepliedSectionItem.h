//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface InboxRepliedSectionItem : NSObject
{
    EKEventOccurrenceInfo *_occurrenceInfo;
    EKEvent *_event;
    EKCalendarEventInvitationNotification *_notification;
    NSDictionary *_cellFrameDictionary;
}

@property(retain, nonatomic) NSDictionary *cellFrameDictionary; // @synthesize cellFrameDictionary=_cellFrameDictionary;
@property(retain, nonatomic) EKCalendarEventInvitationNotification *notification; // @synthesize notification=_notification;
@property(retain, nonatomic) EKEvent *event; // @synthesize event=_event;
@property(retain, nonatomic) EKEventOccurrenceInfo *occurrenceInfo; // @synthesize occurrenceInfo=_occurrenceInfo;
- (void).cxx_destruct;
- (id)description;
- (id)initWithOccurrenceInfo:(id)arg1;

@end