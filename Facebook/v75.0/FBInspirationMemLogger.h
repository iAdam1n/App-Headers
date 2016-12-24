/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBInspirationCameraComponentModelChangedListener.h>

@class FBUserSession, NSString;

@interface FBInspirationMemLogger : NSObject <FBInspirationCameraComponentModelChangedListener> {

	FBUserSession* _session;
	NSString* _emptyFrameID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)inspirationCameraComponentModelChangedFromPreviousModel:(id)arg1 toCurrentModel:(id)arg2 ;
-(id)_collectMemInfo;
-(id)_frameAssetTypeForFrameContent:(id)arg1 ;
-(id)_collectModelInfoFromPreviousModel:(id)arg1 currentModel:(id)arg2 ;
-(void)_logAction:(id)arg1 extras:(id)arg2 ;
-(id)initWithEmptyFrameID:(id)arg1 session:(id)arg2 ;
@end
