/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSavedDashboardFeedEntryDownloaderDelegate;
@class FBUserSession;

@interface FBSavedDashboardFeedEntryDownloader : NSObject {

	FBUserSession* _session;
	id<FBSavedDashboardFeedEntryDownloaderDelegate> _delegate;

}
-(id)initWithSession:(id)arg1 delegate:(id)arg2 ;
-(id)_parseDashEntryTextFromResponse:(id)arg1 request:(id)arg2 error:(id*)arg3 ;
-(void)fetchEntryText;
@end
