//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class NTTaskController;

@interface NTDiskUtilTask : NSObject
{
    NTTaskController *_taskController;
}

+ (void)renameDisk:(id)arg1 atMountPoint:(id)arg2;
- (void)dealloc;
- (void)delegate_handleTaskFinished:(id)arg1;
- (void)delegate_handleTaskOutput:(id)arg1;
- (void)delegate_handleTaskErrors:(id)arg1;

@end

