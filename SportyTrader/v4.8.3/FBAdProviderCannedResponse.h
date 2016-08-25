/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/FBAdProviderResponseAds.h>

@class FBAdPlacement, NSArray;

@interface FBAdProviderCannedResponse : FBAdProviderResponseAds {

	FBAdPlacement* _cannedPlacement;
	NSArray* _singleAdArray;

}

@property (nonatomic,retain) FBAdPlacement * cannedPlacement;              //@synthesize cannedPlacement=_cannedPlacement - In the implementation block
@property (nonatomic,retain) NSArray * singleAdArray;                      //@synthesize singleAdArray=_singleAdArray - In the implementation block
-(id)adPlacement;
-(id)initWithResponse:(id)arg1 forAdAtIndex:(long long)arg2 ;
-(void)setCannedPlacement:(FBAdPlacement *)arg1 ;
-(FBAdPlacement *)cannedPlacement;
-(NSArray *)singleAdArray;
-(void)setSingleAdArray:(NSArray *)arg1 ;
@end

