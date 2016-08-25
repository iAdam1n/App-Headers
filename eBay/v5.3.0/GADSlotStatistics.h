/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/GADStatistics.h>

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

