//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



#import "PrefsBoxDelegate.h"

@class NTPrefsBox, NTPrefsBoxMgr;

@interface NTCocoaTechBasePreferences : NSObject <PrefsBoxDelegate>
{
    NTPrefsBoxMgr *_prefsBoxMgr;
    NTPrefsBox *_prefsBox;
    BOOL _springLoadedFolders;
    double _springLoadedTimeInterval;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)setSpringLoadedFolders:(BOOL)arg1;
- (BOOL)springLoadedFolders;
- (double)springLoadedTimeInterval;
- (void)setSpringLoadedTimeInterval:(double)arg1;
- (void)prefsBoxModified:(id)arg1 forKey:(id)arg2;
- (id)requiresReloadPreferenceIDs;

@end

