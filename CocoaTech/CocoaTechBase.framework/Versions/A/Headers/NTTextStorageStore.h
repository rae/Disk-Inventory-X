//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class NSLock, NSMutableArray;

@interface NTTextStorageStore : NSObject
{
    NSMutableArray *_cache;
    NSLock *_lock;
}

+ (id)sharedInstance;
+ (float)defaultLineFragmentPadding;
- (id)init;
- (void)dealloc;
- (id)checkOutForString:(id)arg1 attributes:(id)arg2;
- (void)checkIn:(id)arg1;

@end

