/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/FBSession.h>

@class FBAccessTokenData;

@interface FBTestUserSession : FBSession {

	FBAccessTokenData* _tokenData;
	BOOL _treatReauthorizeAsCancellation;
	BOOL _forceAccessTokenExtension;

}

@property (assign,nonatomic) BOOL treatReauthorizeAsCancellation;              //@synthesize treatReauthorizeAsCancellation=_treatReauthorizeAsCancellation - In the implementation block
@property (assign,nonatomic) BOOL forceAccessTokenExtension;                   //@synthesize forceAccessTokenExtension=_forceAccessTokenExtension - In the implementation block
+(id)sessionWithAccessTokenData:(id)arg1 ;
-(BOOL)shouldExtendAccessToken;
-(id)initWithAccessTokenData:(id)arg1 ;
-(BOOL)treatReauthorizeAsCancellation;
-(BOOL)forceAccessTokenExtension;
-(void)setForceAccessTokenExtension:(BOOL)arg1 ;
-(void)authorizeWithPermissions:(id)arg1 behavior:(unsigned long long)arg2 defaultAudience:(unsigned long long)arg3 isReauthorize:(BOOL)arg4 ;
-(void)setTreatReauthorizeAsCancellation:(BOOL)arg1 ;
-(void)dealloc;
@end

