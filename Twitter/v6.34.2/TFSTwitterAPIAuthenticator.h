/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFSAPIAuthenticator.h>

@protocol TFSAuthenticating;
@class NSString;

@interface TFSTwitterAPIAuthenticator : NSObject <TFSAPIAuthenticator> {

	id<TFSAuthenticating> _authenticating;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAuthenticating:(id)arg1 ;
-(long long)_authTypeForAccountID:(id)arg1 ;
-(void)signRequestWithURL:(id)arg1 parameters:(id)arg2 method:(id)arg3 multipart:(BOOL)arg4 accountID:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)handleAuthenticationChallenge:(id)arg1 URL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)APIRequest:(id)arg1 isAllowedToAuthenticateByAccountID:(id)arg2 ;
-(id)init;
@end

