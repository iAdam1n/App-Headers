/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExpiringProfileLogger.h>

@class FBAnalytics, NSString;

@interface FBExpiringProfilePicLogger : NSObject <FBExpiringProfileLogger> {

	FBAnalytics* _analytics;
	NSString* _compositionID;
	NSString* _fbid;
	unsigned long long _source;
	NSString* _expirationTime;
	BOOL _isExpirationTimeChanged;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFBID:(id)arg1 compositionID:(id)arg2 source:(unsigned long long)arg3 ;
-(void)logExpiringProfilePicSuccessEvents;
-(void)logExpiringProfilePicExposeEvents;
-(void)logExpiringProfilePicCancelEvents;
-(id)initWithFBID:(id)arg1 source:(unsigned long long)arg2 ;
-(void)didChangeExpirationTime;
-(void)logExpiringProfileEnterFlowEvents;
-(void)didSetExpirationTime:(id)arg1 ;
@end
