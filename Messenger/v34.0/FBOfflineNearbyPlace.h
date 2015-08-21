/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBNearbyPlace.h>

@class NSNumber;

@interface FBOfflineNearbyPlace : FBNearbyPlace {

	double _checkinRankingRatio;
	NSNumber* _localCalculatedDistance;

}

@property (assign,nonatomic) double checkinRankingRatio;                    //@synthesize checkinRankingRatio=_checkinRankingRatio - In the implementation block
@property (nonatomic,copy) NSNumber * localCalculatedDistance;              //@synthesize localCalculatedDistance=_localCalculatedDistance - In the implementation block
-(id)initWithName:(id)arg1 pageId:(id)arg2 location:(id)arg3 ;
-(double)checkinRankingRatio;
-(void)setCheckinRankingRatio:(double)arg1 ;
-(NSNumber *)localCalculatedDistance;
-(void)setLocalCalculatedDistance:(NSNumber *)arg1 ;
@end

