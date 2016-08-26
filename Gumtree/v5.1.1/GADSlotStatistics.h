/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/GADStatistics.h>

@class NSString, NSDictionary;

@interface GADSlotStatistics : GADStatistics {

	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSDictionary * statistics; 
-(void)startTimingAdapter;
-(void)endTimingAdapterWithExitCode:(long long)arg1 ;
-(void)endTimingAdapterWithFillStatus:(long long)arg1 allocationID:(id)arg2 ;
-(void)resetTimingAdapters;
-(void)resetFillStatus;
-(id)adapterExitCodesParameter;
-(id)adapterDurationsParameter;
-(id)adapterFillStatusParameter;
-(id)init;
-(void)setIdentifier:(id)arg1 ;
-(NSDictionary *)statistics;
@end
