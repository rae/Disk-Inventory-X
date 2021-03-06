//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class NSString, NTFileDesc;

@interface NTFindParam : NSObject
{
    NTFileDesc *_searchFolder;
    NSString *_name;
    int _nameMatchSpecifier;
    NSString *_extension;
    unsigned int _type;
    unsigned int _creator;
    int _kind;
    float _size;
    int _sizeUnit;
    int _sizeSpecifier;
    int _label;
    int _owner;
    int _group;
    int _access;
    int _created;
    int _modified;
    int _visibility;
    BOOL _searchInsidePackages;
    BOOL _searchInsideSystemFolder;
    BOOL _negateParameters;
    unsigned int _commonattr;
    unsigned int _fileattr;
    unsigned int _searchParamSize;
    char *_lowerSearchParam;
    char *_upperSearchParam;
}

+ (id)findParam:(id)arg1 name:(id)arg2 nameMatchSpecifier:(int)arg3 extension:(id)arg4 kind:(int)arg5 type:(unsigned long)arg6 creator:(unsigned long)arg7 sizeSpecifier:(int)arg8 size:(float)arg9 sizeUnit:(int)arg10 label:(int)arg11 owner:(int)arg12 group:(int)arg13 access:(int)arg14 created:(int)arg15 modified:(int)arg16 visibility:(int)arg17 searchInsidePackages:(BOOL)arg18 searchInsideSystemFolder:(BOOL)arg19 negateParameters:(BOOL)arg20;
- (id)initWithSearchFolder:(id)arg1 name:(id)arg2 nameMatchSpecifier:(int)arg3 extension:(id)arg4 kind:(int)arg5 type:(unsigned long)arg6 creator:(unsigned long)arg7 sizeSpecifier:(int)arg8 size:(float)arg9 sizeUnit:(int)arg10 label:(int)arg11 owner:(int)arg12 group:(int)arg13 access:(int)arg14 created:(int)arg15 modified:(int)arg16 visibility:(int)arg17 searchInsidePackages:(BOOL)arg18 searchInsideSystemFolder:(BOOL)arg19 negateParameters:(BOOL)arg20;
- (void)dealloc;
- (id)searchFolder;
- (id)name;
- (int)nameMatchSpecifier;
- (int)kind;
- (id)extension;
- (unsigned long)type;
- (unsigned long)creator;
- (float)size;
- (int)sizeUnit;
- (int)sizeSpecifier;
- (int)label;
- (int)owner;
- (int)group;
- (int)access;
- (int)created;
- (int)modified;
- (int)visibility;
- (BOOL)searchInsidePackages;
- (BOOL)searchInsideSystemFolder;
- (BOOL)negateParameters;
- (unsigned int)commonattr;
- (unsigned int)fileattr;
- (char *)lowerSearchParam;
- (char *)upperSearchParam;
- (unsigned long)searchParamSize;
- (unsigned long)searchOptions;

@end

