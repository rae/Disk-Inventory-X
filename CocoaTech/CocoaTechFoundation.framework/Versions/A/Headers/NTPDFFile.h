//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class NTFileDesc;

@interface NTPDFFile : NSObject
{
    struct CGPDFDocument *_pdfRef;
    NTFileDesc *_desc;
}

- (id)initWithDesc:(id)arg1;
- (void)dealloc;
- (id)desc;
- (int)numberOfPages;
- (struct _NSRect)pageBounds:(int)arg1;
- (struct _NSRect)cropBounds:(int)arg1;
- (int)rotatingAngle:(int)arg1;
- (void)drawPage:(int)arg1 inRect:(struct _NSRect)arg2;
- (BOOL)isUnlocked;
- (BOOL)isEncrypted;
- (BOOL)unlockWithPassword:(id)arg1;

@end

