/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/GADGMSGHandler.h>
#import <SportyTrader/GADMRAIDPictureDelegate.h>

@class GADOpener, NSMutableDictionary, NSString;

@interface GADMRAIDGMSGHandler : GADGMSGHandler <GADMRAIDPictureDelegate> {

	GADOpener* _opener;
	NSMutableDictionary* _pendingPictureDownloads;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionBlockDictionary;
+(id)subActionBlockDictionary;
-(void)adView:(id)arg1 didReceiveMRAIDNotification:(id)arg2 ;
-(void)adView:(id)arg1 didReceiveMRAIDLoadNotification:(id)arg2 ;
-(void)adView:(id)arg1 actionResize:(id)arg2 ;
-(void)adView:(id)arg1 actionStorePicture:(id)arg2 ;
-(void)adView:(id)arg1 actionCreateCalendarEvent:(id)arg2 ;
-(void)adView:(id)arg1 actionSetOrientationProperties:(id)arg2 ;
-(void)MRAIDPicture:(id)arg1 failedToStorePictureWithURL:(id)arg2 message:(id)arg3 ;
-(void)MRAIDPicture:(id)arg1 didStorePictureWithURL:(id)arg2 ;
-(id)initWithOpener:(id)arg1 ;
@end
