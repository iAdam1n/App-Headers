/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class FBMemPhoto, FBUserSession, NSString, FBPhotosConsumptionReferrer, UIAlertView;

@interface FBPhotoUntagHandler : NSObject <UIAlertViewDelegate> {

	FBMemPhoto* _photo;
	FBUserSession* _session;
	NSString* _analyticsModule;
	FBPhotosConsumptionReferrer* _referrer;
	UIAlertView* _untagAlertView;
	/*^block*/id _completionBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPhoto:(id)arg1 session:(id)arg2 analyticsModule:(id)arg3 referrer:(id)arg4 ;
-(void)untagDefaultViewer;
-(void)_untagPhoto;
-(void)_logReportPhotoUntag:(id)arg1 event:(id)arg2 ;
-(void)dealloc;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end
