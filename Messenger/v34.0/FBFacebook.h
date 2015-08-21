/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:12 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBSessionDelegate;
@class NSArray, FBMURLRequestFormatter;

@interface FBFacebook : NSObject {

	id<FBSessionDelegate> _sessionDelegate;
	NSArray* _permissions;
	FBMURLRequestFormatter* _urlRequestFormatter;

}

@property (assign,nonatomic) id<FBSessionDelegate> sessionDelegate;                     //@synthesize sessionDelegate=_sessionDelegate - In the implementation block
@property (nonatomic,retain) FBMURLRequestFormatter * urlRequestFormatter;              //@synthesize urlRequestFormatter=_urlRequestFormatter - In the implementation block
-(id)requestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 ;
-(id)requestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 andCredentials:(id)arg5 connectNow:(BOOL)arg6 ;
-(id)requestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 andCredentials:(id)arg5 connectNow:(BOOL)arg6 forceBootstrapHost:(BOOL)arg7 ;
-(id)requestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 andCredentials:(id)arg5 connectNow:(BOOL)arg6 forceBootstrapHost:(BOOL)arg7 timeoutOverride:(double)arg8 ;
-(BOOL)isBootstrapMethod:(id)arg1 ;
-(id)openUrl:(id)arg1 params:(id)arg2 httpMethod:(id)arg3 delegate:(id)arg4 credentials:(id)arg5 connectNow:(BOOL)arg6 timeoutOverride:(double)arg7 ;
-(id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 ;
-(id)initWithURLRequestFormatter:(id)arg1 ;
-(BOOL)isSpecialMethod:(id)arg1 ;
-(id)parseURLParams:(id)arg1 ;
-(id)requestWithParams:(id)arg1 andDelegate:(id)arg2 ;
-(id)requestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 forceBootstrapHost:(BOOL)arg5 ;
-(id)requestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 connectNow:(BOOL)arg5 ;
-(id)requestWithGraphPath:(id)arg1 andDelegate:(id)arg2 ;
-(id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andDelegate:(id)arg3 ;
-(id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 connectNow:(BOOL)arg5 ;
-(id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 andCredentials:(id)arg5 connectNow:(BOOL)arg6 ;
-(id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 andCredentials:(id)arg5 connectNow:(BOOL)arg6 timeoutOverride:(double)arg7 ;
-(id)squarePhotoURLForUserId:(id)arg1 ;
-(id)restServerUrlForMethod:(id)arg1 ;
-(void)setSessionDelegate:(id<FBSessionDelegate>)arg1 ;
-(FBMURLRequestFormatter *)urlRequestFormatter;
-(void)setUrlRequestFormatter:(FBMURLRequestFormatter *)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dealloc;
-(id<FBSessionDelegate>)sessionDelegate;
@end

