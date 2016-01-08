//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class NSMutableArray, NTProcess;

@interface NTProcessManager : NSObject
{
    NSMutableArray *_processes;
    NTProcess *_currentProcess;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (id)currentProcess;
- (id)frontProcess;
- (void)showAll;
- (void)hideOthers;
- (void)hideAllExcept:(id)arg1;
- (void)hideFront;
- (void)setFront:(id)arg1;
- (id)processWithName:(id)arg1;
- (id)processWithPath:(id)arg1;
- (id)allProcesses;
- (id)processes;
- (id)backgroundOnlyProcesses;
- (id)allProcessDescs;
- (id)processDescs;
- (id)backgroundOnlyProcessDescs;

@end

