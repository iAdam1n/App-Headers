/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:18 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/OACallDelegate.h>

@protocol OATokenManagerDelegate;
@class OAConsumer, OAToken, NSString, NSObject, NSMutableArray, NSMutableDictionary;

@interface OATokenManager : NSObject <OACallDelegate> {

	OAConsumer* consumer;
	OAToken* acToken;
	OAToken* reqToken;
	OAToken* initialToken;
	NSString* authorizedTokenKey;
	NSString* oauthBase;
	NSString* realm;
	NSString* callback;
	NSObject*<OATokenManagerDelegate> delegate;
	NSMutableArray* calls;
	NSMutableArray* selectors;
	NSMutableDictionary* delegates;
	BOOL isDispatching;

}
-(void)call:(id)arg1 failedWithProblem:(id)arg2 ;
-(void)call:(id)arg1 failedWithError:(id)arg2 ;
-(id)initWithConsumer:(id)arg1 token:(id)arg2 oauthBase:(id)arg3 realm:(id)arg4 callback:(id)arg5 delegate:(id)arg6 ;
-(void)exchangeToken;
-(void)deleteSavedRequestToken;
-(void)renewToken;
-(void)requestToken;
-(void)performCall:(id)arg1 ;
-(void)dequeue:(id)arg1 ;
-(SEL)getSelector:(id)arg1 ;
-(void)requestTokenReceived:(id)arg1 body:(id)arg2 ;
-(void)accessTokenReceived:(id)arg1 body:(id)arg2 ;
-(void)callFinished:(id)arg1 body:(id)arg2 ;
-(void)enqueue:(id)arg1 selector:(SEL)arg2 ;
-(void)fetchData:(id)arg1 method:(id)arg2 parameters:(id)arg3 files:(id)arg4 finished:(SEL)arg5 delegate:(id)arg6 ;
-(void)fetchData:(id)arg1 method:(id)arg2 parameters:(id)arg3 files:(id)arg4 finished:(SEL)arg5 ;
-(void)authorizedToken:(id)arg1 ;
-(void)fetchData:(id)arg1 method:(id)arg2 parameters:(id)arg3 finished:(SEL)arg4 ;
-(void)fetchData:(id)arg1 parameters:(id)arg2 files:(id)arg3 finished:(SEL)arg4 ;
-(void)fetchData:(id)arg1 finished:(SEL)arg2 ;
-(void)dealloc;
-(id)init;
-(id)queue;
-(void)setAccessToken:(id)arg1 ;
-(void)dispatch;
@end

