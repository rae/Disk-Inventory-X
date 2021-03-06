//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class NSString, NSTimer;

@interface NTSimpleTimer : NSObject
{
    NSTimer *_timer;
    id _delegate;
    double _interval;
    NSString *_message;
    BOOL _repeats;
}

- (id)initWithInterval:(double)arg1 message:(id)arg2 delegate:(id)arg3 repeats:(BOOL)arg4;
- (void)stop;
- (BOOL)isRunning;
- (void)start;
- (void)start:(BOOL)arg1;
- (void)dealloc;
- (void)timerMethod:(id)arg1;

@end

