//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NTPDFFile;

@interface NTPDFImageView : NSView
{
    unsigned int _numPages;
    struct _NSSize _paperSize;
    struct _NSSize _pageSize;
    int _spaceBetweenPages;
    NTPDFFile *_pdfFile;
}

+ (id)pdfImageView:(struct _NSRect)arg1;
- (id)initWithFrame:(struct _NSRect)arg1;
- (void)dealloc;
- (void)setDesc:(id)arg1;
- (void)drawRect:(struct _NSRect)arg1;
- (void)gotoPage:(unsigned int)arg1;
- (unsigned int)numberOfPages;
- (int)currentPage;
- (BOOL)isFlipped;
- (BOOL)isUnlocked;
- (BOOL)isEncrypted;
- (BOOL)unlockWithPassword:(id)arg1;
- (struct _NSSize)pdfPageSize;

@end

