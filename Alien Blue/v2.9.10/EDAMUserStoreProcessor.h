/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/TProcessor.h>

@protocol EDAMUserStore;
@class NSDictionary, NSString;

@interface EDAMUserStoreProcessor : NSObject <TProcessor> {

	id<EDAMUserStore> mService;
	NSDictionary* mMethodMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)processOnInputProtocol:(id)arg1 outputProtocol:(id)arg2 ;
-(void)process_checkVersion_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3 ;
-(void)process_getBootstrapInfo_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3 ;
-(void)process_authenticate_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3 ;
-(void)process_authenticateLongSession_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3 ;
-(void)process_completeTwoFactorAuthentication_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3 ;
-(void)process_revokeLongSession_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3 ;
-(void)process_authenticateToBusiness_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3 ;
-(void)process_refreshAuthentication_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3 ;
-(void)process_getUser_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3 ;
-(void)process_getPublicUserInfo_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3 ;
-(void)process_getPremiumInfo_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3 ;
-(void)process_getNoteStoreUrl_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3 ;
-(id)initWithUserStore:(id)arg1 ;
-(void)dealloc;
-(id)service;
@end

