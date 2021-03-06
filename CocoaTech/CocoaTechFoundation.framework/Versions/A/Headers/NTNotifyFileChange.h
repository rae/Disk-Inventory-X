//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class NSLock, NSMutableArray, NSString;

@interface NTNotifyFileChange : NSObject
{
    NSLock *_threadSafetyLock;
    NSMutableArray *_directoryArray;
    NSString *_notificationName;
}

+ (void)initialize;
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)noteFileChangeWithArray:(id)arg1;
- (void)noteFolderChangeWithArray:(id)arg1;
- (void)noteFileChange:(id)arg1;
- (void)noteFolderChange:(id)arg1;
- (void)sendNTNotifyFileChangeNotification:(id)arg1;

@end

