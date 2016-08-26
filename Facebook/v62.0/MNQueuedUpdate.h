/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FBMThreadSummary;

@interface MNQueuedUpdate : NSObject {

	NSArray* _updates;
	FBMThreadSummary* _summary;
	NSArray* _sourceMessageUpdates;

}

@property (nonatomic,copy,readonly) NSArray * updates;                           //@synthesize updates=_updates - In the implementation block
@property (nonatomic,copy,readonly) FBMThreadSummary * summary;                  //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sourceMessageUpdates;              //@synthesize sourceMessageUpdates=_sourceMessageUpdates - In the implementation block
-(id)initWithUpdates:(id)arg1 toThreadSummary:(id)arg2 sourceMessageUpdates:(id)arg3 ;
-(NSArray *)sourceMessageUpdates;
-(FBMThreadSummary *)summary;
-(NSArray *)updates;
@end
