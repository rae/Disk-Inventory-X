//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@interface NTAuthorizationRef : NSObject
{
    struct AuthorizationOpaqueRef *_authorizationRef;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (struct AuthorizationOpaqueRef *)authorizationRef;

@end

