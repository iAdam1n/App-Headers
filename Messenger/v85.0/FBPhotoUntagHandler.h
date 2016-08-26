/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
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
-(void)_untagPhoto;
-(id)initWithPhoto:(id)arg1 session:(id)arg2 analyticsModule:(id)arg3 referrer:(id)arg4 ;
-(void)untagDefaultViewer;
-(void)_logReportPhotoUntag:(id)arg1 event:(id)arg2 ;
-(void)dealloc;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end
