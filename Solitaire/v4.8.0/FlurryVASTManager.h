/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSMutableArray;

@interface FlurryVASTManager : NSObject {

	NSNumber* version;
	NSMutableArray* flurryVASTAds;

}

@property (nonatomic,retain) NSNumber * version; 
@property (nonatomic,retain) NSMutableArray * flurryVASTAds; 
-(id)getMediaFileUrl;
-(id)getVideoClickUrl:(long long)arg1 ;
-(id)getErrorUrls;
-(id)getImpressionUrls;
-(id)getTrackingEventUrls:(int)arg1 ;
-(NSMutableArray *)flurryVASTAds;
-(void)setFlurryVASTAds:(NSMutableArray *)arg1 ;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSNumber *)version;
@end
