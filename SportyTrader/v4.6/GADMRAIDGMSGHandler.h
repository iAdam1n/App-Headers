/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:25 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
-(void)didReceiveMRAIDNotification:(id)arg1 ;
-(void)actionResize:(id)arg1 ;
-(void)actionStorePicture:(id)arg1 ;
-(void)actionCreateCalendarEvent:(id)arg1 ;
-(void)actionSetOrientationProperties:(id)arg1 ;
-(id)initWithOpener:(id)arg1 ;
-(void)MRAIDPicture:(id)arg1 didStorePictureWithURL:(id)arg2 ;
-(void)MRAIDPicture:(id)arg1 failedToStorePictureWithURL:(id)arg2 message:(id)arg3 ;
@end

