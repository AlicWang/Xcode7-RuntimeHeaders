//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RAPReportComposerProblemNotListedViewController : RAPReportTableViewController
{
    RAPProblemNotListedQuestion *_question;
    RAPReportComposerCommentPart *_commentPart;
}

- (void).cxx_destruct;
- (id)tableParts;
- (id)rapReportComposerCommentTableViewCell;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end