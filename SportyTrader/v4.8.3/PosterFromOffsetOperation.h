/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <Foundation/NSOperation.h>

@class AVAsset, NSString, SASNativeVideoPosterView;

@interface PosterFromOffsetOperation : NSOperation {

	AVAsset* _asset;
	NSString* _posterOffset;
	SASNativeVideoPosterView* _posterView;
	SCD_Struct_SA23 _duration;

}
-(id)videoThumbnailWithAsset:(id)arg1 timeRange:(SCD_Struct_SA23)arg2 ;
-(id)initWithAsset:(id)arg1 timeRange:(id)arg2 duration:(SCD_Struct_SA23)arg3 posterView:(id)arg4 ;
-(void)main;
@end
