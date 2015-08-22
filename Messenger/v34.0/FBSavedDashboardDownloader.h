/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBSavedDashboardDownloaderDelegate;
@class FBUserSession;

@interface FBSavedDashboardDownloader : NSObject {

	FBUserSession* _session;
	id<FBSavedDashboardDownloaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSavedDashboardDownloaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)downloadSavedItemsInSection:(id)arg1 ;
-(void)downloadSavedSections;
-(void)setDelegate:(id<FBSavedDashboardDownloaderDelegate>)arg1 ;
-(id)init;
-(id<FBSavedDashboardDownloaderDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end
