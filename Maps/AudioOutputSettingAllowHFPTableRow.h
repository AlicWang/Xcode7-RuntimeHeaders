//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AudioOutputSettingAllowHFPTableRow : AudioSettingTableRow
{
    AudioOutputSetting *_outputSetting;
    id <AudioOutputSettingAllowHFPTableRowDelegate> _delegate;
}

@property(nonatomic) __weak id <AudioOutputSettingAllowHFPTableRowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configureCurrentCell;
- (void)_switchDidChangeValue:(id)arg1;
- (void)dealloc;
- (id)reuseIdentifierForCell;
- (id)initWithAudioOutputSetting:(id)arg1;

@end