//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NTFileDesc;

@interface NTFileNotification : NSObject
{
    NSString *_notificationType;
    NTFileDesc *_desc;
}

+ (id)notification:(id)arg1 withDesc:(id)arg2;
- (id)initWithNotification:(id)arg1 withDesc:(id)arg2;
- (void)dealloc;
- (id)desc;
- (id)notificationType;

@end
