/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:10 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBAccessTokenManaging.h>
#import <Messenger/FBInvalidating.h>

@class NSMutableDictionary, FBKeychainItemController, NSString;

@interface FBAccessTokenStore : NSObject <FBAccessTokenManaging, FBInvalidating> {

	NSMutableDictionary* _cachedAccessTokens;
	FBKeychainItemController* _sessionKeychain;
	BOOL _invalidated;

}

@property (nonatomic,readonly) NSMutableDictionary * accessTokens; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(id)accessTokenForFBID:(id)arg1 ;
-(BOOL)updateAccessToken:(id)arg1 forFBID:(id)arg2 ;
-(NSMutableDictionary *)accessTokens;
-(void)_persistAccessTokens;
-(id)initWithSessionKeychain:(id)arg1 ;
-(void)addViewerAccessTokens:(id)arg1 ;
-(void)setCachedAccessTokens:(id)arg1 ;
-(id)cachedAccessTokens;
-(void)invalidate;
-(BOOL)isValid;
@end

