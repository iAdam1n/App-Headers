/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:48:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/C8BBB3B7-A738-4D43-8A19-90B2CFB12AE1/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TestFlight/TestFlight-Structs.h>
@class OASCollectionViewColumnGridLayoutSeparatorInfo;

@interface OASCollectionViewColumnGridLayoutItemLayoutInfo : NSObject {

	OASCollectionViewColumnGridLayoutSeparatorInfo* _separatorInfo;
	CGRect _frame;

}

@property (nonatomic,readonly) CGRect frame;                                                                //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) OASCollectionViewColumnGridLayoutSeparatorInfo * separatorInfo;              //@synthesize separatorInfo=_separatorInfo - In the implementation block
-(OASCollectionViewColumnGridLayoutSeparatorInfo *)separatorInfo;
-(id)initWithFrame:(CGRect)arg1 separatorInfo:(id)arg2 ;
-(id)copyWithYOriginAdjustedByOffset:(double)arg1 ;
-(id)init;
-(CGRect)frame;
@end
