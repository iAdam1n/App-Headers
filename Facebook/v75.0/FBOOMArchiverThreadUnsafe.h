/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDExperimentalDiskCache;
@interface FBOOMArchiverThreadUnsafe : NSObject {

	id<CDExperimentalDiskCache> _store;

}

@property (nonatomic,retain) id<CDExperimentalDiskCache> store;              //@synthesize store=_store - In the implementation block
-(void)archiveOOMEventWithStates:(id)arg1 applicationStatusSnapshot:(id)arg2 ;
-(id)getAllOOMEventsStored;
-(id)initWithStore:(id)arg1 ;
-(void)setStore:(id<CDExperimentalDiskCache>)arg1 ;
-(id<CDExperimentalDiskCache>)store;
@end
