//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDateFormatter.h"

@class NSString;

@interface NTRelativeDateFormatter : NSDateFormatter
{
    NSDateFormatter *_timeFormatter;
    BOOL _appendTimeToRelativeDates;
    NSString *_todayString;
    NSString *_tomorrowString;
    NSString *_yesterdayString;
}

- (id)initWithDateFormat:(id)arg1 allowNaturalLanguage:(BOOL)arg2;
- (void)dealloc;
- (id)stringForObjectValue:(id)arg1;

@end
