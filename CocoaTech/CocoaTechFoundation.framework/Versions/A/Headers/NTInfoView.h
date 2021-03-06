//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//

@class NSString, NTFileDesc, NTThreadWorkerController, NTTitledInfoView;

@interface NTInfoView : NSView
{
    NTTitledInfoView *_titledInfoView;
    NTFileDesc *_desc;
    BOOL _longFormat;
    NSString *_calculatedFolderSize;
    NSString *_calculatedFolderNumItems;
    NTThreadWorkerController *_calcSizeThread;
}

- (id)initWithFrame:(struct _NSRect)arg1 longFormat:(BOOL)arg2;
- (id)initWithFrame:(struct _NSRect)arg1;
- (void)dealloc;
- (id)desc;
- (void)setDesc:(id)arg1;

@end

