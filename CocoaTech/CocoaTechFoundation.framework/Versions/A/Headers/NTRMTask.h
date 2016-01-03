//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableString, NTSRMOutputParser, NTTaskController;

@interface NTRMTask : NSObject
{
    NSMutableString *_taskErrors;
    NTTaskController *_task;
    NTSRMOutputParser *_outputParser;
    id _delegate;
    BOOL _sendProgress;
    BOOL _sendFinished;
}

- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (id)errors;
- (void)stop;
- (void)deleteDesc:(id)arg1 asRoot:(BOOL)arg2 securityLevel:(int)arg3;

@end
