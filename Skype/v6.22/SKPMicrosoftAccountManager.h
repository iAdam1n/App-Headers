/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SKPMicrosoftAccountManager : NSObject {

	BOOL _observing;
	NSString* _msaSessionId;

}

@property (assign,getter=isObserving,nonatomic) BOOL observing;              //@synthesize observing=_observing - In the implementation block
@property (nonatomic,retain) NSString * msaSessionId;                        //@synthesize msaSessionId=_msaSessionId - In the implementation block
-(NSString *)msaSessionId;
-(void)setMsaSessionId:(NSString *)arg1 ;
-(void)liveIdProfileWithAccessTokenSuccessful:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 data:(id)arg3 ;
-(void)liveIdProfileWithAccessTokenFailure:(/*^block*/id)arg1 withError:(id)arg2 ;
-(id)signinURL;
-(void)liveIdProfileWithAccessToken:(id)arg1 onFinish:(/*^block*/id)arg2 onFail:(/*^block*/id)arg3 ;
-(id)avatarURLWithUserId:(id)arg1 ;
-(id)signinURLWithUsername:(id)arg1 ;
-(id)signupURL;
-(void)didLogIn;
-(void)didLogOut;
-(void)dealloc;
-(id)init;
-(id)scope;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)displayType;
-(id)siteName;
-(void)setObserving:(BOOL)arg1 ;
-(BOOL)isObserving;
@end
