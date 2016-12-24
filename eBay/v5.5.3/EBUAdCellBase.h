/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUDynamicHeightViewCollectionCell.h>

@class RTMContent;

@interface EBUAdCellBase : EBUDynamicHeightViewCollectionCell {

	RTMContent* _rtmContent;
	double _calculatedHeight;

}

@property (assign,nonatomic) double calculatedHeight;              //@synthesize calculatedHeight=_calculatedHeight - In the implementation block
@property (nonatomic,retain) RTMContent * rtmContent;              //@synthesize rtmContent=_rtmContent - In the implementation block
-(void)invalidateHeight;
-(double)calculatedHeight;
-(void)setCalculatedHeight:(double)arg1 ;
-(void)setShouldShowBottomDividerView:(BOOL)arg1 ;
-(RTMContent *)rtmContent;
-(void)setRtmContent:(RTMContent *)arg1 ;
-(double)heightForWidth:(double)arg1 ;
@end
