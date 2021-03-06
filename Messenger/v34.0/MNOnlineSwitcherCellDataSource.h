/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:01 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNOptionalSingleCellDataSource.h>

@class FBUserSession;

@interface MNOnlineSwitcherCellDataSource : MNOptionalSingleCellDataSource {

	FBUserSession* _session;

}

@property (nonatomic,retain) FBUserSession * session;              //@synthesize session=_session - In the implementation block
-(void)_startImageDownloadForCell:(id)arg1 scenePath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

