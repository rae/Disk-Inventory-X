//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class NSString;

@interface NTChooseFilePanel : NSObject
{
    NSString *path;
    SEL selector;
    id _target;
}

+ (void)openFile:(id)arg1 window:(id)arg2 target:(id)arg3 selector:(SEL)arg4 fileType:(int)arg5;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (void)startPanel:(id)arg1 window:(id)arg2 fileType:(int)arg3;
- (void)openPanelDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (id)path;

@end

