/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSDate, NSString;

@interface FBPersonSyncSummary : FBValueObject <NSCopying> {

	NSDate* _timeSyncStarted;
	NSString* _cursorForFetchingDeltasSinceSyncTookPlace;

}

@property (nonatomic,copy,readonly) NSDate * timeSyncStarted;                                          //@synthesize timeSyncStarted=_timeSyncStarted - In the implementation block
@property (nonatomic,copy,readonly) NSString * cursorForFetchingDeltasSinceSyncTookPlace;              //@synthesize cursorForFetchingDeltasSinceSyncTookPlace=_cursorForFetchingDeltasSinceSyncTookPlace - In the implementation block
-(NSString *)cursorForFetchingDeltasSinceSyncTookPlace;
-(NSDate *)timeSyncStarted;
-(id)initWithTimeSyncStarted:(id)arg1 cursorForFetchingDeltasSinceSyncTookPlace:(id)arg2 ;
@end

