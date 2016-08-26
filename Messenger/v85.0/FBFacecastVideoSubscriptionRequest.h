/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequest.h>

@class FBUserSession, NSString;

@interface FBFacecastVideoSubscriptionRequest : FBNetworkerRequest {

	BOOL _shouldSubscribe;
	FBUserSession* _session;
	NSString* _videoID;
	NSString* _videoOwnerID;
	NSString* _surface;

}

@property (nonatomic,retain) FBUserSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * videoID;                     //@synthesize videoID=_videoID - In the implementation block
@property (nonatomic,copy) NSString * videoOwnerID;                //@synthesize videoOwnerID=_videoOwnerID - In the implementation block
@property (nonatomic,copy) NSString * surface;                     //@synthesize surface=_surface - In the implementation block
@property (assign,nonatomic) BOOL shouldSubscribe;                 //@synthesize shouldSubscribe=_shouldSubscribe - In the implementation block
+(id)subscriptionStatusOn;
+(id)subscriptionStatusOff;
-(id)networkRequest;
-(NSString *)videoID;
-(void)setVideoID:(NSString *)arg1 ;
-(void)setSurface:(NSString *)arg1 ;
-(NSString *)videoOwnerID;
-(BOOL)shouldSubscribe;
-(id)initWithSession:(id)arg1 videoID:(id)arg2 videoOwnerID:(id)arg3 surface:(id)arg4 shouldSubscribe:(BOOL)arg5 ;
-(void)setVideoOwnerID:(NSString *)arg1 ;
-(void)setShouldSubscribe:(BOOL)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(NSString *)surface;
@end
