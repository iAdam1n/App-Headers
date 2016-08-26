/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <eBay/eBay-Structs.h>
@interface EBUTintManager : NSObject {

	long long _xSampleSize;
	long long _ySampleSize;

}

@property (assign,nonatomic) long long xSampleSize;              //@synthesize xSampleSize=_xSampleSize - In the implementation block
@property (assign,nonatomic) long long ySampleSize;              //@synthesize ySampleSize=_ySampleSize - In the implementation block
-(BOOL)tintIsWhiteForView:(id)arg1 backgroundView:(id)arg2 ;
-(void)setXSampleSize:(long long)arg1 ;
-(void)setYSampleSize:(long long)arg1 ;
-(long long)xSampleSize;
-(long long)ySampleSize;
-(double)greyValueOfPoint:(CGPoint)arg1 backgroundView:(id)arg2 ;
-(id)init;
-(void)commonInit;
@end
