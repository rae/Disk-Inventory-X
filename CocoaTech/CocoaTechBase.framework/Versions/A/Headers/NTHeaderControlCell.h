//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableHeaderCell.h"

@class NSString, NTGlyphBlitter;

@interface NTHeaderControlCell : NSTableHeaderCell
{
    NSString *_drawnTitle;
    NTGlyphBlitter *_glyphBlitter;
}

- (id)init;
- (void)dealloc;
- (void)drawInteriorWithFrame:(struct _NSRect)arg1 inView:(id)arg2;

@end
