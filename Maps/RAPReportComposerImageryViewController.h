//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RAPReportComposerImageryViewController : RAPReportTableViewController
{
    RAPImageryQuestion *_question;
    RAPTablePart *_regionPart;
    RAPReportComposerImageryRegionSection *_regionSection;
    RAPTablePart *_problemKindPart;
    RAPTableCheckmarkRadioSection *_problemKindSection;
    RAPReportComposerCommentPart *_commentPart;
}

- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)isRegionSection:(long long)arg1;
- (id)tableParts;
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end