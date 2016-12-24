/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>

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
-(void)setSurface:(NSString *)arg1 ;
-(id)networkRequest;
-(id)initWithSession:(id)arg1 videoID:(id)arg2 videoOwnerID:(id)arg3 surface:(id)arg4 shouldSubscribe:(BOOL)arg5 ;
-(NSString *)videoOwnerID;
-(BOOL)shouldSubscribe;
-(void)setVideoOwnerID:(NSString *)arg1 ;
-(void)setShouldSubscribe:(BOOL)arg1 ;
-(void)setSession:(FBUserSession *)arg1 ;
-(FBUserSession *)session;
-(NSString *)surface;
-(NSString *)videoID;
-(void)setVideoID:(NSString *)arg1 ;
@end
